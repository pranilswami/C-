#include<iostream>
using namespace std;
class Coordinate
{
    int a,b,c;
    public:
    Coordinate(){}
    Coordinate(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    Coordinate operator,(Coordinate C)
    {
        Coordinate temp;
        temp.a=C.b;
        temp.b=C.c;
        temp.c=C.a;
        return temp;
    }
    void display()
    {
        cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    }
};
int main()
{
    Coordinate c1(12,12,13),c2(21,32,34),c3(11,22,33),c4;
    c4=(c1,c2,c3);
    c1.display();
    c4.display();
}