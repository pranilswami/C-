#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
    Distance(){}
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    Distance operator()(int a,int b,int c)
    {
        Distance temp;
        temp.feet=a+c+5;
        temp.inches=a+b+15;
        return temp;
    }
    void display()
    {
        cout<<"Feet : "<<feet<<" inches : "<<inches<<endl;
    }
};
int main()
{
    Distance d1(12,34),d2;
    d1.display();
    d2=d1(2,3,4);
    d1.display();
    d2.display();
}