#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class Duration{
    mutable double seconds;
    public:
    Duration() : seconds(0){}
    Duration(double s) : seconds(s) {}

    string to_string () const;
    Duration operator + (Duration);

};