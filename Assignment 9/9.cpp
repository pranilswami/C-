#include<iostream>
#include<string>
using namespace std;
class Student
{
    protected:
    int id=0;
    string name;
    public:
    void setStudent()
    {
        cout<<"\n----------------------------\n";
        cout<<"\nEnter Roll no.            \t:  ";
        cin>>id;
        cout<<"\nEnter Student Name        \t:  ";
        cin>>name;
    }
};
class Exam : public Student
{
    protected:
    float sub1,sub2,sub3,sub4,sub5,sub6;
    public:
    void setExam()
    {
        setStudent();
        cout<<"\nEnter marks for subject 1 \t:  ";
        cin>>sub1;
        cout<<"\nEnter marks for subject 2 \t:  ";
        cin>>sub2;
        cout<<"\nEnter marks for subject 3 \t:  ";
        cin>>sub3;
        cout<<"\nEnter marks for subject 4 \t:  ";
        cin>>sub4;
        cout<<"\nEnter marks for subject 5 \t:  ";
        cin>>sub5;
        cout<<"\nEnter marks for subject 6 \t:  ";
        cin>>sub6;
    }
};
class Result : public Exam
{
    protected:
    float percentage;
    public:
    void display()
    {
        percentage = ((sub1+sub2+sub3+sub4+sub5+sub6)/600.00)*100.00;
        cout<<"\n--------------------------------------------\n";
        cout<<"************* Student Marklist *************";
        cout<<"\n--------------------------------------------";
        cout<<"\nRoll No.              \t:  "<<id;
        cout<<"\nStudent Name          \t:  "<<name;
        cout<<"\n\nMarks of subject 1  \t:  "<<sub1;
        cout<<"\nMarks of subject 2    \t:  "<<sub2;
        cout<<"\nMarks of subject 3    \t:  "<<sub3;
        cout<<"\nMarks of subject 4    \t:  "<<sub4;
        cout<<"\nMarks of subject 5    \t:  "<<sub5;
        cout<<"\nMarks of subject 6    \t:  "<<sub6;
        cout<<"\n\nTotal Percentage    \t:  "<<percentage;
        cout<<"\n-----------------------------------------------";
    }
};  

int main()
{
    int num;
    cout<<"Enter No. of students you want? : ";
    cin>>num;
    Result r[num];
    for(int i=0; i<num; i++)
    {
        r[i].setExam();
    }
    for(int i=0; i<num; i++)
    {
        r[i].display();
    }
    return 0;
}