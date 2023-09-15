#include <iostream>
#include <string.h>
using namespace std;
void overloaded_function(int x) {
	cout << "Called overloaded_function with int: " << x << endl;
}

void overloaded_function(double x) {
	cout << "Called overloaded_function with double: " << x << endl;
}

void overloaded_function(char x) {
    	cout << "Called overloaded_function with char: " << x << endl;
}

void overloaded_function(const char* x) {
    	cout << "Called overloaded_function with string: " << x << endl;
}

void overloaded_function(bool x) {
    	cout << "Called overloaded_function with bool: " << (x ? "true":"false") << std::endl;
}

int main() {
	overloaded_function(42);
    	overloaded_function(3.14);
    	overloaded_function('a');
    	overloaded_function("Hello, World!");
    	overloaded_function(true);

    return 0;
}

