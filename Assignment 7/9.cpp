#include<iostream>
using namespace std;
class Doller
{
    int d;
    public:
    Doller(){}
    Doller(int a)
    {
        d=a;
    }
    void display()
    {
        cout<<d;
    }
};
int main()
{
    int x=50;
    Doller d;
    d = x;
    d.display();
    return 0;

}