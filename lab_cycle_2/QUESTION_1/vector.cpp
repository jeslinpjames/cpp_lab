#include<iostream>
#include<cmath>
using namespace std;
class vector
{
    private:
        int i_comp,j_comp,k_comp,magnitude;    
    public:
    bool operator==(vector &a);
    bool operator!=(vector &a);
    bool operator<(vector &a);   
    bool operator<=(vector &a);
    bool operator>(vector &a);
    bool operator>=(vector &a);
    void accept()
    {
        cout<<"Enter the component of i : ";
	cin>>i_comp;
	cout<<"Enter the component of j : ";
	cin>>j_comp;
	cout<<"Enter the component of k : ";
	cin>>k_comp;
    }
    void display();
    void compute_mag();
};
void vector::display()
{
	if((j_comp>=0)&&(k_comp>=0))
		cout<<i_comp<<"i + "<<j_comp<<"j + "<<k_comp<<"k "<<endl;
        else
        {
		if((j_comp<0)&&(k_comp<0))
			cout<<i_comp<<"i "<<j_comp<<"j "<<k_comp<<"k "<<endl;
               	else if(j_comp<0)
			cout<<i_comp<<"i "<<j_comp<<"j + "<<k_comp<<"k "<<endl;
                else
			cout<<i_comp<<"i + "<<j_comp<<"j "<<k_comp<<"k "<<endl;
        }
}
void vector::compute_mag()
{
	magnitude=sqrt((i_comp*i_comp)+(j_comp*j_comp)+(k_comp*k_comp));
}
bool vector::operator==(vector &a)
{
    if(a.magnitude==magnitude)
    return true;
    else 
    return false;
}
bool vector::operator!=(vector &a)
{
    if((a.magnitude!=magnitude))
    return true;
    else 
    return false;
}
bool vector::operator<(vector &a)
{
    if((magnitude<a.magnitude))
    return true;
    else
    return false;
}
bool vector::operator<=(vector &a)
{
    if(magnitude<=a.magnitude)
    return true;
    else
    return false;
}
bool vector::operator>(vector &a)
{
    if(magnitude>a.magnitude)
    return true;
    else
    return false;
}
bool vector::operator>=(vector &a)
{
    if(magnitude>=a.magnitude)
    return true;
    else
    return false;
}
int main()
{
	vector ob1;
	vector ob2;
	int choice=0,i=0;
	cout<<"Enter 1 to do vector calculation,\nEnter 2 or any other number to Exit.\nEnter your choice : ";
	cin>>choice;
	while(choice==1)
	{
		cout<<"Enter the values of the first vector : "<<endl;
		ob1.accept();
		ob1.compute_mag();
		cout<<"Enter the values of the second vector : "<<endl;
		ob2.accept();
		ob2.compute_mag();
		cout<<"The first vector is : ";
		ob1.display();
		cout<<"The second vector is : ";
		ob2.display();
		int choice1,choice2=1;
		while(choice2==1)
		{
            cout<<endl<<endl<<endl;
            cout<<"Enter 1 for checking if both the vectors are equal,"<<endl;
            cout<<"Enter 2 for checking if both the vectors are not equal,"<<endl;
            cout<<"Enter 3 for checking if the second vector is greater than the first vector,"<<endl;
            cout<<"Enter 4 for checking if the second vector is greater than or equal to the first vector,"<<endl;
            cout<<"Enter 5 for checking if the first vector is greater than the second vector,"<<endl;
            cout<<"Enter 6 for checking if the first vector is greater than or equal to the second vector,"<<endl;
            cout<<"Enter your choice : ";
            cin>>choice1;
            switch (choice1)
            {
                case 1:
                    if(ob1==ob2)
                        cout<<"Both the vectors are equal. "<<endl;
                    else
                        cout<<"Both the vectors are not equal. "<<endl;
                    break;
                case 2:
                    if(ob1!=ob2)
                        cout<<"Both the vectors are not equal. "<<endl;
                    else
                        cout<<"Both the vectors are equal. "<<endl;
                    break;
                case 3:
                    if(ob1<ob2)
                    cout<<"The second vector is greater than the first vector. "<<endl;
                    else
                        cout<<"The second vector is not greater than the first vector "<<endl;
                    break;
                case 4:
                    if(ob1<=ob2)
                            cout<<"The second vector is greater than or equal to the first vector. "<<endl;
                    else
                            cout<<"The second vector is not greater than or equal to the first vector "<<endl;
                    break;
                case 5:
                    if(ob1>ob2)
                            cout<<"The first vector is greater than the second vector. "<<endl;
                    else
                            cout<<"The first vector is not greater than the second vector "<<endl;
                    break;
                case 6:
                    if(ob1>=ob2)
                            cout<<"The first vector is greater than or equal to the second vector. "<<endl;
                    else
                            cout<<"The first vector is not greater than or equal to the second vector "<<endl;
                    break;
                default:
                    cout<<"Wrong choice!"<<endl;
            }
            cout<<"\nEnter 1 to do comparission with the same vectors, \nEnter any other number to continue."<<endl;
            cin>>choice2;
		}
		cout<<endl<<endl<<"Enter 1 to enter another vector and continue,\nEnter any other number to exit."<<endl;
		cin>>choice;
	}
	cout<<"Thank You!"<<endl;
	return 0;
}

