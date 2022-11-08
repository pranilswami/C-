#include<iostream>
using namespace std;
void prime(int x);
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    prime(x);
}
void prime(int x)
{
    if(x%2!=0)
     cout<<"Prime";
    else
     cout<<"Not Prime";
}