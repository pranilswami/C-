#include<iostream>
using namespace std;
int main()
{
    int pin=0,count=0;
    cout<<"Enter 6 digit Pincode"<<endl;
    cin>>pin;
    try
    {
        for(int i=0; pin; i++)
        {
            pin = pin/10;
            count++;
        }
        if(count!=6)
        throw "6 digit Exception";
        else
        cout<<"Pincode Accepted";
    }
    catch(const char *msg)
    {
        cout<<msg;
    }
}