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
        double q=0;
        try
        {
            if(b==0)
                throw runtime_error("Divison by zero not possible!");
            else 
                q=(a/b);
        }
        catch(exception &e)
        {
            cout<<e.what()<<endl;
        }
        return q;
    }
};
int main()
{
    int choice1 =0;
    cout<<"Enter 1 to Start,\nEnter 2 or any other number to Exit :";
    cin>>choice1;
    while(choice1==1)
    {
        int n1,n2;
        cout<<"Enter the first number : ";
        cin>>n1;
        cout<<"Enter the second number : ";
        cin>>n2;
        exep ob(n1,n2);
        double q= ob.divide();
        if(q!=0&&n2!=0)
        cout<<n1<<" / "<<n2<<" = "<<q<<endl;
        cout<<"Enter 1 to Continue,\nEnter 2 to Exit : ";
        cin>>choice1;
        cout<<endl<<endl;
    }
    cout<<"Thank You!"<<endl;
    return 0;
}
         