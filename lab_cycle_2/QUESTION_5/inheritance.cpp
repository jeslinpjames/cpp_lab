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
