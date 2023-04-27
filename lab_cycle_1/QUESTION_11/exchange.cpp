#include<iostream>

using namespace std;
class cl2;
class cl1 {
  private: int value_1;
  public: void input() {
    cout << "Enter a value for the first class : ";
    cin >> value_1;
  }
  void display() {
    cout << "The value of the data member in the first class is " << value_1 << endl;
  }
  friend void exchange(cl1 & a, cl2 & b);
};
class cl2 {
  private: int value_2;
  public: void input() {
    cout << "Enter a value for the second class : ";
    cin >> value_2;
  }
  void display() {
    cout << "The value of the data member in the second class is " << value_2 << endl;
  }
  friend void exchange(cl1 & a, cl2 & b);
};
void exchange(cl1 & a, cl2 & b) {
  int temp = a.value_1;
  a.value_1 = b.value_2;
  b.value_2 = temp;
}
int main() {
  cl1 a;
  cl2 b;
  a.input();
  b.input();
  cout << "Values of data members before exchanging : " << endl;
  a.display();
  b.display();
  exchange(a, b);
  cout << "Values of data members after exchanging : " << endl;
  a.display();
  b.display();
  return 0;
}