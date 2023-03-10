#include<iostream>
using namespace std;
class alpha
{
    private:
         x;
    public:
        aplha(int i)   
        {
            x=i;
            cout<<"Alpha has been Constructed"<<endl;
        }
        void showx()
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
		void showy()
		{
			cout<<"The value of y is : "<<y<<endl;
		}
};
