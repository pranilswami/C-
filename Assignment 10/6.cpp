#include<iostream>
using namespace std;

class A
{
    public:
    A(){cout<<"Default const. of class A";}
    A(int a){cout<<"Parameterized const. of A"<<endl;}
};
class B : public A
{
    public:
    B():A(4)
    {cout<<"Default const. of class B"<<endl;}
    B(int a):A(4)
    {cout<<"Parameterized const. of class B"<<endl;}
};
class C : public B
{
    public:
    C():B()
    {cout<<"Default const. of class C";}
};
int main()
{
    C c1;
}