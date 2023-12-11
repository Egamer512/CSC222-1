#include "complex_num_class.h"
double Complex::get_real()
{
    return real;
}

double Complex::get_imag()
{
    return imag;
}
double Complex::get_mag(){
    if (polar == false) calculate_polar();
    return mag;
}
double Complex::get_theta(){
    if (polar == false) calculate_polar();
    return theta;
}
void Complex::calculate_polar(){
    mag = sqrt(pow(real,2) + pow(imag,2));
    theta = atan(imag / real);
    polar = true;
}
void Complex::calculate_cartesian(){
    assert(polar == true);
    real = mag * cos(theta);
    imag = mag * sin(theta);
}

string Complex::str_cartesian(){
    return std::to_string(get_real()) + "+" + std::to_string(get_imag()) + "i";
}
string Complex::str_polar(){
    return std::to_string(get_mag()) + "e^" + std::to_string(get_theta()) + "i";
}
void Complex::operator += (const Complex& c){
    real += c.real;
    imag += c.imag;
    polar = false;
}
Complex Complex::operator + (const Complex& c){
    return Complex(real + c.real, imag + c.imag);
}
Complex Complex::operator - (const Complex& c){
    return Complex(real - c.real, imag - c.imag);
}

ostream& operator<<(ostream& os, Complex& c){
    string str_complex;
    if(c.polar = true){
        str_complex = c.str_polar();
    }
    else{
        str_complex = c.str_cartesian();
    }
    os << str_complex;
    return os;
}
Complex Complex::operator * (const Complex& c){
    double new_real = (real*c.real - imag*c.imag);
    double new_imag = (imag*c.real + real*c.imag);
    return Complex(new_real, new_imag);
}

Complex Complex::operator/(const Complex& c){
    double base = pow(c.real,2) + pow(c.imag,2);
    double new_real = ((real*c.real + imag*c.imag)/base);
    double new_imag = ((imag*c.real - real*c.imag)/base);
    return(Complex(new_real, new_imag));
}
