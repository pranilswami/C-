#include<iostream>
using namespace std;
int sum(int x,int y,int z=0); //Default arguemnt
int main()
{
    int a,b,c;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"sum is "<<sum(a,b)<<endl;
    cout<<"Enter three number"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum is "<<sum(a,b,c);
    return 0;
}
int sum(int x,int y,int z)
{
    return x+y+z;
}