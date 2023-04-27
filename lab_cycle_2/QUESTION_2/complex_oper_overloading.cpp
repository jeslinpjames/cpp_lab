#include<iostream>

using namespace std;
class complex {
  private: float real,
  imag;
  public: void input() {
    cout << "Enter the real part : ";
    cin >> real;
    try {
      if (cin.fail()) {
        throw runtime_error("Invalid Input!");
      }
    } catch (runtime_error & e) {
      cerr << e.what() << endl;
    }
    cout << "Enter the imaginary : ";
    cin >> imag;
    try {
      if (cin.fail()) {
        throw runtime_error("Invalid Input!");
      }
    } catch (runtime_error & e) {
      cerr << e.what() << endl;
    }
  }
  void display() {
    cout << real;
    if (imag < 0) {
      cout << imag << "i" << endl;
    } else
      cout << "+" << imag << "i" << endl;
  }
  friend complex operator + (complex a, complex b);
  friend complex operator * (complex a, complex b);
};
complex operator + (complex a, complex b) {
  complex c;
  c.real = a.real + b.real;
  c.imag = a.imag + b.imag;
  return c;
}
complex operator * (complex a, complex b) {
  complex c;
  c.real = (a.real * b.real) - (a.imag * b.imag);
  c.imag = (a.real * b.imag) + (b.real * a.imag);
  return c;
}
int main() {
  int choice;
  complex a, b, c, d;
  do {
    cout << "For the first Complex Number :\n";
    a.input();
    cout << "For the second Complex Number :\n";
    b.input();
    cout << "The first complex number is : ";
    a.display();
    cout << "The second complex number is :";
    b.display();
    int choice2 = 1;
    while (choice2 == 1) {
      cout << "Enter 1 to find the sum of the two complex numbers. " << endl;
      cout << "Enter 2 to find the product of the two complex numbers." << endl;
      cout << "Enter your choice :";
      int choice1;
      cin >> choice1;
      switch (choice1) {
      case 1:
        c = a + b;
        cout << "The sum of the two complex number is : ";
        c.display();
        break;
      case 2:
        d = a * b;
        cout << "The product of the two complex numbers is : ";
        d.display();
        break;
      default:
        cout << "Wrong Choice!" << endl;
      }
      cout << endl << endl;
      cout << "Enter 1 to continue operations " << endl;
      cout << "Enter 2 to exit or to enter another complex number" << endl;
      cin >> choice2;
      cout << endl;
    }

    cout << endl << endl;
    cout << "To continue and enter new complex number enter 1." << endl;
    cout << "To exit enter any number." << endl;
    cout << "Enter your choice : ";
    cin >> choice;
  } while (choice == 1);
  cout << "Thank You!" << endl;
  return 0;
}