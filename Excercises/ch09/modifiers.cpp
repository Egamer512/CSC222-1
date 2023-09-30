#include <iostream>
using namespace std;
struct Time {
    int hour, minute;
    double second;
};
void convert(Time& time);
void increment(Time& time, double secs);
int main(){

	Time time = {9, 14, 30.0};
	cout << "hours: "<<time.hour << " minutes:" << time.minute << " seconds:" << time.second << endl;
	increment(time, 24001);
	cout << "hours:"<<time.hour << " minutes" << time.minute << " seconds:" << time.second << endl;
	return 0;
}
void convert(Time& time){
	while (time.second >= 60.0) {
        	time.second -= 60.0;
        	time.minute += 1;
   	}
   	while (time.minute >= 60) {
       		time.minute -= 60;
        	time.hour += 1;
	}
}

void increment(Time& time, double secs){
       time.second += secs;
       convert(time);
}
