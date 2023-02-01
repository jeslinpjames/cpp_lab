#include<iostream>
using namespace std;

class Matrix
{
    private:
    int **a;
    int r,c;
    public:
    Matrix() {}
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
            delete [] a[i];
        delete [] a;
        cout<<"Memory Released"<<endl;
    }
    void display_sum(Matrix a, Matrix b);
    void accept_elements();
};

void Matrix::display_sum(Matrix x, Matrix y)
{
    if (x.r != y.r || x.c != y.c)
    {
        cout<<"Matrices must have the same number of rows and columns."<<endl;
        return;
    }
    Matrix sum(r, c);
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            sum.a[i][j]=x.a[i][j]+y.a[i][j];
        }
    }
    cout<<"The sum of the two matrices is: "<<endl;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<sum.a[i][j]<<" ";
        }
        cout<<endl<<" ";
    }
}

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

int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>r>>c;
    Matrix ob1(r,c);
    cout<<"Enter the values of the first matrix: "<<endl;
    ob1.accept_elements();
    Matrix ob2(r,c);
    cout<<"Enter the values of the second matrix: "<<endl;
    ob2.accept_elements();
    Matrix ob3;
    ob3.display_sum(ob1, ob2);
    return 0;
}
