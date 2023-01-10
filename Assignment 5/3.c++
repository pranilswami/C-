#include<iostream>
using namespace std;
class Complex 
{    
    int a,b;
    public:
    Complex(){}
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<endl<<a<<" + "<<b<<"i";
    }

    friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}

int main()
{
    Complex c1(3,4),c2(5,6),c3;
    c3=c1+c2;
    c1.show();
    c2.show();
    c3.show();
}