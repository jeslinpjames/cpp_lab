#include<iostream>
using namespace std;
class Matrix
{
    private:
    int **a;
    int r,c;
    public:
    Matrix(){}
    Matrix(int x,int y)
    {
        cout<<"Array initialized by constructor."<<endl;
        r = x;
        c = y;
        if((r>0)&&(c>0))
        {
            a = new int *[r];
            for (int i=0; i<r; i++)
            {
                a[i]= new int [c];
            }
        }
    }
    ~Matrix()
    {
        for (int i=0; i<r; i++)
        {
            delete  a[i];
        }
        delete []a;
        cout<<"Memory Released"<<endl;
    }
    void accept_elements();
    void display();
};

void Matrix::accept_elements()
{
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int r1,c1;
    cout<<"Enter the number of rows and columns of the matrix : ";
    cin>>r1>>c1;
    Matrix ob(r1,c1);
    cout<<"Enter the Elememts : "<<endl;
    ob.accept_elements();
    cout<<"The matrix that you have entered is : "<<endl;
    ob.display();
    return 0;
}
                                 