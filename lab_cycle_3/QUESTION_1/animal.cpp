#include<iostream>
using namespace std;
class Animal
{
    protected:
        char* pet_name;
    public:
        virtual void speak()=0;   
};
class Dog:public Animal
{
    void speak()
    {
        cout<<pet_name<<" goes woof. "<<endl;
    }
};
class Cat:public Animal
{
    void speak()
    {
        cout<<pet_name<<" goes meow. "<<endl;
    }
}