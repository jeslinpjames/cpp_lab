#include<iostream>
#include<string>
using namespace std;
class String
{
    private:
    string s;
    int len;
    public:
    void strlength(void)
    {
        len=s.length();
    }
    void displaylen(void)
    {
        cout<<len;
    }
    void concatinate(String,String);
    void compare(String,String);
    void accept()
    {
        cout<<"Enter the string:";
        cin>>s;
    }
    void display()
    {
        cout<<s;
    }
};
void String::concatinate(String a, String b,String &c)
{
    c.s=a.s+b.s;
}
void String::compare(String a,String b)
{
    int x=a.s.length();
    int y=b.s.length();
    if(x>y)
    {
        cout<<a.s<<" is greater than "<<b.s<<endl;
    }
    else if(y>x)
    {
        cout<<b.s<<" is greater than "<<a.s<<endl;
    }
    else
    cout<<"Both the strings are equal in length."<<endl;
}
int main()
{
    String a,b,c,d;
    cout<<"Enter the first string:";
    a.accept();
    cout<<"Enter the second string:";
    b.accept();
    cout<<"---------RESULT--------"<<endl;
    cout<<"First String : "<<a.display()<<endl;
    cout<<"Second String : "<<b.display()<<endl;
    d.concatinate(a,b,c);
    cout<<"Strings after concatination : "<<c.display()<<endl;
    cout<<"The length of the first String is :";
    a.strlength();
    cout<<a.displaylen()<<endl;
    cout<<"The length of the second String is : ";
    b.strlength();
    cout<<b.displaylen()<<endl;
    cout<<"The length of the concatinated String is : ";
    c.strlength();
    cout<<c.displaylen()<<endl;
    cout<<"The result of the comparision : ";
    c.compare(a,b);
    return(0);
}