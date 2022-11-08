//Pascal triangle
#include<iostream>
using namespace std;
int fact(int num);
int comb(int n,int r);
int main()
{
    int i=0,j=0,k,num;
    cout<<"Enter a number\n";
    cin>>num;
    for(i=0; i<num; i++)
    {
        k=i;
        for(j=0; j<=i; j++)
        {
            while(k<num)
            {
                cout<<" ";
                k++;
            }
            cout<<comb(i,j);
            cout<<" ";
        }
        cout<<endl;
    }
}
int fact(int num)
{
    int i,sum=1;
    for( i=1; i<=num; i++)
    {
        sum=sum*i;
    }
    return sum;

}
int comb(int n,int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}