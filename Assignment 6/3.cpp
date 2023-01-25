#include<iostream>
using namespace std;
class Index
{
    int a[10];
    public:
    void setdata(int n,int index)
    {
        if(index>=10)
        {
            cout<<"Out of bound";
            exit(0);
        }
        a[index] = n;
    }
    int operator[](int index)
    {
        if(index>=10)
        {
            cout<<"Out of bound";
            exit(0);
        }
        return a[index];
    }
    
};
int main()
{
    Index i1;
    i1.setdata(4,6);
    cout<<i1[6];
    return 0;
}