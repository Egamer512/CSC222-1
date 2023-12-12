#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Point {


    public:
    double x, y;
    Point (){
        x = 0;
        y = 0;
    };
    Point (double x_position, double y_position){
        x = x_position;
        y = y_position;
    };
    friend ostream& operator<<(ostream& os, const Point& p);
    Point operator + (const Point& p);
    void operator = (const Point& p);
    Point operator - (const Point& p);
    void operator += (const Point& p);
    void operator -= (const Point& p);
    Point operator * (double num);
    Point operator * (const Point& p);
    bool operator == (const Point& p);
    string to_string();
    double distance(Point p);

};
Point operator * (double num, Point& p);

