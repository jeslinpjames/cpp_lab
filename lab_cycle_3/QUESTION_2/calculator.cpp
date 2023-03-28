#include<iostream>
using namespace std;
template< class T>
class calculate
{
    T num1,num2;
    public:
    calculate(T n1 , T n2):num1(n1),num2(n2){}
    void display()
    {
        cout<<" The numbers are "<<num1<<" and "<<num2<<endl;
    }
    T add()
    {return(num1+num2);}
    T sub()
    {return(num1-num2);}
    T mult()
    {return(num1*num2);}
    T div()
    {return(num1/num2);}
}