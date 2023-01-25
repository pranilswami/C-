#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    try
    {
        if(num>=10||num<0)
        throw num;
        else
        cout<<num<<" Single digit number"<<endl;
        
    }
    catch(const int n)
    {
        cout<<n<<" is not single number"<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg;
    }
    catch(char c)
    {
        cout<<c;
    }
   
}