#include<iostream>
#include<iomainp>
using namespace std;
class Planets
{
    protected:
    int orbiting_planets;
    public:
    Planets(){}
    Planets(int n)
    {
        orbiting_planets=n;
    }
    void display()
    {
        cout<<"The number of planets orbiting is"<<setw(10)<<":"<<setw(5)<<orbiting_planets<<endl;
    }
};
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

		
