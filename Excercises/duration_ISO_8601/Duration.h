#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class Duration{
    mutable double sec;
    int hour(void);
    int minute(void);
    int seco(void);
    public:
    Duration() : sec(0){}
    Duration(double s) : sec(s) {}

    int days(void);
    int hours(void);
    int minutes(void);
    int seconds(void);


    string to_string () const;
    Duration operator + (Duration T);
    Duration operator - (Duration T);
};