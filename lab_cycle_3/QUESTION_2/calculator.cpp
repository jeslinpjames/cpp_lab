#include<iostream>

using namespace std;
template < class T >
  class calculate {
    T num1, num2;
    public:
      calculate() {}
    calculate(T n1, T n2): num1(n1), num2(n2) {}
    void display() {
      cout << " The numbers are " << num1 << " and " << num2 << endl;
    }
    T add() {
      return (num1 + num2);
    }
    T sub() {
      return (num1 - num2);
    }
    T mult() {
      return (num1 * num2);
    }
    T div() {
      try {
        if (num2 == 0)
          throw num2;
        else
          return (num1 / num2);
      } catch (T num2) {
        cout << "Division by zero is not possible!" << endl;
      }
      return (num1 / num2);
    }
  };
int main() {
  int choice1 = 0;
  cout << "Enter 1 to Start,\nEnter 2 or any other number to Exit.\nEnter your chioice : ";
  cin >> choice1;
  while (choice1 == 1) {
    int choice2 = 0;
    cout << "Enter 1 for Integers,\nEnter 2 for decimal numbers,\nEnter your choice : ";
    cin >> choice2;
    int n1, n2;
    double d1, d2;
    int flag = 0;
    if (choice2 == 1) {
      cout << "Enter the first Integer : ";
      cin >> n1;
      cout << "Enter the second Integer : ";
      cin >> n2;
    } else if (choice2 == 2) {
      cout << "Enter the first decimal number : ";
      cin >> d1;
      cout << "Enter the second decimal number : ";
      cin >> d2;
      flag++;
    } else
      cout << "Invalid choice!" << endl;
    calculate < double > calc2(d1, d2);
    calculate < int > calc1(n1, n2);
    int choice3;
    int choice4 = 1;
    do {
      cout << "Enter 1 to find the sum of the 2 numbers,\nEnter 2 to find the difference of the two numbers,\n";
      cout << "Enter 3 to find the product of the two numbers\nEnter 4 to divide the two numbers,\nEnter your choice : ";
      cin >> choice3;
      switch (choice3) {
      case 1:
        if (flag == 0)
          cout << "The sum of the two numbers is : " << calc1.add();
        else
          cout << "The sum of the two numbers is : " << calc2.add();
        break;
      case 2:
        if (flag == 0)
          cout << "The difference of the two numbers is : " << calc1.sub();
        else
          cout << "The difference of the two numbers is : " << calc2.sub();
        break;
      case 3:
        if (flag == 0)
          cout << "The product of the two numbers is : " << calc1.mult();
        else
          cout << "The product of the two numbers is : " << calc2.mult();
        break;
      case 4:
        if (flag == 0)
          cout << "The quotient of the two number is : " << calc1.div();
        else
          cout << "The quotient of the two number is : " << calc2.div();
        break;
      default:
        cout << "Invalid choice!" << endl;
      }
      cout << "\nEnter 1 to continue operations with same numbers,\nEnter 2 or any other number to continue operations with new numbers,\nEnter your choice : ";
      cin >> choice4;
      cout << endl << endl;
    } while (choice4 == 1);
    cout << "Enter 1 to Continue , 2 or any other number to Exit : ";
    cin >> choice1;
    cout << endl << endl << endl;
  }
  cout << "Thank You!" << endl;
  return (0);
}