#include<iostream>
using namespace std;
class fraction
{
    long numerator,denominator;
    public:
    fraction(long n=0,long d=0)
    {
        numerator=n;
        denominator=d;
    }
    void show()
    {
        cout<<numerator<<"/"<<denominator;
    }
    friend void operator>>(istream &is,fraction &F);
    friend void operator<<(ostream &os,fraction &F);
    fraction operator++(int)
    {
        fraction temp;
        temp.numerator= numerator++;
        temp.denominator=denominator++;
        return temp;
    }
    fraction operator++()
    {
        fraction temp;
        temp.numerator=++numerator;
        temp.denominator=++denominator;
        return temp;
    }

    
};

void operator>>(istream &is,fraction &F)
{
    cout<<"Numerator\t:  ";
    is>>F.numerator;
    cout<<"Denominator\t:  ";
    is>>F.denominator;
}
void operator<<(ostream &os,fraction &F)
{
    os<<F.numerator<<endl<<F.denominator;;
}
int main()
{
    fraction f1,f2;
    cout<<"f1 \t:  ";
    f1.show();
    cout<<endl<<"f2 \t:  ";
    f2.show();
    cout<<"\n\nEnter 1st Fraction Value : "<<endl;
    cin>>f1;
    f1++;
    cout<<"\nf1++\t:  ";
    f1.show();
    cout<<endl;
    ++f1;
    cout<<"f1++\t:  ";
    f1.show();
    cout<<"\n\nEnter 2nd Fraction Value : "<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"\nf2 = ++f1\nf1\t:  ";
    f1.show();
    cout<<endl;
    cout<<"f2\t:  ";
    f2.show();
    cout<<"\n\n";
    f2=f1++;
    cout<<"f2 = f1++\nf1\t:  ";
    f1.show();
    cout<<endl;
    cout<<"f2\t:  ";
    f2.show();


    
}