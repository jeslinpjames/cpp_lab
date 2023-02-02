#include<iostream>
using namespace std;
class Mat
{
    private:
    int **a;
    int r,c;
    public:
    Mat(){}
    Mat(int x,int y)
    {
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
    ~Mat()
    {
        for (int i=0; i<r; i++)
            delete  a[i];
        delete  a;
    }
    void matrix_add(Mat a, Mat b);
    void matrix_transpose(void);
    void matrix_mult(Mat a, Mat b);
    void matrix_determinant(void);
    void accept_elements(vid);
    void display(void);
};

void Mat::matrix_add(Mat x, Mat y)
{ 
   for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            a[i][j]=x.a[i][j]+y.a[i][j];
        }
    }
}
void Mat::matrix_transpose(void)
{ 
   for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
void Mat::matrix_mult(Mat x, Mat y)
{ 
   for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            a[i][j]=0;
            for(int k=0;k<r;k++)
            {
                a[i][j]=a[i][j]+x.a[i][k]*y.a[k][j];
            }
        }
    }
}






void Mat::accept_elements()
{
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
}
void Mat::display()
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
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows and columns of the first matrix : "<<endl;
    cin>>r1>>c1;
    Mat ob1(r1,c1);
    cout<<"Enter the values of the first matrix: "<<endl;
    ob1.accept_elements();
    cout<<"Enter the number of rows and colums of the second matrix : "<<endl;
    cin>>r2>>c2;
    Mat ob2(r2,c2);
    cout<<"Enter the values of the second matrix: "<<endl;
    ob2.accept_elements();
    Mat ob3(r1,c1);
     if (r1 != r2 || c1 != c2)
    {
        cout<<"Matrices must have the same number of rows and columns."<<endl;
    }
    else
    {
        ob3.sum(ob1, ob2);
        cout<<"The sum of the two matrices is: "<<endl;
        ob3.display();
    }
    return 0;
}
