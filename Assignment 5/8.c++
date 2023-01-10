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
            cin>>a[i][j];
        }
    }
    void show()
    {
        cout<<"Matrix is : "<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    Matrix operator-()
    {
        Matrix temp;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                temp.a[i][j]=-a[i][j];
            }
        }
        return temp;
    }

};

int main()
{
    Matrix m1,m2;
    m1.setdata();
    m1.show();
    m2=-m1;
    m2.show();
}