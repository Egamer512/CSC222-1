#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

class Time {
    int hour, minute;
    double second;
    public:
        Time(int h, int m, double s);
        Time(double s);
        friend ostream& operator <<(ostream& os, Time& t);
        void increment(double secs);
        Time operator + (const Time& t);
        Time operator - (const Time& t);

        void simplify();
        void operator += (const Time& t);
        string to_string();
};