#include<iostream>
using namespace std;
int max(int a,int b);
float max(float a,float b);
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<max(a,b);
    cout<<"\nEnter two number\n";
    cin>>x>>y;
    cout<<max(x,y);
}
int max(int a,int b)
{
    return a>b?a:b;
}
float max(float a,float b)
{
    return a>b?a:b;
}
