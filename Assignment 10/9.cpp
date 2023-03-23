#include<iostream>
using namespace std;
class A
{
    public:
    A(){}
    A (float b, float h)
    {
        cout<<"Area of triangle : "<<(b*h)/2.0;
    }
    A (int l,int b)
    {
        cout<<"Area of rectangle : "<<l*b;
    }
    A (float r)
    {
        cout<<"Area of circle : "<<3.14*r*r;
    }
};
int main()
{
    while(1)
    {   
        int num;
        cout<<"\n1. Area of Triangle "<<endl;
        cout<<"2. Area of Circle "<<endl;
        cout<<"3. Area of Rectangle "<<endl;
        cout<<"4. Exite "<<endl;
        cout<<endl<<"Enter your choice : "<<endl;
        cin>>num;

        if(num==1)
        {
            float b,h;
            cout<<"Enter base and height of triangle : "<<endl;
            cin>>b>>h;
            A a1(b,h);
        }
        else if(num==2)      
        {    
            int r;
            cout<<"Enter the radius of circle : "<<endl;
            cin>>r;
            A a2(r);
        }        
        else if(num==3)
        {    
            int l,b;
            cout<<"Enter the lenght and height of rectangle : "<<endl;
            cin>>l>>b;
            A a3(l,b);
        }
        else if(num==4)
        {
            return 0;
        }
    }


    

    // if we want to declaire object in switch then do this 
    // switch (1)
    // {
    // case 1 :    
    //         {
    //             A a;
    //         }
    //         break;
    
    // default:
    //     break;
    // }
}