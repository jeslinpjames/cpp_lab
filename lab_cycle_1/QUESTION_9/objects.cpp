#include<iostream>

using namespace std;
class objects {
  private: static int count;
  public: objects() {
    count++;
  }
  void showcount() {
    cout << "Number of objects = " << count << endl;
  }
};
int objects::count = 0;
int main() {
  int choice = 1;
  while (choice == 1) {
    cout << "Enter 1 to create an object." << endl;
    cout << "Enter 2 or any other number to exit." << endl;
    cout << "Enter your choice:";
    cin >> choice;
    if (choice != 1)
      break;
    objects * ob = new objects;
    ob -> showcount();
    delete ob;
  }
  cout << "Thank You!" << endl;
  return (0);
}