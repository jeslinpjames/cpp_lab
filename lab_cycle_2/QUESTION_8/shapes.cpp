#include<iostream>

using namespace std;
class Shapes {
  protected: float area;
  public: virtual void find_area() = 0;
  virtual void input() = 0;
};
class Circle: public Shapes {
  private: float radius;
  public: void input() {
    cout << "Enter the raius of the Circle : ";
    cin >> radius;
  }
  void find_area() {
    area = (22.0 / 7.0) * radius * radius;
    cout << "The area of the Circle is : " << area << endl;
  }
};
class Square: public Shapes {
  private: float side;
  public: void input() {
    cout << "Enter the side of the Square : ";
    cin >> side;
  }
  void find_area() {
    area = side * side;
    cout << "The area of the Square is : " << area << endl;
  }
};
class Ellipse: public Shapes {
  private: float major_axis,
  minor_axis;
  public: void input() {
    cout << "Enter the value of the Major Axis of the Ellipse : ";
    cin >> major_axis;
    cout << "Enter the value of the Minor Axis of the Ellipse : ";
    cin >> minor_axis;
  }
  void find_area() {
    area = (22.0 / 7.0) * major_axis * minor_axis;
    cout << "The area of the Ellipse is : " << area << endl;
  }
};
class Rectangle: public Shapes {
  private: float length,
  breadth;
  public: void input() {
    cout << "Enter the Length of the Rectangle : ";
    cin >> length;
    cout << "Enter the Breadth of the Rectangle : ";
    cin >> breadth;
  }
  void find_area() {
    area = length * breadth;
    cout << "The area of the Rectangle is : " << area << endl;
  }
};
int main() {
  int option1 = 0;
  cout << "Enter 1 to Start, 2 or any other number to Exit : ";
  cin >> option1;
  while (option1 == 1) {
    int choice;
    Shapes * pointer;
    cout << "Enter 1 for area of Circle." << endl;
    cout << "Enter 2 for area of Square." << endl;
    cout << "Enter 3 for area of Ellipse." << endl;
    cout << "Enter 4 for area of Rectangle." << endl;
    cout << "Please enter your choice : ";
    cin >> choice;
    switch (choice) {
    case 1:
      pointer = new Circle;
      pointer -> input();
      pointer -> find_area();
      break;
    case 2:
      pointer = new Square;
      pointer -> input();
      pointer -> find_area();
      break;
    case 3:
      pointer = new Ellipse;
      pointer -> input();
      pointer -> find_area();
      break;
    case 4:
      pointer = new Rectangle;
      pointer -> input();
      pointer -> find_area();
      break;
    default:
      cout << "Wrong choice!" << endl;
      break;
    }
    cout << "Enter 1 to continue, 2 or any other number to Exit : ";
    cin >> option1;
  }
  cout << "Thank You!" << endl;
  return (0);
}