#include<iostream>
using namespace std;

class Cube
{
      public :
    double a,vol;
  
    Cube(){}
    Cube(int x)//parameterzed constructor
    {
        a=x;
    }
    int volume()
    {
        
        vol=a*a*a;
        return vol;
    }
    void show()
    {
        cout<<endl<<"Volume of cube is : "<<vol;
    }


};

int main()
{
    Cube c1(3),c2;
    c1.volume();
    c1.show();
    cout<<"Enter a number : ";
    cin>>c2.a;
    c2.volume();
    c2.show();

}