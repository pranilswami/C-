#include<iostream> 
using namespace std;
class A
{
    int a,fact=1;
    public:
    A(){}
    A(int b){a = b;}
    A(const A &O)
    {
        a = O.a;
    }
    void factorial()
    {
        while(a)
        {
            fact = fact * a;
            a--;
        }
        
    }
    void diplay()
    {
        cout<<fact;
    }
};

int main()
{
    A o1(5);
    A o2 = o1;
    o2.factorial();
    cout<<"Factorial is = ";
    o2.diplay();
}