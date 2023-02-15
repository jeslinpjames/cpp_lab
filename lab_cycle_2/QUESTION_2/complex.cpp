#include<iostream>
using namespace std;
class complex
{
	private:
		float real,imag;
	public:
		void input()
		{
			cout<<"Enter the real part of the complex number : ";
			cin>>real;
			try
			{
				if(cin.fail())
				{
					throw runtime_error("Invalid Input!");
				}				
			}
			catch(runtime_error&e)
			{
				cerr<<e.what()<<endl;
			}
			cout<<"Enter the imaginary part of the complex number : ";
			cin>>imag;
			try
			{
				if(cin.fail())
				{
					throw runtime_error("Invalid Input!");
				}
			}
			catch(runtime_error & e)
			{
				cerr<<e.what()<<endl;
			}
		}
		void display()
		{
			cout<<"The Complex number is : "<<real;
			if(imag<0)
			{
				cout<<imag<<"j"<<endl;
			}
			else
				cout<<"+"<<imag<<"j"<<endl;
		}
		friend complex operator+(complex a, complex b);
		friend complex operator*(complex a, complex b);
};
complex operator+(complex a ,complex b)
{
	complex c;
	c.real=a.real+b.real;
	c.imag=a.imag+b.imag;
	return c;
}
complex operator*(complex a,complex b)
{
	complex c;
	c.real=a.real*b.real;
	c.imag=a.imag*b.imag;
	return c;
}
int main()
{
	int choice;
	complex a,b,c,d;
	do
	{
		a.input();
		a.display();
		b.input();
		b.display();
		c=a+b;
		d=a*b;
		cout<<"The sum of the two complex numbers is : "<<endl;
		c.display();
		cout<<"The product of the two complex number is : "<<endl;
		d.display();
		cout<<endl<<endl;
		cout<<"To continue enter 1."<<endl;
		cout<<"To exit enter any number."<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
	}while(choice==1);
	cout<<"Thank You!"<<endl;
	return 0;
}



