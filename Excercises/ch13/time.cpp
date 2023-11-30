#include <iostream>
#include <string>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
struct Time {
    int hour, minute;
    double second;
    Time(double secs);
    string to_string();

};
string Time::to_string()
{
    string s = "a";
    string result = s + std::to_string(49);

    return result;
}
Time::Time(double secs)
{
    hour = int(secs / 3600.0);
    secs -= hour * 3600.0;
    minute = int(secs / 60.0);
    secs -= minute * 60;
    second = secs;
}
int main() {
    Time t(500000);
    cout << t.to_string() << endl;

}