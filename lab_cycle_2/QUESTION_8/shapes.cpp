#include<iostream>
using namespace std;
class Shapes
{
    protected:
        float area;
    public:
        virtual void area();
        virtual void input();
};
class Circle:public Shapes
{
    private:
        float radius;
    public:
        void input()
        {
            cout<<"Enter the raius of the Circle : ";
            cin>>radius;
        }
        void area()
        {
            area = (22.0/7.0)*radius*radius;
            cout<<"The area of the Circle is : "<<area<<endl;             
        }
};
class Square:public Shapes
{
    private:
        float side;
    public:
        void input()
        {
            cout<<"Enter the side of the Square : ";
            cin>>side;
        }
        void area()
        {
            area= side*side;
            cout<<"The area of the Square is : "<<area<<endl;
        }
};

