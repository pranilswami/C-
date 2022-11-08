#include<iostream>
using namespace std;
void highest(int n);
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    highest(n);
}
void highest(int n)
{
    int i=0,x=0,max=0;
    while(n)
    {    x=n%10;
        if(x>max)
        max=x;
        n=n/10;
    }
    cout<<endl<<"Maximum digit is "<<max;
}