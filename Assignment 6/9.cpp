#include<iostream>
using namespace std;
class Number
{
    int num;
    public:
    void setdata(int a)
    {
        num=a;   
    }
    operator int()
    {
        return num;   //returning num
    }
};

int main()
{
    int x=0;
    Number i1;
    i1.setdata(10);
    x = (int )i1;  //calling typecast operator
    cout<<"Value of x is : "<<x;
}