#include<iostream>

using namespace std;
class complex {
  private: float real,
  imaginary;
  public: complex() {}
  complex(int a) {
    real = imaginary = a;
  }
  complex(int a, int b) {
    real = a;
    imaginary = b;
  }
  void sum(complex a, complex b);
  void display() {
    if (imaginary < 0) {
      cout << "The complex number is " << real << "-" << imaginary << "i" << endl;
    } else {
      cout << "The complex number is " << real << "+" << imaginary << "i" << endl;
    }
  }
};
void complex::sum(complex a, complex b) {
  real = a.real + b.real;
  imaginary = a.imaginary + b.imaginary;
}
int main() {
  int r1, r2, i1, i2;
  complex A, B;
  int choice = 1;
  while (choice == 1) {
    cout << "For the first complex number:" << endl;
    cout << "Enter real part:";
    cin >> r1;
    cout << "Enter imaginary part:";
    cin >> i1;
    cout << "For the second complex number:" << endl;
    cout << "Enter real part:";
    cin >> r2;
    cout << "Enter imaginary part:";
    cin >> i2;
    if (r1 == i1) {
      A = complex(r1);
    } else {
      A = complex(r1, i1);
    }
    if (r2 == i2) {
      B = complex(r2);
    } else {
      B = complex(r2, i2);
    }
    cout << "The sum of the 2 complex numbers = ";
    complex C;
    C.sum(A, B);
    C.display();
    cout << "Enter 1 to continue\n";
    cout << "Enter any other number to exit.\n";
    cin >> choice;
  }
  cout << "Exiting..." << endl;
  return 0;
}