#include<iostream>
using namespace std;
class Area
{
    int r,l,b,side;
    public:
    void set(int rad)
    {
        r=rad;
    }
    int get()
    {
        return r;
    }
    float areacircle()
    {
        return 3.14*r*r;
    }
    void setrectangle(int length,int width)
    {
        l=length;
        b=width;
    }
    int getrectangle()
    {
        return l;
    }
    int getrectangle1()
    {
        return b;
    }
    int arearectangle()
    {
        return l*b;
    }
    void setsquare(int a)
    {
        side=a;
    }
    int getsquare()
    {
        return side;
    }
    int areasquare()
    {
        return 4*side;
    }
};
int main()
{
    Area a1;
    int r,l,b,a;
    cout<<"Etner radius of circle :\n";
    cin>>r;
    a1.set(r);
    cout<<"Enter length and width of rectangle\n";
    cin>>l>>b;
    a1.setrectangle(l,b);
    cout<<"Enter side of square\n";
    cin>>a;
    a1.setsquare(a);
    cout<<endl<<"Area of circle whose radius "<<a1.get()<<" is "<<a1.areacircle();
    cout<<endl<<"Area of rectangle whose length : "<<a1.getrectangle()<<" and width : "<<a1.getrectangle1()<<" is "<<a1.arearectangle();
    cout<<endl<<"Area of Square whose side : "<<a1.getsquare()<<" is "<<a1.areasquare();

}