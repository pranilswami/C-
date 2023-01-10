#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    public:
    void setdata()
    {
        cout<<"Enter Matrix Element (3*3) : "<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<endl;
    }
    void showdata()
    {
        cout<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
        
    }
    Matrix operator+(Matrix M)
    {
        Matrix temp;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                temp.a[i][j]=a[i][j]+M.a[i][j];
            }
        }
        return temp;

    }

};

int main()
{
    Matrix m1,m2,m3;
    m1.setdata();
    m2.setdata();
    cout<<"First Matrix : "<<endl;
    m1.showdata();
    cout<<"Second Matrix : "<<endl;
    m2.showdata();
    m3=m1+m2;
    cout<<"Addition of Matrix : "<<endl;
    m3.showdata();
}