#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string mail;
    int check=0,Atsign=0,Dot=0;
    cout<<"Enter your email "<<endl;
    cin>>mail;
    try
    {
        for(int i=0; mail[i]; i++)
        {    
            if(mail[i]=='@')
            {
                Atsign=i;
            }
            if(mail[i]=='.')
                Dot=i;
        }    
        if(Atsign==0)
        throw "@ absent exception ";
        if(Dot==0)
        throw ". absent exception ";
        if(Atsign>Dot)
        throw "Invalid exception ";
        else
        throw "Email Accepted ";
    }
    catch(const char *msg)
    {
        cout<<msg;
    }
}