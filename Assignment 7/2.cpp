#include<iostream>
using namespace std;
class Complex
{
    int x,y;
    public:
    Complex(){}
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    explicit operator int()
    {
        return x+y;
    }
    operator long()
    {
        return x+y;
    }
    
};
int main()
{
    Complex c1;
    c1.setdata(3,4);
    cout<<(int )c1;

}