#include<iostream>
using namespace std;
class Matrix
{
	private:
		int **a;
		int r,c;
	public:
		Matrix(){}
		Matrix(int x, int y)
		{
			r=x;
			c=y;
			if((r>0)&&(c>0))
			{
				a= new int *[r];
				for(int i=0;i<r;i++)
				{
					a[i]= new int [c];
					for (int j = 0; j < c; j++) 
						a[i][j] = 0;
				}
			}
		}
		~Matrix()
		  {
		 	if (a != nullptr) {
		 		for (int i = 0; i < r; i++)
		 			delete[] a[i];
		 		delete[] a;
		 	}
		 	cout << "DEST" << endl;
		 }
		friend Matrix operator+(Matrix &p,Matrix &q);
		friend Matrix operator*(Matrix &p,Matrix &q);	
		friend istream& operator>>(istream &in, Matrix &x);
		friend ostream& operator<<(ostream &out, Matrix &x);
};
Matrix operator+(Matrix &p,Matrix &q)
{
	Matrix x(p.r,p.c);
	if((p.r==q.r)&&(p.c==q.c))
	{
		for(int i=0;i<p.r;i++)
		{
			for(int j=0;j<p.c;j++)
			{
				x.a[i][j]=p.a[i][j]+q.a[i][j];
			}
		}
	}
	else
	{
		cout<<"Addition of Matrix not possible. "<<endl;
	}
	return x;
}
Matrix operator*(Matrix &p,Matrix &q)
{
	Matrix x(p.r,q.c);
	if(p.c==q.r)
	{
		for(int i=0;i<x.r;i++)
		{
			for(int j=0;j<x.c;j++)
			{
				x.a[i][j]=0;
				for(int k=0;k<p.c;k++)
				{
					x.a[i][j]+=p.a[i][k]*q.a[k][j];
				}
			}
		}
	}
	else
	{
		cout<<"Multiplication of Matrix not possible. "<<endl;
	}
	return x;
} 
istream& operator>>(istream &in, Matrix& x)
{
	cout<<"Enter the elements of the matrix : "<<endl;
	for(int i=0;i<x.r;i++)
	{
		for(int j=0;j<x.c;j++)
		{
			in>>x.a[i][j];
		}
	}
	return in;
}
ostream& operator<<(ostream &out, Matrix& x)
{
	for(int i=0;i<x.r;i++)
	{
		for(int j=0;j<x.c;j++)
		{
			out<<x.a[i][j]<<" ";
		}
		out<<endl;
	}
	return out;
}
int main()
{
	int choice=1;
	do
	{
		int check1=0,check2=0;
		int r1,c1,r2,c2;
		cout<<"Enter the number of rows of the first matrix : ";
		cin>>r1;
		cout<<"Enter the number of columns of the first matrix : ";	
		cin>>c1;
		Matrix m1(r1,c1);
		cin>>m1;
		cout<<"Enter the number of rows of the second matrix : ";
		cin>>r2;
		cout<<"Enter the number of columns of the second matrix : ";
		cin>>c2;
		Matrix m2(r2,c2);
		cin>>m2;
		cout<<"The first matrix is: "<<endl<<m1<<endl;
		cout<<"The second matrix is: "<<endl<<m2<<endl;
		int choice2=1;
		Matrix m4(r1,c1);
		Matrix m3(r1,c2);
		if((r1==r2)&&(c1==c2))
		{
			check1++;
		}
		if(c1==r2)
		{
			check2++;
		}
		do
		{
			cout<<"Enter 1 for matrix sum, "<<endl;
			cout<<"Enter 2 for matrix multiplication."<<endl;
			int choice1;
			cout<<"Enter your choice : ";
			cin>>choice1;
			while((choice1!=1)&&(choice1!=2))
			{
				cout<<"Invalid choice!"<<endl;
				cout<<"Please re-enter your choice : ";
				cin>>choice1;
			}
			switch(choice1)
			{
				case 1:
					if(check1>0)
					{
						m3=m1+m2;
						cout<<"The sum is : "<<endl<<m3;
					}
					else
					cout<<"Addition not possbile."<<endl;
					break;
				case 2:
					if(check2>0)
					{
						m4=m1*m2;
						cout<<"The Product is : "<<endl<<m4;
					}
					else
						cout<<"Multiplication not possible."<<endl;
					break;
				default:
					cout<<"Wrong choice!"<<endl;
			}
			cout<<endl<<endl<<"Enter 1 to continue operations in the same matrix, "<<endl;
			cout<<"Enter any other number to exit."<<endl;
			cout<<"Enter your choice : ";
			cin>>choice2;
		}while (choice2==1);
		cout<<endl<<endl<<endl;
		cout<<"Enter 1 to continue, any other key to exit : ";
		cin>>choice;
		cout<<endl<<endl;	
	}while(choice==1);
	return 0;
}
