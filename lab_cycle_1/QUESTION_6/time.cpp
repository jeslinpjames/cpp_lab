#include<iostream>

using namespace std;
class Time {
  private: int seconds,
  minutes,
  hour;
  public: Time() {
    seconds = 0;
    minutes = 0;
    hour = 0;
  }
  void accept();
  void display();
  void sum(Time, Time);
};
int main() {
  Time t1, t2, t3;
  cout << "Enter the frist time details : ";
  t1.accept();
  cout << "Enter the second time details : ";
  t2.accept();
  t3.sum(t1, t2);
  cout << "The sum of both the time is : " << endl;
  t3.display();
  return 0;
}
void Time::accept() {
  cout << "\n Enter time. ";
  cout << "\n Hours : ";
  cin >> hour;
  cout << "Minutes : ";
  cin >> minutes;
  cout << "Seconds : ";
  cin >> seconds;
}
void Time::sum(Time a, Time b) {
  seconds = a.seconds + b.seconds;
  minutes = seconds / 60;
  seconds = seconds % 60;
  minutes = minutes + a.minutes + b.minutes;
  hour = minutes / 60;
  minutes = minutes % 60;
  hour = hour + a.hour + b.hour;
}
void Time::display() {
  cout << hour << " hours " << minutes << " minutes " << seconds << " seconds." << endl;
}