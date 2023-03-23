#include<iostream> 
using namespace std;
class A
{
    public:
    A(){cout<<"Default const. of class A"<<endl;}
    A(int b){cout<<"Parameterized const. of class A"<<endl;}
};
class B : public A
{
    public:
    B() : A(5)
    {cout<<"Default const. of class B";}
};
int main()
{
    B b1;
}