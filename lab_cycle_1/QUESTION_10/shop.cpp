#include<iostream>
using namespace std;
class shop
{
    private:
    int code;
    string name;
    float price;
    int quantity;
    public:
    void delete_item();
    void add_item();
    void print();
};
shop::add_item()
{
    cout<<"Enter the Product name : ";
    cin>>name;
    cout<<"Enter the Product code : ";
    cin>>code;
    cout<<"Enter the price of the Product : ";
    cin>>price;
    cout<<"Enter the Quantity : ";
    cin>>quantity;
}
void shop::print()
{

}
void delete_item();

