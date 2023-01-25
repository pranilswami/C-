#include<iostream>
using namespace std;
int main()
{
    char nickname[20];
    int count=0;
    cout<<"Enter your nickname : ";
    cin>>nickname;
    try
    {
        for(int i=0; nickname[i]; i++)
        {
            count++;
        }
        if(count>8)
        {
            cout<<"More than 8 letter";
            throw 'n';
        }
        for(int i=0; nickname[i]; i++)
        {
            if(nickname[i]>=48&&nickname[i]<=57)
            {
                cout<<"Number is present";
                throw 'n';
            }
            if((nickname[i]>32&&nickname[i]<=47)||(nickname[i]>=58&&nickname[i]<=64)||(nickname[i]>=91&&nickname[i]<=96)||(nickname[i]>=123&&nickname[i]<=126))
            {
                cout<<"Special symbol present";
                throw 'n';
            }
            if(nickname[i]==' ')
            {
                cout<<"Space is present";
                throw 'n';
            }
        }
        cout<<"Nickname Accepted";

    }
    catch(char n)
    {
        cout<<"\n\nInvalid Nickname";
    }
}