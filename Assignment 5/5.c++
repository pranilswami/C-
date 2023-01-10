#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
    Numbers(){}
    Numbers(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void show()
    {
        cout<<endl<<x<<" "<<y<<" "<<z;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
};

int main()
{
    Numbers n1(1,2,3),n2(4,5,6),n3,n4;
    n3=-n1;
    n4=-n2;
    n3.show();
    n4.show();

}