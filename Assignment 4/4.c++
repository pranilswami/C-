#include<iostream>
using namespace std;
class Counter
{
    static int count; 
    public:
    Counter ()
    {
        count++;
    }
    void show()
    {
        cout<<count;
    }   
};
int Counter :: count;
int main()
{
    Counter c1,c2,c3,c4;
    c3.show();
    
}