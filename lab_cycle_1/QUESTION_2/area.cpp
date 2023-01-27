#include<iostream>
#include<cmath>
using namespace std;
class cl
{
    public:
    float area(float);
    float area(float,float);
    int area(long);
    float area(float,float,float);
    float area(int);
};
float cl::area(float r)
{
    float pi = 3.14159265;
    float ar= pi*(r*r);
    return ar;
}
float cl::area(float a, float b)
{
    float ar = a*b;
    return ar;
}
int cl::area(long a)
{
    long ar=a*a;
    return ar;
}
float cl::area(float a,float b,float c)
{
    float s=(a+b+c)/2;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
float cl::area(int a)
{
    float ar=((3*sqrt(3))/2)*(a*a);
    return ar;
}
int main()
{
    int x=1;
    float r,a,b,a1,b1,c1;
    int y,a2;
    long s;
    cl ob;
    while((x>0)&&(x<=5))
    {
        cout<<"Enter 1 for area of Circle"<<endl<<"Enter 2 for area of Rectangle"<<endl<<"Enter 3 for area of Square"<<endl<<"Enter 4 for area of Triangle"<<endl<<"Enter 5 for area of Hexagon"<<endl;
        cout<<"Enter any other number to exit"<<endl;
        cin>>x;
        if(x==1)
        {
            cout<<"----------CIRCLE----------"<<endl;
            cout<<"Enter the radius of the Circle:";
            cin>>r;
            cout<<"The area of the Circle="<<ob.area(r)<<endl;         
        }
        else if(x==2)
        {
            cout<<"----------RECTANGLE--------"<<endl;
            cout<<"Enter the sides of the Rectangle:";
            cin>>a>>b;
            cout<<"The area of the Rectangle="<<ob.area(a,b)<<endl;
        }
        else if(x==3)
        {
            cout<<"----------SQUARE----------"<<endl;
            cout<<"Enter the side of the Square:";
            cin>>s;
            cout<<"The area of the Square="<<ob.area(s)<<endl;
        }
        else if(x==4)
        {
            cout<<"----------TRIANGLE---------"<<endl;
            cout<<"Enter the three sides of the Triangle:";
            cin>>a1>>b1>>c1;
            cout<<"The area of the Triangle="<<ob.area(a1,b1,c1)<<endl;
        }
        else if(x==5)
        {
            cout<<"----------HEXAGON----------"<<endl;
            cout<<"Enter the side of the Hexagon:";
            cin>>a2;
            cout<<"The area of the Hexagon="<<ob.area(a2)<<endl;
        }
        else
        {
            cout<<"EXIT"<<endl;
            break;
        }
        cout<<"Enter 1 to continue or any other key to exit:";
        cin>>y;
        if(y!=1)
        {
            cout<<"EXITING";
            break;
        }
        else
        cout<<endl<<endl<<endl;
    }
    return(0);
}
