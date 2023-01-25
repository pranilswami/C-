#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int num=0;
    char pass[100];
    char id[100];
    cout<<"Enter your id : ";
    cin>>id;
    cout<<"Enter your password : ";
    cin>>pass;
    try
    {
        if(strlen(pass)<6)
        {
            cout<<"Less than 6 character"<<endl;
            throw 'n';
        }
        for(int i=0; pass[i]; i++)
        {
            if(pass[i]>=97&&pass[i]<=122)
            num=1;
        }
        if(num!=1)
        {
            cout<<"No small letter"<<endl;
            throw 'n';
        }
        for(int i=0; pass[i]; i++)
        {
            if(pass[i]>=65&&pass[i]<=90)
            num=2;
        }
        if(num!=2)
        {
            cout<<"No capital character"<<endl;
            throw 'n';
        }
        for(int i=0; pass[i]; i++)
        {
            if((pass[i]>=32&&pass[i]<=47)||(pass[i]>=58&&pass[i]<=64)||(pass[i]>=91&&pass[i]<=96)||(pass[i]>=123&&pass[i]<=126))
            num=3;
        }
        if(num!=3)
        {
            cout<<"No Special character"<<endl;
            throw 'n';
        }

        bool is_digit=false;
        bool valid;
        for(int i=0; pass[i]; i++)
        {
            if(isdigit(pass[i]))
            is_digit=true;
        }
        if(!is_digit)
        {
            valid=false;
            cout<<"No number present"<<endl;
            throw 'n';
        }
        else
        cout<<"Password Accepted";
        
    }
    catch(char c)
    {
        cout<<"\n\nPassword Invalid";
    }
  
}