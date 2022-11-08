#include<iostream>
using namespace std;
class Square
{
    int num=0,sq=0;
    public:
    void set(int n)
    {
        num=n;
    }
    int get()
    {
        return num;
    }
    int square()
    {
        return sq;
    }
    void calculate()
    {
        sq = num*num;
    }
};
int main()
{
    Square s1;
    int num;
    cout<<"Enter a number\n";
    cin>>num;
    s1.set(num);
    s1.calculate();
    cout<<"Square of "<<s1.get()<<" is "<<s1.square();
}