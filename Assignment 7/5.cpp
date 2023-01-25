#include<iostream>
using namespace std;
class Invent1
{
    int a,b;
    public:
    Invent1(){}
    Invent1(int x,int y)
    {
        a=x;
        b=y;
    }
    operator float()
    {
        return a;
    }
    void display()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
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
class Invent2
{
    int a,b;
    public:
    Invent2(){}
    Invent2 (Invent1 i)
    {
        a=i.geta();
        b=i.getb();
    }
    void display()
    {
        cout<<"sum of given values : "<<a+b<<endl;
    }
    
};

int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    d1=s1;
    cout<<"float value : "<<tv<<endl;
    d1.display();
}