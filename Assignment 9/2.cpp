#include<iostream>
using namespace std;
class Number
{
    protected:
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a = "<<a<<" b = "<<b;
    }
};
class Add : public Number
{
    int sum;
    public:
    void add()
    {
        sum = a+b;
    }
    void display()
    {
        cout<<"Sum is "<<sum;
    }

};
int main()
{
 
    Add a;
    a.set(5,6);
    a.add();
    a.display();
    
}