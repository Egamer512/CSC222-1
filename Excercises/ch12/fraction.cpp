#include <iostream>

using namespace std;

struct Fraction {
    int den;
    int num;
    Fraction (int Denom, int Numer);
    void printfraction();
    void simplify();
    void printf();
};

Fraction::Fraction (int Denom, int Numer){
    den = Denom; num = Numer;
}

void Fraction::simplify(){
    int a = den;
    int b = num;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    den /= a;
    num /= a;
}
void Fraction::printf(){
    simplify();
    cout << den ;
    if (num != 1){
        cout << "/" <<num;
    }
    cout << endl;
}

int main(void){
    Fraction f(12, 6);
    f.printf();
    return 0;
}