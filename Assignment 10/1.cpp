#include<iostream> 
using namespace std;
class Float
{
    float a;
    public:
    void setdata(float x)
    {
        a = x;
    }
    void getdata()
    {
        cout<<"\nx : "<<a;
    }
    Float operator+(Float b)
    {
        Float temp;
        temp.a = a + b.a;
        return temp;
    }
    Float operator-(Float b)
    {
        Float temp;
        temp.a = a - b.a;
        return temp;
    }
    Float operator*(Float b)
    {
        Float temp;
        temp.a = a * b.a;
        return temp;
    }
    Float operator/(Float b)
    {
        Float temp;
        temp.a = a / b.a;
        return temp;
    }

};

int main()
{
    Float f1,f2,f3;
    f1.setdata(3.4);
    f2.setdata(4.5);
    f3 = f1 + f2;
    f3.getdata();
    f3 = f1 - f2;
    f3.getdata();
    f3 = f1 * f2;
    f3.getdata();
    f3 = f1 / f2;
    f3.getdata();
    return 0; 

}