#include "point.h"

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
