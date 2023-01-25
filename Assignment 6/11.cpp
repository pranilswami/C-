#include<iostream>
using namespace std;
class Marks
{
    int mark;
    public:
    Marks(){}
    void setdata(int n)
    {
        mark=n;
    }
    void display()
    {
        cout<<"Mark is : "<<mark<<endl;
    }
    Marks * operator->()
    {
        return this;
    }
};
class Roll
{
    int roll;
    public:
    Roll(){}
    void setdata(int n)
    {
        roll=n;
    }
    void display()
    {
        cout<<"Roll no.: "<<roll;
    }
    Roll *operator->()
    {
        return this;
    }


};
int main()
{
    Marks m1;
    Roll r1;
    m1->setdata(23);
    m1->display();
    r1->setdata(4);
    r1->display();
    
}