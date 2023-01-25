#include<iostream>
using namespace std;
class Time 
{
    int min,hrs,sec;
    public:
    Time (){}
    Time (int x)
    {
        hrs = x/3600;
        min = (x%3600)/60;
        sec = ((x%3600)%60);
    }
    void display()
    {
        cout<<"hrs : "<<hrs<<" min : "<<min<<" sec : "<<sec<<endl;
    }
};
int main()
{
    int duration;
    cout<<"Enter time duration in seconds : "<<endl;
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;

}