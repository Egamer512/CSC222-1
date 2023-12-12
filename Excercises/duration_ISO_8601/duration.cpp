#include "Duration.h"

string Duration::to_string ()const{
    string T = "PT";
    if (seconds >= 3600){
        T.append(std::to_string(int(seconds/3600)) + "H");
        seconds = int(seconds) % 3600;
    }
    if (seconds >= 60){
        T.append(std::to_string(int(seconds/60))+ "M");
        seconds = int(seconds) % 60;
    }
    T.append(std::to_string(int(seconds)) + "S");
    return T;
}
Duration Duration::to_string ()const{
