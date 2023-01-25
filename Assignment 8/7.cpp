#include<iostream>
using namespace std;
int main()
{
    string username;
    int count=0,num=0;
    cout<<"Enter your username"<<endl;
    cin>>username;
    try
    {
        for(int i=0; username[i]; i++)
        {
            count++;
            if(username[i]>=48&&username[i]<=57)
            num=1;
            if((username[i]>=32&&username[i]<=47)||(username[i]>=58&&username[i]<=64)||(username[i]>=91&&username[i]<=96)||(username[i]>=123&&username[i]<=126))
            num=-1;
        }
        if(count<6)
        throw "Less than 6 digit Exception";
        else if(num==1)
        throw "Contain number Exception";
        else if(num==-1)
        throw "Special character Exception";
        else
        cout<<"Username is accepted";
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    
}