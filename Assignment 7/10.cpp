#include<iostream>
using namespace std;
class Rupee
{
    float r;
    public:
    Rupee (){}
    Rupee(float x)
    {
        r=x;
    }
    void display()
    {
        cout<<"Rupee : "<<r<<endl;
    }
    float getr()
    {
        return r;
    }
};  
class Dollar
{
    float d;
    public:
    Dollar(){}
    Dollar(Rupee R)
    {
        d=R.getr()/100;//suppose 1USD = 100RS
    }
    void display()
    {
        cout<<"Dollar : "<<d<<endl;
    }
    operator Rupee()
    {
        return d*100;
    }

};
int main()
{
    Rupee r=23;
    Dollar d=r;//Rupee to Dollar conversion

    d.display();
    r.display();

    r=d;       //Dollar to Rupee conversion 
    d.display();
    r.display(); 
}