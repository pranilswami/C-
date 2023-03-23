#include<iostream>
using namespace std;
class A
{
    public:
    A(){cout<<"class A default constructor"<<endl;}
    A(int a){cout<<"class A Parameterized constructor"<<endl;}
};
class B : public A
{
    public:
    B():A(5)//Here we can call the parameterized constructor of class A without making its object
    {cout<<"class B constructor ";}
};
int main()
{
    B b1;
}