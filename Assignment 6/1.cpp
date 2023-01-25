#include<iostream>
#include<cstring>
using namespace std;

class Complex 
{
    string name;
    int roll;
    public:
   
    friend istream& operator>>(istream &in,Complex &C);
    friend ostream& operator<<(ostream &os,Complex &C);
};
istream& operator>>(istream &in,Complex &C)
{
    cout<<"\nEnter name : \n";
    in>>C.name;
    cout<<"Enter roll no. : \n";
    in>>C.roll;
    return in;
}
ostream& operator<<(ostream &os,Complex &C)
{
    os<<C.name<<" "<<C.roll<<endl;
    return os;
}
int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
}