#include<iostream>
#include<string>
using namespace std;
class CString
{
    string s1,s2;
    public:
    CString(){}
    CString(string a,string b)
    {
        s1=a;
        s2=b;
    }
    void show()
    {
        cout<<endl<<s1<<" "<<s2;
    }
    CString operator+(CString X)
    {
        CString temp;
        temp.s1=s1+X.s1;
        temp.s2=s2+X.s2;
        return temp;
    }
    bool operator==(CString X)
    {
        if(s1==X.s1)
        {
            if(s2==X.s2)
            return true;
            else
            return false;
        }
        else false;
    }
};
int main()
{
    CString c1("Pranil","Omkar"),c2("Swami","Rajput"),c3;
    bool c4;
    c3=c1+c2;
    c3.show();
    c4=c1==c2;
    cout<<endl;
    if(c4==1)
     cout<<"equal";
    else
      cout<<"inequal";

}