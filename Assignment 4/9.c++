#include<iostream>
using namespace std;

class Bill
{
    int x;
    float bill;
    public:
    Bill(){}

    Bill(int unit)
    {
        x=unit;
    }
    void calculateBill()
    {
        if(x<=100)
        {
            bill=x*1.2;
        }
        else if(x>100&&x<=200)
        {
            bill=x*2;
        }
        else
        {
            bill=x*3;
        }
    }
    
    void showbill()
    {
        cout<<endl<<"Total bill to pay : "<<bill;
    }
    
};

int main()
{
    Bill b1(23),b2(123),b3(445);
    b1.calculateBill();
    b2.calculateBill();
    b3.calculateBill();
    b1.showbill();
    b2.showbill();
    b3.showbill();
}