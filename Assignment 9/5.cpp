#include<iostream>
using namespace std;
class Item
{
    protected:
    int item_no;
    float price;
    string name;
    public:
    void set_item()
    {
        cout<<"\nEnter Item name\t\t:\t";
        cin>>name;
        cout<<"\nEnter Item No.\t\t:\t";
        cin>>item_no;
        cout<<"\nEnter Item price\t:\t";
        cin>>price;
    }

};
class Discounted_Item : public Item
{
    protected:
    float discount_percentage;
    public:
    void set_discount()
    {
        set_item();
        cout<<"\nEnter discount percent\t:\t";
        cin>>discount_percentage;
        cout<<"\n------------------------------"<<endl;
    }
     void bill()
    {
        cout<<"Item Name\t\t:\t"<<name<<endl;
        cout<<"Item No.\t\t:\t"<<item_no<<endl;
        cout<<"Item Price\t\t:\t"<<price<<endl;
        cout<<"Discount Percentage\t:\t"<<discount_percentage<<endl;
        cout<<"Discounted price\t:\t"<<price-((price*discount_percentage)/100)<<endl;
        cout<<"--------------------------------"<<endl;
    }
    int getPrice()
    {
        return price;
    }
    int getDisount()
    {
        return price-((price*discount_percentage)/100);
    }

};

int main()
{
    int num=0;
    int total_price=0,total_discount=0,total=0;
    cout<<"How many item you want to enter? : ";
    cin>>num;
    Discounted_Item i[num];
    for(int j=0; j<num; j++)
    {
        i[j].set_discount();
    }
    for(int j=0; j<num; j++)
    {
        i[j].bill();
        total = total + i[j].getDisount();
        total_price = total_price + i[j].getPrice();
    }
    total_discount = total_price - total;
    cout<<"\nTotal Price\t\t:\t"<<total_price<<endl;
    cout<<"Total Discount\t\t:\t"<<total_discount<<endl;
    cout<<"Total         \t\t:\t"<<total;


}