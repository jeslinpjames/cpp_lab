#include<iostream>
using namespace std;
class Shapes
{
    protected:
        float area;
    public:
        virtual void find_area();
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
        void find_area()
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
        void find_area()
        {
            area= side*side;
            cout<<"The area of the Square is : "<<area<<endl;
        }
};
class Ellipse:public Shapes
{
    private:
        float major_axis,minor_axis;
    public:
        void input()
        {
            cout<<"Enter the value of the Major Axis of the Ellipse : "
            cin>>major_axis;
            cout<<"Enter the value of the Minor Axis of the Ellipse : "
            cin>>minor_axis;
        }
        void find_area()
        {
            area = (22.0/7.0)*major_axis*minor_axis;
            cout<<"The area of the Ellipse is : "<<area<<endl;
        }
};
class Rectangle:public Shapes
{
    private:
        float length,breadth;
    public:
        void input()
        {
            cout<<"Enter the Length of the Rectangle : ";
            cin>>length;
            cout<<"Enter the Breadth of the Rectangle : ";
            cin>>breadth;
        }
        void find_area()
        {
            area=length*breadth;
            cout<<"The area of the Rectangle is : "<<area<<endl;
        }
};

