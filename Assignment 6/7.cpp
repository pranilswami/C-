#include<iostream>
using namespace std;
class integer
{
    int a;
    public:
    integer(){}
    integer(int x)
    {
        a=x;
    }
    integer operator!()
    {
        integer I;
        I.a=-a;
        return I;
    }
    void display()
    {
        cout<<"Number is : "<<a;
    }
};
int main()
{
    integer i1(3),i2(34),i3;
    i3=!i1;
    i1.display();
    i2.display();
    i3.display();

}