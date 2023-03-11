#include<iostream>
using namespace std;
class alpha
{
    private:
        int x;
    public:
        alpha(int i)   
        {
            x=i;
            cout<<"Alpha has been Constructed"<<endl;
        }
        void show_x()
        {
            cout<<"The value of x is : "<<x<<endl;
        }
};
class beta
{
	private:
		float y;
	public:
		beta(float j)
		{
			y=j;
			cout<<"Beta has been Constructed "<<endl;
		}
		void show_y()
		{
			cout<<"The value of y is : "<<y<<endl;
		}
};
class gamma:public beta,public alpha
{
	private:
		int m,n;
	public:
		gamma(int m1,int n1, int i, float j):alpha(i),beta(j)
		{
			m=m1;
			n=n1;
			cout<<"Gamma has been Constructed "<<endl;
		}
		void show_m_n()
		{
			cout<<"The value of m is : "<<m<<endl;
			cout<<"The value of n is : "<<n<<endl;
		}
};
int main()
{
	int m1,n1,x1;
	float y1;
	int choice1;
	cout<<"Enter 1 to Start, 2 or any other number to Exit :";
	cin>>choice1;
	if(choice1==1)
	{
		cout<<"Enter the value of x : ";
		cin>>x1;
		cout<<"Enter the value of y : ";
		cin>>y1;
		cout<<"Enter the value of m : ";
		cin>>m1;
		cout<<"Enter the value of n : ";
		cin>>n1;
        cout<<endl<<endl;
		gamma g(m1,n1,x1,y1);
        cout<<endl;
		int choice2;
		cout<<"Enter 1  to display the values, 2 or any other values to exit : ";
		cin>>choice2;
        cout<<endl;
		if(choice2==1)
		{
			    g.show_x();
			    g.show_y();
			    g.show_m_n();
		}
		else
		{
			cout<<endl<<"Thank You!"<<endl;
			return 0;
		}
	}
	cout<<endl<<"Thank You!"<<endl;
	return 0;
}



