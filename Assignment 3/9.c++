#include<iostream>
using namespace std;
class Circle
{
    int rad;
    float a;
    public:
    void set(int r)
    {
        rad=r;
    }
    int get()
    {
        return rad;
    }
    float getarea()
    {
        return a;
    }
    void area()
    {
        a=3.14*rad*rad;
    }

};
int main()
{
    Circle c1;
    int r=0;
    cout<<"Enter a radius of circle\n";
    cin>>r;
    c1.set(r);
    c1.area();
    cout<<"Area of radius "<<c1.get()<<" is "<<c1.getarea();
}