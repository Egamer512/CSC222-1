#include <iostream>
#include <cmath>
using namespace std;

struct Time {
    int hour, minute;
    double second;

    Time(int h, int m, double s);
    void print();
    void increment(double secs);
    
    
};
Time::Time(int h, int m, double s)
{
  hour = h; minute = m; second = s;
}

void Time::increment(double secs)
{
    second += secs;
    minute += second / 60;
    second = fmod(second, 60.0);
    hour += minute / 60;
    minute = minute % 60;
}

void Time::print()
{
    increment(0);
    cout << hour << ":" << minute << ":" << second << endl;
}
int main(void){
    Time t(13, 290, 130.0);
    t.print();
}