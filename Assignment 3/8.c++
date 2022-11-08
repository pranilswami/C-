#include<iostream>
using namespace std;
class rectangle
{
    int l,b,a;
    public:
    void set(int x,int y)
    {
        l=x;
        b=y;
    }
    int getarea()
    {
        return a;
    }
    void area()
    {
        a=l*b;
    }
};
int main()
{
    rectangle r1;
    int l,b;
    cout<<"Enter length and width of recntagle:\n";
    cin>>l>>b;
    r1.set(l,b);
    r1.area();
    cout<<"Area of given rectangle is "<<r1.getarea();
}