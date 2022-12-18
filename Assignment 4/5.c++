#include<iostream>
using namespace std;

class Date
{
    int d,m,y;
    
    public :
    Date ()
    {
        d=1;
        m=1;
        y=2023;
    }
    Date(int a,int b,int c)
    {
        d=a;
        m=b;
        y=c;

    }
    void show()
    {
        cout<<"Day : "<<d<<" Month : "<<m<<" Year : "<<y;
    }
};

int main()
{
    Date d1(10,11,2022),d2(11,11,2022);
    d1.show();
    cout<<endl;
    d2.show();

}