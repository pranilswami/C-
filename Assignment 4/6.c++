#include<iostream>
using namespace std;

class student
{
    int roll,prn;
    string name;
    public:
    student(int r,int p,string n)
    {
        roll=r;
        prn=p;
        name=n;
    }
    void show ()
    {
        cout<<"Name : "<<name<<" roll no.: "<<roll<<" PRN no.: "<<prn;
    }

};

int main()
{
    student s1(11,2005000081,"viraj"),s2(12,2005000082,"nishan");
    s1.show();
    cout<<endl;
    s2.show();
}