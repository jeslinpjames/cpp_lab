#include<iostream>
using namespace std;
class objects
{
    private:
    static int count;
    public:
    objects()
    {
        count++;
    }
    void showno()
    {
        cout<<"Number of objects = "<<count<<endl;
    }
};
// int objects::count;
int main()
{
    int choice1,choice2;
    cout<<"Enter 1 to create an object."<<endl;
    cout<<"Enter 2 to exit."<<endl;
    cout<<"Enter your choice:";
    cin>>choice1;
    if(choice1 ==2)
    {
        cout<<"Thank you"<<endl;
        return 0;
    }
    do
    {
        objects ob;
        ob.showno();
        delete ob;
        cout<<"Do you want to continue?"<<endl;
        cout<<"Enter 1 to continue and 2 to exit:";
        cin>>choice2;
    }while(choice2==1);
    cout<<"Thank you"<<endl;
    return 0;
}