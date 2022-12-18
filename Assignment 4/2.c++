#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time ()
    {

    }
    Time(int hrs,int min,int sec)
    {
        h=hrs;
        m=min;
        s=sec;
    }
    void showTime()
    {
        cout<<"Hours = "<<h<<" Min = "<<m<<" Sec = "<<s<<endl;
    }
    void normalise()
    {
        if(s>=60)
        {
            m = m + s/60;
            s = s % 60;
        }
        if(m>60)
        {
            h = h + m/60;
            m = m % 60;
        }
        cout<<endl<<h<<" : "<<m<<" : "<<s;
    }
    Time add(Time t3)
    {
        Time t4;
        t4.h=h+t3.h;
        t4.m=m+t3.m;
        t4.s=s+t3.s;
        return t4;
    }
};
int main()
{
    Time t1(2,34,67),t2(3,133,223),t5;
    t1.showTime();
    t2.showTime();
    t1.normalise();
    t2.normalise();
    t5=t1.add(t2);
    cout<<endl;
    t5.showTime();
}