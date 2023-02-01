#include<iostream>
using namespace std;
class time
{
    private:
    int seconds,minutes,hour;
    public:
    time(){
        seconds=0;
        minutes=0;
        hour =0;
    }
    void accept();
    void display();
    void sum(time,time);
};

void time::accept()
{
    cout<<"Enter time in hours, minutes, seconds : ";
    cin>>hour;
    cout<<"-";
    cin>>minutes;
    cout<<"-";
    cin>>seconds;
}
void time::sum(time a,time b)
{
    seconds=a.seconds+b.seconds;
    minutes=seconds/60;
    seconds=seconds%60;
    minutes=minutes+a.minutes+b.minutes;
    hour= minutes/60;
    minutes = minutes%60;
    hour= hour+a.hour+b.hour;
}
void time::display()
{
    cout<<hour<<" hours "<<minutes<<" minutes "<<seconds<<" seconds."<<endl;
}
int main()
{
    time t1,t2,t3;
    cout<<"Enter the frist time : ";
    t1.accept();
    cout<<"Enter the second time : ";
    t2.accept();
    t3.sum(t1,t2);
    cout<<"The sum of both the time is : "<<endl;
    t3.display();
    return 0;
}