#include<iostream> 
using namespace std;
class Person 
{
    protected:
    string name;
    int age;
    public:
    void setName(string temp)
    {
        name = temp;
    }
    void setAge(int a)
    {
        age=a;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
class Employee: public Person
{
    int empid,salary;
    public:
    void setEmpid(int n)
    {
        empid = n;
    }
    void setSalary(int s)
    {
        salary = s;
    }
    int getEmpid()
    {
        return empid;
    }
    int getSalary()
    {
        return salary;
    }
    void display()
    {
        cout<<"Name = "<<name<<" Age = "<<age<<" EmpId = "<<empid<<" salary = "<<salary;
    }
};
int main()
{
    Person p1;
    Employee e1;
    e1.setName("Pranil");
    e1.setAge(21);
    e1.setEmpid(101);
    e1.setSalary(40000);
    e1.display();
    return 0;
 

}