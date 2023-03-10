#include<iostream>
using namespace std;
class alpha
{
    private:
    int x;
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

