#include<iostream>
#include<string>
using namespace std;
class Employee
{
    public:
    int e_code=0;
    string name;
    public:
    void setEmployee()
    {
        cout<<"\n\nEnter details\n";
        cout<<"Enter employee code    \t:\t";
        cin>>e_code;
        cout<<"\nEnter Employee name  \t:\t";
        cin>>name;
    }
    
};
class Fulltime : public Employee
{
    public:
    int daily_rate=0, days=0, salary=0;
    public:
    void setFull()
    {
        setEmployee();
        cout<<"\nEnter number of days \t:\t";
        cin>>days;
        cout<<"\nEnter daily rate     \t:\t";
        cin>>daily_rate;
        salary = daily_rate * days;
        cout<<"Salary(monthly)       \t:\t"<<salary<<endl<<endl;
    }
    void display()
    {
        cout<<"--------------------------\n";
        cout<<"\nEmployee Number    \t:\t"<<e_code<<endl;
        cout<<"\nEmployee Name      \t:\t"<<name<<endl;
        cout<<"\nSalary             \t:\t"<<salary<<endl;
        cout<<"\nStatus             \t:\tFulltime"<<endl;
        cout<<"--------------------------\n";
    }

};
class Parttime : public Employee
{
    public:
    int hours=0,hour_rate=0,salary=0;
    public:
    void setPart()
    {
        setEmployee();
        cout<<"\nEnter hours          \t:\t";
        cin>>hours;
        cout<<"\nEnter hour rate      \t:\t";
        cin>>hour_rate;
        salary = hour_rate * hours;
        cout<<"Salary(daily)          \t:\t"<<salary<<endl<<endl;
    }
    void display()
    {
        cout<<"--------------------------\n";
        cout<<"\nEmployee Number  \t:\t"<<e_code<<endl;
        cout<<"\nEmployee Name      \t:\t"<<name<<endl;
        cout<<"\nSalary             \t:\t"<<salary<<endl;
        cout<<"\nStatus             \t:\tParttime"<<endl;
        cout<<"--------------------------\n";
    }
};  
int main()
{
    int n=2;
    int var=0;
    int var1=0;
    Fulltime f1[n];
    Parttime p1[n];
    int n1,n2;
    while(1)
    {   
        cout<<"1.Enter Record"<<endl;
        cout<<"2.Display Record"<<endl;
        cout<<"3.Search Record"<<endl;
        cout<<"4.Quite"<<endl;
        cin>>n1;
        switch(n1)
        {
            case 1  :   int y;
                        cout<<"\n1. Fulltime Employee";
                        cout<<"\n2. Parttime Employee \n";
                        cout<<"\n Enter : ";
                        cin>>y;
                            switch(y)
                            {
                                case 1 :    f1[var].setFull();
                                            var++;
                                            break;
                                case 2 :    p1[var1].setPart();
                                            var1++;
                                            break;
                                default:    cout<<"Invalid choice";
                                            break;
                            }
                            break;
            case 2  :   for(int i=0; i<n; i++)
                        f1[i].display();
                        for(int i=0; i<n; i++)
                        p1[i].display();
                        break;
            case 3  :   cout<<"Enter employee code : \n";
                        cin>>n2;
                        for(int i=0; i<n; i++)
                        {
                            if(f1[i].e_code==n2)
                            {
                                f1[i].display();
                                break;
                            }
                            if(p1[i].e_code==n2)
                            {
                                p1[i].display();
                                break;
                            }
                        }
                        break;
            case 4  :   return 0;
            
            default :   cout<<"Invalid choice";
                        break;
                        

        }
    }
}