#include<iostream>

#include<cstring>

using namespace std;
class strings {
  private: char * str;
  int length;
  public: strings() {
    length = 0;
    str = new char[length + 1];
  }
  strings(const char * s) {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
  }
  void concatinate(strings a, strings b);
  void compare(strings a, strings b);
  void display_length() {
    cout << length << endl;
  }
};
void strings::concatinate(strings a, strings b) {
  length = a.length + b.length;
  delete str;
  str = new char[length + 1];
  strcpy(str, a.str);
  strcat(str, b.str);
  cout << str << endl;
}
void strings::compare(strings a, strings b) {
  if (a.length > b.length) {
    cout << a.str << " is the larger string." << endl;
  } else if (b.length > a.length) {
    cout << b.str << " is the larger string." << endl;
  } else
    cout << "Both strings are of equal length." << endl;
}
int main() {
  string x, y;
  cout << "Enter the first string:";
  cin >> x;
  cout << "Enter the second string:";
  cin >> y;
  const char * s1 = x.c_str();
  const char * s2 = y.c_str();
  strings a(s1);
  strings b(s2);
  strings c;
  int choice;
  do {
    cout << "Enter 1 to Compare both the strings,\n";
    cout << "Enter 2 to Concatinate both the strings,\n";
    cout << "Enter 3 to find the length of the strings\n";
    cout << "Enter 4 to Exit\n";
    cin >> choice;
    switch (choice) {
    case 1:
      cout << "The result of the comparission : " << endl;
      c.compare(a, b);
      cout << endl;
      break;
    case 2:
      cout << "Strings after concatination : ";
      c.concatinate(a, b);
      cout << endl;
      break;
    case 3:
      cout << "The length of the first string is : ";
      a.display_length();
      cout << "The length of the second string is : ";
      b.display_length();
      cout << "The length of the concatinated string is : ";
      c.display_length();
      cout << endl;
      break;
    case 4:
      cout << "Exiting..." << endl;
      break;
    default:
      cout << "Wrong choice!" << endl;
    }
  } while (choice != 4);
  return 0;
}