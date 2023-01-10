#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    Complex(){}//default constructor
    Complex (int x,int y)//parameterised constructor
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<endl;
        cout<<a<<" "<<b;
    }
    friend Complex operator+(Complex,Complex);
    friend Complex operator-(Complex);
    friend Complex operator*(Complex,Complex);
    friend bool operator==(Complex,Complex);
    ~Complex(){}  //destructor

};
bool operator==(Complex X,Complex Y)
{
    if(X.a==Y.a)
    {
        if(X.b==Y.b)
        return true;
        else
        return false;
    }
    else
      return false;
   
      
}
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a*Y.a;
    temp.b=X.b*Y.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}

Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a = X.a+Y.a;
    temp.b = X.b+Y.b;
    return temp; 
}

int main()
{
    Complex c1(10,20),c2(10,20),c3,c4,c5;
    bool name=0;
    c1.show();
    c2.show();
    c3=c1+c2;
    c3.show();
    c4=-c3;
    c4.show();
    c5=c1*c2;
    c5.show();
    name=c1==c2;
    if(name==1)
     cout<<endl<<"true";
    else
     cout<<endl<<"false";
    
}