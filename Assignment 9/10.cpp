#include<iostream>
#include<string>
using namespace std;
class worker
{
    protected:
    int code;
    string name;
    float salary;
    public:
    void setworker()
    {
        cout<<"\n-------------------------------";
        cout<<"\nEnter code    \t: ";
        cin>>code;
        cout<<"\nEnter Name    \t: ";
        cin>>name;
        cout<<"\nEnter Salary  \t: ";
        cin>>salary;
    }

};
class officer
{
    protected:
    float DA, HRA;
    public:
    void setofficer()
    {
        
        cout<<"\nEnter DA       \t: ";
        cin>>DA;
        cout<<"\nEnter HBA      \t: ";
        cin>>HRA;
    }
};
class Manager : public worker,public officer
{
    float TA,gross_salary;
    public:
    void setManager()
    {
        setworker();
        setofficer();
    }
    void display()
    {
        cout<<"\n------------------------------";
        TA = (salary/100)*10;
        cout<<"\nCode          \t: "<<code;
        cout<<"\nName          \t: "<<name;
        cout<<"\nSalary        \t: "<<salary;
        cout<<"\nDA            \t: "<<DA;
        cout<<"\nHRA           \t: "<<HRA;
        cout<<"\nTA            \t: "<<TA;
        cout<<"\nGross Salary  \t: "<<salary+DA+HRA+TA;
    }
};
int main()
{
    int num;
    cout<<"Enter Manager Count : ";
    cin>>num;
    Manager *m;
    m = new Manager[num];
    for(int i=0; i<num; i++)
    {
        cout<<"\nEnter worker information for "<<i+1;
        m[i].setManager();
    }
    cout<<"\n------------------------------";
    cout<<"\n    Manager Information    ";
    for(int i=0; i<num; i++)
    {
        m[i].display();
    }
    return 0;
}