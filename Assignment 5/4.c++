#include<iostream>
using namespace std;
class Time 
{
    int hrs,min,sec;
    public:
    Time (int h=0,int m=0, int s=0)
    {
        hrs=h; min=m; sec=s;
    }

    friend void operator>>(istream &is,Time &T);
    friend void operator<<(ostream &os,Time &T);

    void operator==(Time t)
    {
        cout<<endl;
        if(hrs==t.hrs&&min==t.min&&sec==t.sec)
        cout<<"Given two times are same ";
        else
        cout<<"Given two times are not same";
    }

};
void operator>>(istream &is,Time &T)
{
    cout<<"Enter Hours   \t: ";
    is>>T.hrs;
    cout<<"Enter Minutes \t: ";
    is>>T.min;
    cout<<"Enter Seconds \t: ";
    is>>T.sec;
}
void operator<<(ostream &os,Time &T)
{
    os<<"Hours   \t: "<<T.hrs<<endl;
    os<<"Minutes \t: "<<T.min<<endl;
    os<<"Seconds \t: "<<T.sec<<endl;
}

int main()
{
    Time t1,t2;
    cout<<"Enter First Time : "<<endl;
    cout<<"---------------------------"<<endl;
    cin>>t1;
    cout<<endl<<"First Time : "<<endl;
    cout<<t1;
    cout<<endl<<"Enter Second Time : "<<endl;
    cout<<"----------------------------"<<endl;
    cin>>t2;
    cout<<endl<<"Second Time : "<<endl;
    cout<<t2;
    t1==t2;

}