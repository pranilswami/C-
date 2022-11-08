#include<iostream>
using namespace std;
void fibonacci(int x);
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    fibonacci(x);
    return 0;
}
void fibonacci(int x)
{
    int a=1,b=1,c=0,i=1;
    int num=x;
    while(x)
    {
        c=a+b;
        if(c==num)
        {
         cout<<num<<" is present ";
         return;
        }
        a=b;
        b=c;
        x--;
    }
    cout<<num<<"absent";
    return;
    
}