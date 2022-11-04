#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"a : "<<a<<" b : "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a : "<<a<<" b : "<<b;

}