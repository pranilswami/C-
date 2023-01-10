#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string.h>
using namespace std;
class mystring 
{
    char str[100];
    public:
    void setdata()
    {
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    void operator!()
    {
        for(int i=0; str[i];i++)
        {
            if(str[i]>=65&&str[i]<=96)
            {
                str[i]=str[i]+32;
            }
            else if(str[i]>=97&&str[i]<=122)
            {
                str[i]=str[i]-32;
            }
        }
        cout<<endl<<str;
        
    }
};

int main()
{
    mystring m1,m2;
    cout<<"Enter a string \n";
    m1.setdata();
    m1.display();
    cout<<"\nExpected string";
    !m1;

    
}