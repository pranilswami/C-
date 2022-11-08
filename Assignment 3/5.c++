#include<iostream>
using namespace std;
class ReverseNumber 
{
    private:
    int n,num,rev=0,lastnum=0;
    public:
    void set(int x)
    {
        n=x;
        num=n;
    }
    int get()
    {
        return num;
    }
    int getreverse()
    {
        return rev;
    }
    void reverse()
    {
        while(n)
        {
            lastnum=n%10;
            rev=rev*10;
            rev=rev+lastnum;
            n=n/10;
        }
    }
};
int main()
{
    ReverseNumber n1;
    n1.set(986556676);
    n1.reverse();
    cout<<"Reverse number of "<<n1.get()<<" is "<<n1.getreverse();

}