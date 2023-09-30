#include <iostream>
#include <cstdlib>  // For rand and srand functions
#include <ctime>    // For time function
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate and print 10 random numbers between 1 and 10
    cout << "10 random numbers between 1 and 10:" << endl;
    for (int i = 0; i < 10; ++i) {
        int random_number = rand() % 10 + 1;  // Generate a random number between 1 and 10
        cout << random_number << " ";
    }
    cout << endl;

    return 0;
}
