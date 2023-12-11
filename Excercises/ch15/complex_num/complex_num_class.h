#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
using namespace std;
enum Flag {POLAR};
class Complex{
        double real, imag;
        double mag, theta;
        bool polar;
        void calculate_polar();
        void calculate_cartesian();
    public:
        Complex(){
            real = 0; imag = 0;
            polar = false;
        };
        Complex(double r, double i){
            real = r; imag = i;
            polar = false;
        };
        Complex(double m, double t, Flag) {
        mag = m; theta = t;
        polar = true;
        };
        double get_real();
        double get_imag();
        double get_mag();
        double get_theta();
        string str_cartesian();
        string str_polar();
        Complex operator + (const Complex& c);
        Complex operator - (const Complex& c);
        Complex operator * (const Complex& c);
        Complex operator/(const Complex& c);
        void operator += (const Complex& c);
        friend ostream& operator<<(ostream& os, Complex& c);
};