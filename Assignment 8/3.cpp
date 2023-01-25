#include<iostream>
using namespace std;
int main()
{
    float num1=0,num2=0,ans=0;
    char character;
    
    try
    {
        cout<<"Enter 1st number : ";
        cin>>num1;
        if(num1==0)
        throw 0;
        cout<<"Enter operator to perform : ";
        cin>>character;
        if(character!='+'&&character!='-'&&character!='*'&&character!='/')
        throw character;
        cout<<"Enter 2nd number : ";
        cin>>num2;
        if(num2==0)
        throw "Denominator zero exception ";

        switch(character)
        {
            case '+': ans = num1+num2;
                        break;
            case '-': ans = num1-num2;
                        break;
            case '*': ans = num1*num2;
                        break;
            case '/': ans = num1/num2;
                        break;
        }
        cout<<num1<<" "<<character<<" "<<num2<<" = "<<ans;
    }
    catch(const int n)
    {
        
        cout<<"Number is 0 Exception";
    }
    catch(const char c)
    {
        cout<<"Operator not matched";
    }
    catch(const char *msg)
    {
        cout<<msg;
    }
    
}