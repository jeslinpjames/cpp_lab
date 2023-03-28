#include<iostream>
#include<string>
using namespace std;

class Animal
{
    public:
        virtual void speak()=0;   
};
class Dog:public Animal
{
    public:
    void speak()
    {
        cout<<" goes woof. "<<endl;
    }
};
class Cat:public Animal
{
    public:
    void speak()
    {
        cout<<" goes meow. "<<endl;
    }
};
int main()
{
    int choice1=0;
    cout<<"Enter 1 to Start.\nEnter 2 or any other number to Exit.\nEnter your choice : ";
    cin>>choice1;
    while(choice1==1)
    {
        int choice2=0;
        cout<<"Enter 1 for Dog.\nEnter 2 for cat.\nEnter your choice : ";
        cin>>choice2;
        Dog mydog;
        Cat mycat;
        string name;
        switch(choice2)
        {
            case 1:
            cout<<"Enter the dog's name : ";
            cin>>name;
            cout<<name;
            mydog.speak();
            // delete name;
            break;
            case 2:
            cout<<"Enter the cat's name : ";
            cin>>name;
            cout<<name;
            mycat.speak();
            // delete name;
            break;
            default:cout<<"Invalid Choice!"<<endl;
        }
        cout<<endl<<endl;
        cout<<"Enter 1 to Continue.\nEnter 2 or any other number to Exit.\nEnter your choice : ";
        cin>>choice1;
        cout<<endl;
    }
    cout<<"Thank You!"<<endl;
    return(0);
}