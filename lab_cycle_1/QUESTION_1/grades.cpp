#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
	string name;
	int Roll_no;
	int mark_1,mark_2,mark_3;
	float avg;
	public:
	void input();
	void calcGrade();
	void display();
	void average();
};
void Student::input(void)
{
	cout<<"----------INPUT DETAILS---------"<<endl;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter Roll No : ";
	cin>>Roll_no;
	cout<<"Enter Marks of Three Subjects:"<<endl;
	cout<<"Enter the marks of Maths : ";
	cin>>mark_1;
	while(mark_1>100)
	{
		cout<<"The entered mark is more than 100."<<endl;
		cout<<"Enter the marks of Maths : ";
		cin>>mark_1;
		if(mark_1<=100)
			break;
	}
	cout<<"Enter the marks of Computer : ";
        cin>>mark_2;
        while(mark_2>100)
        {
                cout<<"The entered mark is more than 100."<<endl;
                cout<<"Enter the marks of Computer : ";
                cin>>mark_2;
                if(mark_2<=100)
                        break;
        }
        cout<<"Enter the marks of Physics : ";
        cin>>mark_3;
        while(mark_3>100)
        {
                cout<<"The entered mark is more than 100."<<endl;
                cout<<"Enter the marks of Physics : ";
                cin>>mark_3;
                if(mark_3<=100)
                        break;
        }
}
void Student::calcGrade(void)
{
	if(avg>=90)
		cout<<"A+";
	else if(avg>=80)
		cout<<"A";
	else if(avg>=70)
                cout<<"B+";
	else if(avg>=60)
                cout<<"B";
	else if(avg>=50)
                cout<<"C+";
	else if(avg>=40)
                cout<<"C";
	else if(avg>=30)
                cout<<"D+";
	else
		cout<<"Failed";
}
void Student::display(void)
{
	cout<<"----------REPORT CARD----------"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Roll No : "<<Roll_no<<endl;
	cout<<"-------------MARKS-------------"<<endl;
	cout<<"Maths : "<<mark_1<<endl;
	cout<<"Computer : "<<mark_2<<endl;
	cout<<"Physics : "<<mark_3<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Average Marks : "<<avg<<endl;
	cout<<" Grade : ";
}
void Student::average(void)
{
	avg=(mark_1+mark_2+mark_3)/3;
}
int main()
{
	int n;
	cout<<"Enter the number of Students : ";
	cin>>n;
	Student ob[n];
	for(int i=0;i<n;i++)
	{
		ob[i].input();
		ob[i].average();
		ob[i].display();
		ob[i].calcGrade();
		cout<<endl<<endl<<endl;
	}
	return(0);
}


