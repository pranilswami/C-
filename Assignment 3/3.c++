#include<iostream>
using namespace std;
class factorial
{
    
    int num,i,fact=1;
    public:
    void set(int x)
    {
        num=x;
    }
    int get()
    {
        return num;
    }
    int factnum()
    {
        return fact;
    }
    void calculate()
    {
        for(i=1; i<=num; i++)
        {
            fact=fact*i;
        }
    }
};
int main()
{
    factorial f1;
    f1.set(5);
    f1.calculate();
    cout<<"Factorial of "<<f1.get()<<" is "<<f1.factnum();

}