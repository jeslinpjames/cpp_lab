#include<iostream>
#include<cstring>
using namespace std;
class Student
{ 
    protected:
        int roll_no;
        char name[20];
    public:
        Student(){}
        Student(int r,char n[])
        {
            roll_no=r;
            strcpy(name,n);
            cout<<"Student class constructor called"<<endl;
        }
        // void getdata()
        // {
        //     cout<<"Enter the roll no: ";
        //     cin>>roll_no;
        //     cout<<"Enter the name: ";
        //     cin>>name;
        void putdata()
        {
            cout<<"Roll no: "<<roll_no<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
class Test:virtual public Student
{
    protected:
    float subject1,subject2;
    public:
    Test(){}
    Test(float k ,float l)
    {
        subject1=k;
        subject2=l;
        cout<<"Test class constructor called"<<endl;
    }
    void putmarks()
    {
        cout<<"Mark 1 = "<<subject1<<endl;
        cout<<"Mark 2 = "<<subject2<<endl;
    }    
};
class Sports:virtual public Student
{
    protected:
    float score;
    public:
    Sports(){}
    Sports(float s)
    {
        score=s;
        cout<<"Sports class constructor called"<<endl;
    }
    void putscore()
    {
        cout<<"Score = "<<score<<endl;
    }    
};
class Result:public Test,public Sports
{
    float total;
    public:
    Result(){}
    Result(int r,char n[],float k,float l,float s):Test(k,l),Sports(s),Student(r,n)
    {
        total=k+l+s;
        cout<<"Result class constructor called"<<endl;
    }
    void display()
    {
        putdata();
        putmarks();
        putscore();
        cout<<"Total = "<<total<<endl;
    }
};
int main()
{
    int r;
    char n[20];
    float k,l,s;
    cout<<"Enter the roll no : ";
    cin>>r;
    cout<<"Enter the name of the student : ";
    cin>>n;
    cout<<"Enter the marks of the student for Computer : ";
    cin>>k;
    while(k>100)
    {
        cout<<"The entered marks is greater than 100, Please re-enter : "<<endl;
        cout<<"Enter the marks of the student for Computer : ";
        cin>>k;
    }
    cout<<"Enter the marks of the student for Physics : ";
    cin>>l;
    while(l>100)
    {
        cout<<"The entered marks is greater than 100, Please re-enter : "<<endl;
        cout<<"Enter the marks of the student for Physics : ";
        cin>>l;
    }
    cout<<"Enter the marks of the student for Sports : ";
    cin>>s;
    while(s>100)
    {
        cout<<"The entered marks is greater than 100, Please re-enter : "<<endl;
        cout<<"Enter the marks of the student for Sports : ";
        cin>>s;
    }
    Result r1(r,n,k,l,s);
    cout<<endl<<endl;
    r1.display();
    return 0;
}
