#include<iostream>
#include<string>
using namespace std;
class Number
{
    int a;
    public:
    Number(){}
    Number(int x)
    {
        a=x;
        
    }
    void show()
    {
        cout<<endl;
        cout<<a;
    }
    Number operator++()
    {
        Number temp;
        temp.a=++a;
        return temp;
    }
    Number operator--()
    {
        Number temp;
        temp.a=--a;
        return temp;
    }
}; 
int main()
{
    Number n1(5),n2,n3;
    n2=++n1;
    n2.show();
    n3=--n2;
    n3.show();

}