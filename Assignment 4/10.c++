#include<iostream>
using namespace std;
class StaticCount 
{
    static int count;
    public:
    StaticCount()
    {
        count++;
    }
    void show()
    {
        cout<<count;
    }
};
int StaticCount :: count;
int main()
{
    StaticCount s1,s2,s3;
    s1.show();
}