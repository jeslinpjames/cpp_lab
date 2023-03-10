#include<iostream>
#include<iomainp>
using namespace std;
class Universe
{
    protected:
	    int noofGalaxies;
    public:
	    Universe(){}
	    Universe(int n1)
	    {
		    noofGalaxies=n1;
	    }
	    void display()
	    {
		    cout<<"The number of Galaxies in the Universe is"<<setw(10)<<":"<<setw(5)<<noofGalaxieS<<endl;
            }
};

		
