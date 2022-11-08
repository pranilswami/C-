#include<iostream>
using namespace std;
int sum(int a,int b);
float sum(float a,float b);
float sum(int a,float x);
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<sum(a,b);
    cout<<"\nEnter two number\n";
    cin>>x>>y;
    cout<<sum(x,y);
    cout<<"\nEnter two numbers\n";
    cin>>a>>x;
    cout<<sum(a,x);
}
int sum(int a,int b)
{
    return a+b;
}
float sum(float a,float b)
{
    return a+b;
}
float sum(int a,float x)
{
    return a+x;
}