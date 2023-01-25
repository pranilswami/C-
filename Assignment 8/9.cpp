#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char mail[20],temp1[]="gmail.com",temp2[30];
    bool valid;
    cout<<"Enter your mail id : ";
    cin>>mail;
    try
    {
        for(int i=0; mail[i]; i++)
        {
            if(mail[i]=='@')
            valid=true;
        }
        if(!valid)
        {
            cout<<"'@' not present";
            throw 'n';
        }
        for(int i=0; mail[i]; i++)
        {
            if(mail[i]=='@')
            {
                i++;
                for(int j=0; mail[i]; j++,i++)
                {
                    temp2[j] = mail[i];     
                }
            }
        }
        if(strcmp(temp2,temp1))
        {
            cout<<"'gmail.com' absent";
            throw 'n';
        }
        else
        cout<<"Email is Accepted";
        
    }
    catch(char a)
    {
        cout<<"\n\nInvalid Email";
    }
}