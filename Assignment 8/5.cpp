#include<iostream>
using namespace std;
int main()
{
    int num=0,count=0;
    cout<<"Enter your number"<<endl;
    cin>>num;
    try
    {
        for(int i=0; num; i++)
        {
            num = num/10;
            count++;
        }
        if(count!=10)
        throw "10 digit Exception ";
        else
        cout<<"Mobile Number Accepted";
    }
    catch(const char *msg)
    {
        cout<<msg;
    }
}