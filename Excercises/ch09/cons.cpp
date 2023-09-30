#include <iostream>

void modifyConstParameter(const int& value) {
    // Attempt to modify the const parameter
    // This will result in a compilation error
    value = 42;  
}

int main() {
    int num = 10;
    modifyConstParameter(num);
    return 0;
}
