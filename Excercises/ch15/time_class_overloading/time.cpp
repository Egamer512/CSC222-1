#include "time.h"

Time::Time(int h, int m, double s){
  hour = h; minute = m; second = s;
  simplify(); 
}

Time::Time(double s){
  second = s;
  simplify();
}

void Time::simplify(){
    minute += second / 60;
    second = fmod(second, 60.0);
    hour += minute / 60;
    minute = minute % 60;
}
void Time::increment(double secs){
    second += secs;
    minute += second / 60;
    second = fmod(second, 60.0);
    hour += minute / 60;
    minute = minute % 60;
}
Time Time::operator + (const Time& t){
    int new_hour = hour + t.hour;
    double new_min = minute + t.minute;
    double new_sec = second + t.second;
    simplify();
    Time new_time(new_hour, new_min, new_sec);
    return new_time; 
}

Time Time::operator - (const Time& t){
    int new_hour = hour - t.hour;
    double new_min = minute - t.minute;
    double new_sec = second - t.second;
    simplify();
    Time new_time(new_hour, new_min, new_sec);
    return new_time; 
}
void Time::operator += (const Time& t){
    hour += t.hour;
    minute += t.minute;
    second += t.second;
    simplify(); 
}
string Time::to_string(){
    string str_min = std::to_string(minute);
    string str_sec = std::to_string(int(second));
    if(minute < 10){
        str_min = "0" + str_min; 
    }
    if(second < 10){
        str_sec = "0" + str_sec; 
    }
    string str_time = std::to_string(hour) + ":" + str_min + ":" + str_sec;
    return str_time;
}
ostream& operator <<(ostream& os, Time& t){
    os << t.to_string();
    return os;
}