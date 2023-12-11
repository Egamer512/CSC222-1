#include <iostream>
#include <string>
using namespace std;
class Point {
    double x, y;

    public:
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
};
Point operator * (double num, Point& p);

