#include<iostream>
using namespace std;
class Box
{
    int len,br,hi,vol;
    public:
    Box(int l,int b,int h)
    {
        len = l;
        br = b;
        hi = h;
    }
    void volume ()
    {
        vol = len*br*hi;
    }
    void show ()
    {
        cout<<"Volume of box is : "<<vol<<endl;
    }
    
};

int main()
{
    Box b1(8,4,6),b2(9,5,7);
    b1.volume();
    b2.volume();
    b1.show();
    b2.show();

}