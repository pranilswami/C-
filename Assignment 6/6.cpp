#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex(){}
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    Complex & operator=(Complex C)
    {
        a=C.a;
        b=C.b;
        return *this;
    }
};
//When we are using malloc/new for dynamic memory allocation then we must know below points
//1. check if both objects have same address
//2. free already existing location in DC then point to new location 
//3. check assigning three objects at same time if yes then return objects
int main()
{
    Complex c1(3,4),c2(4,5),c3,c4;
    c1.display();
    c2.display();
    c4=c3=c1;
    c4=c2;
    c3.display();
    c4.display();
    
}