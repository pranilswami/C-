#include<iostream>
using namespace std;
class Student
{
    protected:
    float phy,chem,math;
    public:
    void setdata()
    {
        cout<<"Enter Physics, Chemistry and maths marks : "<<endl;
        cin>>phy>>chem>>math;
    }

};
class Total : public Student
{
    protected:
    float total;
    public:
    void calculate_total()
    {
        setdata();
        total = phy + chem + math;
    }
   
};
class Percentage : public Total
{
    float per;
    public:
    void percentage()
    {
        calculate_total();
        per = (total/300.0)*100;
        cout<<"Percentage is : "<<per<<endl;
    }
    
};
int main()
{
    Percentage p;
    p.percentage();
    return 0;  
}