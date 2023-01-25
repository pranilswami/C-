#include<iostream>
using namespace std;

class Minute
{
    int min,sec;
    public:
    Minute(){}
    Minute(int x,int y)
    {
        min = x;
        sec = y;
    }
    Minute (int m)
    {
        min=m;
    }
    void display()
    {
        cout<<"min = "<<min<<endl;
    }
};
class Time
{
    int min,sec;
    public:
    Time(){}
    Time (int x,int y)
    {
        min=x;
        sec=y;
    }
    void display()
    {
        cout<<"min = "<<min<<" sec = "<<sec<<endl;
    }
    operator Minute()
    {
        return min;
    }
};
int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;
    t1.display();
    m1.display();
    return 0;
}