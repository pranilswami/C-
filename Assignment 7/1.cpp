#include<iostream>
using namespace std;
class Complex
{
    int real=0,img=0;
    public:
    Complex(){}
    Complex(int a)
    {
        real=a;
        img = a;
    }
    void display()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
};
int main()
{
    Complex c1;
    int x=5;
    c1 = x;
    c1.display();
    return 0;
}