#include<iostream>
using namespace std;
class Product;
class item
{
    int a,b;

    public:
    item(){}
    item(int x)
    {
        cout<<"PC called for item"<<endl;
        a=x;
        b=x;
    }
    void showdata()
    {
        cout<<"Sum is : "<<a;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    
};
class Product
{
    int a,b;
    item i;
    public:
    Product(){}
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    
    }
    operator item()
    {
        cout<<"item() called for Product"<<endl;
        return a+b;
    }
};
int main()
{
    Product p1;
    item i1;
    p1.setdata(3,4);
    i1 = p1;
    i1.showdata();
}