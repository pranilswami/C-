#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    void setdata(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};

int main()
{
    Complex c1;
    c1.setdata(3,4); 
    c1.display();
}