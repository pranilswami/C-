#include<iostream>
using namespace std;
class Rectangle2;
class Rectangle1
{
    int length=0,breadth=0,area=0;
    public:
    void setdata(int l,int b)
    {
        length = l;
        breadth = b;
    }
    void display()
    {
        cout<<"Rectangle 1 : "<<endl;
        cout<<"length : "<<length<<endl;
        cout<<"Breadth : "<<breadth;
    }
    friend void show(Rectangle1 &r3,Rectangle2 &r4);
};
class Rectangle2
{
    int length=0,breadth=0,area=0;
    public:
    void setdata(int l,int b)
    {
        length = l;
        breadth = b;
    }
    void display()
    {
        cout<<"\nRectangle 2 : "<<endl;
        cout<<"length : "<<length<<endl;
        cout<<"Breadth : "<<breadth;
    }
    friend void show(Rectangle1 &r3,Rectangle2 &r4);
};
void show(Rectangle1 &r3,Rectangle2 &r4)
{
    Rectangle1 temp;
    temp.length = r3.length;
    temp.breadth = r3.breadth;
    r3.length = r4.length;
    r3.breadth = r4.breadth;
    r4.length = temp.length;
    r4.breadth = temp.breadth;

}
int main()
{
    int x=0,y=0;
    cout<<"Enter the length and breadth of rectangle : "<<endl;
    cin>>x>>y;
    Rectangle1 r1;
    r1.setdata(x,y);
    cout<<"Enter the length and breadth of rectangle : "<<endl;
    cin>>x>>y;
    Rectangle2 r2;
    r2.setdata(x,y);
    show(r1,r2);
    r1.display();
    r2.display();
    return 0;
}

