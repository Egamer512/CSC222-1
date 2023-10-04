#include <iostream>
using namespace std;

void will_swap_with_pointers(char* a, char* b){

    int temp = *a;
    *a = *b;
    *b = temp;
    
}
void wont_swap(char a, char b){

    char temp = a;
    a = b;
    b = temp;
}

void will_swap(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}

int main(){
    char x = 'x';
    char y = 'y';

    cout << "x: " << x << "  y: " << y << endl;
    cout << "address of x: " << long(&x) << endl;
    cout << "address of y: " << long(&y) << endl;

    wont_swap(x, y);
    cout << "won't_swap" << endl;
    cout << "x: " << x << "  y: " << y << endl;

    will_swap(x, y);
    cout << "will_swap" << endl;
    cout << "x: " << x << "  y: " << y << endl;
    
    cout << "will_swap_with_pointers" << endl;
    char* px = &x;
    char* py = &y;
    will_swap_with_pointers(px, py);
    cout << "x: " << x << "  y: " << y << endl;
    return 0;
}
