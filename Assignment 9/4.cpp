#include<iostream>
using namespace std;
class Person
{
    protected :
    string address;
    long phone;
    public:
    void setPerson()
    {
        cout<<"\nEnter Address : ";
        cin>>address;
        cout<<"\nEnter Phone No. : ";
        cin>>phone;
        cout<<endl;
    } 
};
class Employee : public Person
{
    protected:
    long eno;
    string ename;
    public:
    void setEmployee()
    {
        cout<<"Enter Employee No. : ";
        cin>>eno;
        cout<<"\nEnter Name : ";
        cin>>ename;
    }
};
class Manager : public Employee
{
    string designation,dep_name;
    long basic_salary;
    public:
    long highest=0;
    string name;
    void setManager()
    {
        cout<<"Enter Details of Manager "<<endl;
        cout<<"---------------------------"<<endl;
        setEmployee();
        setPerson();
        cout<<"Enter Designation : ";
        cin>>designation;
        cout<<"\nEnter Department Name : ";
        cin>>dep_name;
        cout<<"\nEnter Basic Salary : ";
        cin>>basic_salary;
        cout<<endl;
        if(basic_salary>highest)
        {
            highest = basic_salary;
            name = ename;
        }
    }
};
int main()
{
    int num;
    cout<<"How many manager you want to enter? : ";
    cin>>num;
    Manager m;
    while(num)
    {
        m.setManager();
        num--;
    }
    cout<<"Manager with Highest Salary is : "<<m.highest<<endl
    <<"And, Manager Name is : "<<m.name<<endl;
    
}