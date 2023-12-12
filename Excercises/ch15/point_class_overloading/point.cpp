#include "Point.h"

ostream& operator<<(ostream& os, const Point& p){
    os << "(" << p.x << "," << p.y << ")";
    return os;
}
Point Point::operator + (const Point& p){
    return Point(x + p.x, y + p.y);
}
Point Point::operator - (const Point& p){
    return Point(x - p.x, y - p.y);
}
void Point::operator += (const Point& p){
    x += p.x;
    y += p.y;  
}
void Point::operator -= (const Point& p){
    x -= p.x;
    y -= p.y;  
}
void Point::operator = (const Point& p){
    x = p.x;
    y = p.y;  
}
bool Point::operator == (const Point& p){
    if (x == p.x && y == p.y ){
        return true;
    } 
    else{
        return false;
    }
}
Point Point::operator * (double num){
    return Point(x * num, y * num);  
}
Point Point::operator * (const Point& p){
    return Point(x * p.x, y * p.y);  
}
Point operator * (double num, Point& p){ 
    return p * num;  

}
string Point::to_string(){
    string s = "(" + std::to_string(int(x)) + ", " + std::to_string(int(y)) +")";
    return s;
}

double Point::distance(Point p){
    double new_x, new_y;
    if (p.x >= x){
        new_x = p.x - x;
    }
    else {
        new_x = x - p.x;
    }
    if (p.y >= y){
        new_y = p.y - y;
    }
    else {
        new_y = y - p.y;
    }
    return sqrt(pow(new_x, 2) + pow(new_y, 2));
}