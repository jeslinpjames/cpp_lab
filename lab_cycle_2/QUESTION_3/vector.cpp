#include<iostream>
using namespace std;
class vector
{
	private:
	float i_comp,j_comp,k_comp,magnitude;
	public:
	friend float operator*(vector &a); 
	friend ostream& operator<<(vector &a,ostream &out );
	friend istream& operator>>(vector &a,istream &in);
};
float operator*(vector &a)
{
	float product;
	product=(i_comp*a.i_comp)+(j_comp*a.j_comp)+(k_comp*a.k_comp);
	return product;
}
istream& operator>>(vector &a,istream &in)
{
	cout<<"Enter the component of i : ";
	cin>>a.i_comp;
	cout<<"Enter the component of j : ";
	cin>>a.j_comp;
	cout<<"Enter the component of k : ";
	cin>>a.k_comp;
	return(in);
}
ostream& operator<<(vector &a,ostream &out)
{
	if((a.j_comp>=0)&&(a.k_comp>=0))
		cout<<a.i_comp<<"i + "<<a.j_comp<<"j + "<<a.k_comp<<"k "<<endl;
        else
        {
		if((a.j_comp<0)&&(a.k_comp<0))
			cout<<a.i_comp<<"i "<<a.j_comp<<"j "<<a.k_comp<<"k "<<endl;
               	else if(a.j_comp<0)
			cout<<a.i_comp<<"i "<<a.j_comp<<"j + "<<a.k_comp<<"k "<<endl;
                else
			cout<<a.i_comp<<"i + "<<a.j_comp<<"j "<<a.k_comp<<"k "<<endl;
        }
}

	
