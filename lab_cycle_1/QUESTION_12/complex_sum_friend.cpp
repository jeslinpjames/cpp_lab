#include<iostream>
using namespace std;
class complex 
{
    private:
    float real,imag;
    public:
    void input()
    {
        cout<<"Enter the real and imaginary part of the complex number : ";
        cin>>real>>imag;
    }
    void display()
    {
        cout<<"\nThe complex number is "<<real;
        if(imag<0)
        {
            cout<<imag<<"j"<<endl;
        }
        else
        cout<<" + "<<imag<<"j"<<endl;
    }
    friend complex sum (complex a, complex b);
};
complex sum (complex a , complex b)
{
    complex c;
    c.real =a.real+b.real;
    c.imag =a.imag+b.imag;
    return c;
}
int main()
{
    int  choice;
    complex a,b,c;
    do
    {
        a.input();
        a.display();
        b.input();
        b.display();
        c=sum(a,b);
        cout<<"The sum of the two complex numbers is : ";
        c.display();
        cout<<endl<<endl;
        cout<<"To continue enter 1."<<endl;
        cout<<"To exit enter any number."<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        }while(choice==1);
        cout<<"Thank You"<<endl;
        return 0;
}