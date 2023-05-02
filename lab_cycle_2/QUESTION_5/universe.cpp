#include<iostream>

#include<iomanip>

using namespace std;
class Star {
  protected: long Planets_around_Star,
  Total_Planets_around_Star;
  public: Star() {}
  Star(long n1) {
    Planets_around_Star = n1;
  }
  void display() {
    cout << left << setw(40) << "The total number of Planets around  stars are :" << right << setw(5) << Total_Planets_around_Star << endl;
  }
};
class BlackHole {
  protected: long Planets_around_BlackHole,
  Total_Planets_around_BlackHole;
  public: BlackHole() {}
  BlackHole(long n2) {
    Planets_around_BlackHole = n2;
  }
  void display() {
    cout << left << setw(40) << "The total number of Planets around BlackHoles are :" << right << setw(5) << Total_Planets_around_BlackHole << endl;
  }
};
class Galaxy: public Star, public BlackHole {
  protected: long noofStars;
  long noofBlackHoles;
  public: Galaxy() {}
  Galaxy(long n3, long n4, long n2, long n1): Star(n1),
  BlackHole(n2) {
    noofStars = n3;
    noofBlackHoles = n4;
  }
  void display() {
    cout << left << setw(40) << "The number of Stars in the Galaxy is:" << right << setw(5) << noofStars << endl;
    cout << left << setw(40) << "The number of Black Holes in the Galaxy is:" << right << setw(5) << noofBlackHoles << endl;
  }
};
class Universe: public Galaxy {
  protected: long noofGalaxies;
  public: Universe() {}
  Universe(long n5, long n4, long n3, long n2, long n1): Galaxy(n3, n4, n2, n1) {
    noofGalaxies = n5;
  }
  void display() {
    cout << left << setw(40) << "The number of Galaxies in the Universe is:" << right << setw(5) << noofGalaxies << endl;
    Galaxy::display();
    BlackHole::display();
    Star::display();
  }
  void calculate() {
    Total_Planets_around_BlackHole = noofGalaxies * noofBlackHoles * Planets_around_BlackHole;
    Total_Planets_around_Star = noofGalaxies * noofStars * Planets_around_Star;
  }
};
int main() {
  int option1;
  cout << "Enter 1 to Start,2 or any other number to Exit : ";
  cin >> option1;
  if (option1 == 1) {
    long n1, n2, n3, n4, n5;
    cout << "Enter the number of Planets around the Star : ";
    cin >> n1;
    cout << "Enter the number of Planets around the Black Hole : ";
    cin >> n2;
    cout << "Enter the number of Stars in the Galaxy : ";
    cin >> n3;
    cout << "Enter the number of Black Holes in the Galaxy : ";
    cin >> n4;
    cout << "Enter the number of Galaxies in the Universe : ";
    cin >> n5;
    cout << endl << endl;
    Universe U(n5, n4, n3, n2, n1);
    cout << "Do you want to display it?" << endl;
    int option2;
    cout << "Enter 1 to Display,2 or any other number to Exit : ";
    cin >> option2;
    if (option2 == 1) {
      U.calculate();
      U.display();
      cout << endl << endl;
    } else {
      cout << endl << "Thank You" << endl;
      return 0;
    }
  }
  cout << "Thank You" << endl;
  return 0;
}