#include<iostream>
using namespace std;
class code
{
    int id;
    public:
    code()
    {
        id=0;
    }
    code(int a)
    {
        id=a;
    }
    code(const code &a)
    {
        id =a.id;
    }
    void display()
    {
        cout<<id<<endl;
    }
};

int main()
{
    code I1;
    code I2(101);
    code I3(I2);
    code I4=I2;
    code I5;
    I5=I2;
    I5.display();
    I1.display();
    I2.display();
    I3.display();
    I4.display();
    return(0);
}