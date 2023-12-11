#include <iostream>
#include <string>
using namespace std;

struct Fraction {
    int den;
    int num;
    Fraction (int Denom, int Numer);
    void printfraction();
    void simplify();
    void printf();
    string to_string();
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
string Fraction::to_string(){
    simplify();
    string s = std::to_string(den);
    if (num != 1){
        s  += "/" + std::to_string(num);
    }
    return s;
}
int main(void){
    Fraction f(14, 6);
    cout << f.to_string() << endl;
    return 0;
}