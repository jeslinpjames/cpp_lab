#include<iostream>
using namespace std;
struct student
{
	char name[20];
	int roll_no;
	float tot;
};
int main()
{	student st;
	st.roll_no=1000;
	cout<<st.roll_no;
	return(0);
}



