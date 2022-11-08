#include<iostream>
using namespace std;
int power(int x,int y);
int main()
{
    int x,y;
    cout<<"Enter two number "<<endl;
    cin>>x>>y;
    cout<<x<<" raised to "<<y<<" is "<<power(x,y);
}
int power(int x,int y)
{
    int mul=1,i=0;
    while(y)
    {
        mul=mul*x;
        y--;
    }
    return mul;
}