#include<iostream>
using namespace std;
class Product
{
    int i,j;
    public:
    void setdata(int n,int m)
    {
        i=n;
        j=m;
    }
    int geti()
    {
        return i;
    }
    int getj()
    {
        return j;
    }
    void display()
    {
        cout<<"Given number : "<<i<<" "<<j<<endl;
    }

};
class item
{
    int a,b;
    public:
    item(){}
    item (Product p2)
    {
        a = p2.geti();
        b = p2.getj();
    }
    void display()
    {
        cout<<"Sum of given two numbers : "<<a+b<<endl;
    }
};
int main()
{
    item i1;
    Product p1;
    p1.setdata(3,4);
    i1 = p1;
    i1.display();

}