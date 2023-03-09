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
        }
        void putdata()
        {
            cout<<"Roll no: "<<roll_no<<endl;
            cout<<"Name: "<<name<<endl;
        }
    
};
class Test:public Student
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
