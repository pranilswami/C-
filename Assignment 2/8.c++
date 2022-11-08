#include<iostream>
using namespace std;
float area(int r);
int area(int l,int b);
int main()
{
    int r,l,b,base,height;
    cout<<"Enter radius of circle\n";
    cin>>r;
    cout<<area(r);
    cout<<"\nEnter length and width of rectangle\n";
    cin>>l>>b;
    cout<<area(l,b);
    cout<<"\nEnter base and height\n";
    cin>>base>>height;
    cout<<area(base,height)/2;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
