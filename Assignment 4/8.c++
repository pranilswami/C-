#include<iostream>
using namespace std;

class Bank
{
    int p,r,y;
    float si;
    public:
    Bank(int principle,int rate,int year)
    {
        p=principle;
        r=rate;
        y=year;
    }
    void simpleinterest()
    {
        si=(p*r*y)/100;
    }
    void show()
    {
        cout<<"Simple interest is : "<<si<<endl;
    }
};
int main()
{
    Bank b1(1000,6,3),b2(3000,8,2);
    b1.simpleinterest();
    b2.simpleinterest();
    b1.show();
    b2.show();
}