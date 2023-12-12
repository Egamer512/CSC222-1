#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class Duration{
    double sec;
    char duration[6] = {'S', 'M', 'H', 'D', 'M', 'Y'};
    public:
    Duration(){
        sec = 0; 
    };

    string to_string (){
        string s;
        for(int i = 0; i <= 6; i++){
            if (sec >= 60){
                s.append(std::to_string(int(sec)%60) + duration[i]);
                return str;
            } 
        }

        return 0;
    };
};
string string(int i, int t){
    t = sec / 60;
    if(t >= 0){
        return ;
    }
    string(i);
} 
string string(0){
    return "a";
}