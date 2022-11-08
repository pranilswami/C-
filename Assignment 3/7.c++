#include<iostream>
using namespace std;
class LargestNumber
{
    int a,b,c,large=0;
    public:
    void set(int x,int y,int z)
    {
       a=x;
       b=y;
       c=z; 
    }
    int get()
    {
        return large;
        
    }
    void largen()
    {
        large=a>b?(a>c?a:c):(b>c?b:c);
    }
};
int main()
{
    LargestNumber l1;
    int a,b,c;
    cout<<"Enter three number\n";
    cin>>a>>b>>c;
    l1.set(a,b,c);
    l1.largen();
    cout<<"Gretest number among three is : "<<l1.get();
}