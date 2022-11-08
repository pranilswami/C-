#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    void set(int r,int i)
    {
        real=r;
        img=i;
    }
    void display(complex c,complex s)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
        cout<<c.real<<"+"<<c.img<<"i"<<endl;
        cout<<s.real<<"+"<<s.img<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set(2,3); // here calling set function of c1 object
    c2.set(4,5);
    c3.set(5,6);
    c1.display(c2,c3);// here calling display funcion of c1 object implicitly and passing c2 and c3 object explicitly
 
}