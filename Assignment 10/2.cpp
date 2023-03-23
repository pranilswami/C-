#include<iostream>
using namespace std;
class Rectangle
{
    public:
    void area(int l,int b)
    {
        cout<<"int"<<endl;
        cout<<"Area of rectangle : "<<l*b;
    }
    void area(float l,float b)
    {
        cout<<"float"<<endl;
        cout<<"Area of rectangle : "<<l*b;
    }
    void area(double l,double b)
    {
        cout<<"double"<<endl;
        cout<<"Area of rectangle : "<<l*b;
    }
    void area(long l,long b)
    {
        cout<<"long"<<endl;
        cout<<"Area of rectangle : "<<l*b;
    }
    
};
int main()
{
    Rectangle r1;
    r1.area(4,5);
    r1.area(3.4f,5.4f);
    r1.area(4.5,5.4);
    r1.area(2L,23L);
    return 0;

}