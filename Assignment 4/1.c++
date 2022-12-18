#include<iostream>
#include<string>
using namespace std;
class complex
{
    int a,b,sum;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<" + "<<b<<"i";
    }
    complex add(complex m)
    {
        complex temp;
        temp.a=a+m.a;
        temp.b=b+m.b;
        return temp;
    }
    
};
int main()
{
    complex c1,c2,c3;
    c1.setData(3,5);
    c2.setData(4,7);
    c1.showData();
    cout<<endl;
    c2.showData();
    c3=c1.add(c2);
    cout<<endl;
    c3.showData();
}