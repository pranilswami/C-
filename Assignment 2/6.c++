#include<iostream>
using namespace std;
void swap(int &m,int &n);
int main()
{
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    swap(x,y);
}
void swap(int &m,int &n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
    cout<<m<<" "<<n;
}