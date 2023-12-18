#include "Duration.h"

string Duration::to_string ()const{
    string T = "P";
    if (int(sec) <= 0){
        T.append("T0S");
        return T;
    }
    if (sec >=  86400){
        T.append(std::to_string(int(sec/86400)) + "D");
        sec = int(sec) % 86400;
    }
    T.append("T");
    if (sec >= 3600){
        T.append(std::to_string(int(sec/3600)) + "H");
        sec = int(sec) % 3600;
    }
    if (sec >= 60){
        T.append(std::to_string(int(sec/60))+ "M");
        sec = int(sec) % 60;
    }
    if (sec > 0){
        T.append(std::to_string(int(sec)) + "S");
    }
    return T;
}
int  Duration::days(void){
    if (sec >=  86400){
        return(int(sec) / 86400);
    }
    return 0;
}

int  Duration::hours(void){
    int h = hour();
    if (h >= 3600){
        return(h/3600);
    }
    return 0;
}
int  Duration::minutes(void){
    int m = minute();
    if (m >= 60){
        return(m/60);
    }
    return 0;
}
int  Duration::seconds(void){
    int s = seco();
    if (s > 0){
        return(s);
    }
    return 0;
}
int Duration::hour(void){
    return (int(sec) % 86400);
}
int Duration::minute(void){
    return((hour()) % 3600);
}
int Duration::seco(void){
    return((minute()) % 60);
}

Duration Duration::operator + (Duration T){
    Duration Time(sec + T.sec);
    return Time;
}
Duration Duration::operator - (Duration T){
    Duration Time(sec - T.sec);
    return Time;
}