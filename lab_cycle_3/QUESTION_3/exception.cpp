#include <iostream>
using namespace std;
class exep
{
    int a ,b;
    public:
    exep(){}
    exep(int x, int y):a(x),b(y)
    {}
    double divide()
    {
<<<<<<< HEAD
        double q=0.0;
=======
        double q=0;
>>>>>>> a3dcdacdde477df4d9900fc1e4244a352a23108f
        try
        {
            if(b==0)
                throw runtime_error("Divison by zero not possible!");
<<<<<<< HEAD
            else
               q=a/b;                 
=======
            else 
                q=(a/b);
>>>>>>> a3dcdacdde477df4d9900fc1e4244a352a23108f
        }
        catch(exception &e)
        {
            cout<<e.what()<<endl;
        }
        return q;
    }
<<<<<<< HEAD
    void input()
    {
        
    }
=======
>>>>>>> a3dcdacdde477df4d9900fc1e4244a352a23108f
};
int main()
{
    int choice1 =0;
    cout<<"Enter 1 to Start,\nEnter 2 or any other number to Exit :";
    cin>>choice1;
    while(choice1==1)
    {
        int n1,n2;
<<<<<<< HEAD
        try
        {
            cout<<"Enter the first number : ";
            cin>>n1;
            if(cin.fail())
            throw("Invalid data type, Enter Integer value.");
            cout<<"Enter the second number : ";
            cin>>n2;
            if(cin.fail())
            throw("Invalid data type, Enter Integer value.");
        }
        catch (const char* msg)
        {
            cout<<msg<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        exep ob(n1,n2);
        double q= ob.divide();
=======
        cout<<"Enter the first number : ";
        cin>>n1;
        cout<<"Enter the second number : ";
        cin>>n2;
        exep ob(n1,n2);
        double q= ob.divide();
        if(q!=0&&n2!=0)
>>>>>>> a3dcdacdde477df4d9900fc1e4244a352a23108f
        cout<<n1<<" / "<<n2<<" = "<<q<<endl;
        cout<<"Enter 1 to Continue,\nEnter 2 to Exit : ";
        cin>>choice1;
        cout<<endl<<endl;
    }
    cout<<"Thank You!"<<endl;
    return 0;
}
         