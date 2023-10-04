#include <iostream>
using namespace std;
struct Point {
    double x, y;
};
struct Rectangle {
    Point corner;
    double width, height;
};
Point lower_Right (Rectangle box);
int findArea (Rectangle box);


int main(){
    Point corner = {0.0, 0.0};
    Rectangle box = {corner, 100.0, 200.0};
    cout << "Lower Right: {"<< lower_Right(box).x << "," << lower_Right(box).y << "}" << endl;
    cout <<"Area of the Rectangle: "<< findArea(box) << endl;
}
Point lower_Right(Rectangle box){
    Point lower_r = {box.corner.x + box.width, box.corner.y};
    return lower_r;
}

int findArea (Rectangle box) {
    int area = box.width * box.height;
    return area; 
}