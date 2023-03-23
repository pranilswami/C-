#include<iostream>
using namespace std;
class Player
{
    int player_no,matches,*goals;
    char name[100];
    public:
    Player()
    {
        int i;
        cout<<"\nEnter player number : ";
        cin>>player_no;
        cout<<"\nEnter player name : ";
        cin>>name;
        cout<<"\nEnter No. of matches : ";
        cin>>matches;
        goals = new int[matches];
        for(i=0; i<matches; i++)
        {
            cout<<"\nEnter goals in match "<<i+1<<" : ";
            cin>>goals[i];
        }

    }
    void display()
    {
        cout<<endl;
        cout<<"Player Number  : "<<player_no<<endl;
        cout<<"Player Name    : "<<name<<endl;
        cout<<"No. of Matches : "<<matches<<endl;
        cout<<"Goals in each match : "<<endl;
        for(int i=0; i<matches; i++)
        {
            cout<<"In "<<i+1<<" match : "<<goals[i]<<endl;
        }
    }

};
int main()
{
    Player p1;
    p1.display();
    return 0;
}