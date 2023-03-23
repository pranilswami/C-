#include<iostream>
using namespace std;
class Addition
{
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<a+b+c<<endl;
    }
    void add(int a,float b)
    {
        cout<<a+b<<endl;
    }
    void add(float a,long b)
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    Addition a1;
    a1.add(2,3);
    a1.add(12,23,43);
    a1.add(34,5.4f);
    a1.add(34.5f,34L);
    return 0;
}