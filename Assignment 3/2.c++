#include<iostream>
using namespace std;
class time
{
    int h,m,s;
    public:
    void set()
    {
        cout<<"Enter hours, minutes and seconds\n";
        cin>>h>>m>>s;
    }
    void display()
    {
        cout<<h<<" hr "<<m<<" min "<<s<<" sec "; 
    }
};
int main()
{
    time t1;
    t1.set();
    t1.display();
}