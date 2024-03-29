#include<iostream>

using namespace std;
class Mat {
  private: int ** a;
  int r,
  c;
  public: Mat() {}
  Mat(int x, int y) {
    r = x;
    c = y;
    if ((r > 0) && (c > 0)) {
      a = new int * [r];
      for (int i = 0; i < r; i++) {
        a[i] = new int[c];
      }
    }
  }
  ~Mat() {
    for (int i = 0; i < r; i++)
      delete a[i];
    delete a;
  }
  void matrix_add(Mat & x, Mat & y);
  void matrix_transpose(Mat & x);
  void matrix_mult(Mat & x, Mat & y);
  void accept_elements(void);
  int matrix_trace(void);
  void display();
};
void Mat::matrix_add(Mat & x, Mat & y) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      a[i][j] += x.a[i][j] + y.a[i][j];
    }
  }
}
void Mat::matrix_transpose(Mat & x) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      a[i][j] = x.a[j][i];
    }
    cout << endl;
  }
  display();
}
void Mat::matrix_mult(Mat & x, Mat & y) {
  for (int i = 0; i < x.r; i++) {
    for (int j = 0; j < y.r; j++) {
      a[i][j] = 0;
      for (int k = 0; k < x.c; k++) {
        a[i][j] += x.a[i][k] * y.a[k][j];
      }
    }
  }
}
int Mat::matrix_trace(void) {
  int sum = 0;
  for (int i = 0; i < r; i++) {
    sum = sum + a[i][i];
  }
  return sum;
}
void Mat::accept_elements() {
  for (int i = 0; i < r; i++) {
    cout << "Enter " << c << " elements of " << i + 1 << " row : ";
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }
}
void Mat::display() {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  int r1, c1, r2, c2;
  int choice;
  cout << "Enter the number of rows and columns of the first matrix : ";
  cin >> r1 >> c1;
  Mat ob1(r1, c1);
  cout << "Enter the values of the first matrix: " << endl;
  ob1.accept_elements();
  cout << "Enter the number of rows and colums of the second matrix : ";
  cin >> r2 >> c2;
  Mat ob2(r2, c2);
  cout << "Enter the values of the second matrix: " << endl;
  ob2.accept_elements();
  do {
    cout << "\nEnter 1 to add the two matrices\n";
    cout << "Enter 2 to find the product of the two matrices\n";
    cout << "Enter 3 to find the transpose of the two matrices\n";
    cout << "Enter 4 to find the trace of the two matrices\n";
    cout << "Enter 5 to Exit.\n";
    cin >> choice;
    if (choice == 1) {
      if (r1 != r2 || c1 != c2) {
        cout << "Matrices must have the same number of rows and columns." << endl;
      } else {
        cout << "\nThe sum of the two matrices is: " << endl;
        Mat ob3(r1, c1);
        ob3.matrix_add(ob1, ob2);
        ob3.display();
      }
    } else if (choice == 2) {
      if (c1 == r2) {
        Mat ob4(r1, c2);
        ob4.matrix_mult(ob1, ob2);
        cout << "\nThe Product of the two matrices is : " << endl;
        ob4.display();
      } else {
        cout << "Multiplication not possible because order is not matching." << endl;
      }
    } else if (choice == 3) {
      cout << "The Transpose of the First Matrix : ";
      Mat obj1(c1, r1);
      obj1.matrix_transpose(ob1);
      cout << "\nThe Transpose of the Second Matrix : ";
      Mat obj2(c2, r2);
      obj2.matrix_transpose(ob2);
    } else if (choice == 4) {
      int trace1 = ob1.matrix_trace();
      cout << "The Trace of the First Matrix : " << trace1 << endl;
      int trace2 = ob2.matrix_trace();
      cout << "\nThe Trace of the Second Matrix : " << trace2 << endl;
    } else if (choice == 5) {
      cout << "Exiting..." << endl;
    } else {
      cout << "Wrong choice!\n";
    }
  }
  while (choice != 5);

  return 0;
}