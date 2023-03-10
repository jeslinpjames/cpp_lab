#include<iostream>
#include<iomainp>
using namespace std;
class Planets
{
    protected:
    int orbiting_planets;
    public:
    Planets(){}
    Planets(int n1)
    {
        orbiting_planets=n1;
    }
    void display()
    {
        cout<<"The number of planets orbiting is"<<setw(10)<<":"<<setw(5)<<orbiting_planets<<endl;
    }
};
class Stars:virtual public Planets
{
    protected:
    int noofStars;
    public:
    Stars(){}
    Stars(int n2)
    {
        noofStars=n2;
    }
    void display()
    {
        cout<<"The number of Stars in is"<<setw(10)<<":"<<setw(5)<<noofStars<<endl;
    }
};
class Universe
{
    protected:
	    int noofGalaxies;
    public:
	    Universe(){}
	    Universe(int n3)
	    {
		    noofGalaxies=n3;
	    }
	    void display()
	    {
		    cout<<"The number of Galaxies in the Universe is"<<setw(10)<<":"<<setw(5)<<noofGalaxieS<<endl;
            }
};

		
