#include<iostream>

using namespace std;
class Vector {
  private: float i_comp,
  j_comp,
  k_comp;
  public: friend float operator * (Vector & a, Vector & b);
  friend istream & operator >> (istream & in, Vector & a);
  friend ostream & operator << (ostream & out, Vector & a);
};
float operator * (Vector & a, Vector & b) {
  return ((b.i_comp * a.i_comp) + (b.j_comp * a.j_comp) + (b.k_comp * a.k_comp));
}
istream & operator >> (istream & in, Vector & a) {
  cout << "Enter the component of i : ";
  in >> a.i_comp;
  cout << "Enter the component of j : ";
  in >> a.j_comp;
  cout << "Enter the component of k : ";
  in >> a.k_comp;
  return in;
}
ostream & operator << (ostream & out, Vector & a) {
  if ((a.j_comp >= 0) && (a.k_comp >= 0))
    out << a.i_comp << "i + " << a.j_comp << "j + " << a.k_comp << "k " << endl;
  else {
    if ((a.j_comp < 0) && (a.k_comp < 0))
      out << a.i_comp << "i " << a.j_comp << "j " << a.k_comp << "k " << endl;
    else if (a.j_comp < 0)
      out << a.i_comp << "i " << a.j_comp << "j + " << a.k_comp << "k " << endl;
    else
      out << a.i_comp << "i + " << a.j_comp << "j " << a.k_comp << "k " << endl;
  }
  return out;
}
int main() {
  int choice1;
  do {
    cout << "Enter 1 to start," << endl;
    cout << "Enter 2 or any other number to quit. " << endl;
    cout << "Enter your choice :";
    cin >> choice1;
    if (choice1 != 1) {
      break;
    }
    cout << "Enter values of Vector 1 :" << endl;
    Vector v1;
    cin >> v1;
    cout << "Enter values of Vector 2 :" << endl;
    Vector v2;
    cin >> v2;
    cout << "\nVector 1 is : " << v1 << endl;
    cout << "Vector 2 is : " << v2 << endl;
    int choice2 = 0;
    cout << "Enter 1 to find the dot product of these 2 vectors." << endl;
    cout << "Enter 2 or any other number to exit." << endl;
    cout << "Enter your choice : ";
    cin >> choice2;
    if (choice2 == 1) {
      float product;
      product = v1 * v2;
      cout << "The dot product is : " << product << endl;
    } else {
      break;
    }
  } while (choice1 == 1);
  cout << "Exiting..." << endl;
  return 0;
}