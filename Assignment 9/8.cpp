#include<iostream>
#include<string>
using namespace std;
class Customer
{
    protected:
    string name;
    long long number;
    public:
    void setcustomer()
    {
        cout<<"\nEnter customer name : ";
        cin>>name;
        cout<<"\nEnter customer phone no. : ";
        cin>>number;
    }
};
class Depositor : public Customer
{
    protected:
    long accno=0,balance=0;
    public:
    void setdepositer()
    {
        cout<<"\nEnter customer A/c no. : ";
        cin>>accno;
        cout<<"\nEnter Balance : ";
        cin>>balance;
    }
};
class Borrower : public Depositor
{
    protected:
    long loan_no=0,loan_amt=0;
    public:
    void setborrower()
    {
        setcustomer();
        setdepositer();
        cout<<"\nEnter loan no. : ";
        cin>>loan_no;
        cout<<"\nEnter loan amount : ";
        cin>>loan_amt;
    }
    void display()
    {
        cout<<"\n\n-------------------------------";
        cout<<"\nCustomer Name      : "<<name;
        cout<<"\nCustomer phone No. : "<<number;
        cout<<"\nDepositor A/C No.  : "<<accno;
        cout<<"\nDepositor Balance  : "<<balance<<endl;
        cout<<"-----------------------------------";
        cout<<"\n\nLoan No. : "<<loan_no;
        cout<<"\nLoan Amount : "<<loan_amt;
        cout<<endl<<endl;
    }
};
int main()
{
    int num;
    cout<<"Enter No. of customer details you want : ";
    cin>>num;
    Borrower b1[num];
    for(int i=0; i<num; i++)
    {
        b1[i].setborrower();
    }
    for(int i=0; i<num; i++)
    {
        cout<<"\nDisplay of customer : ";
        b1[i].display();
    }
    return 0;
}