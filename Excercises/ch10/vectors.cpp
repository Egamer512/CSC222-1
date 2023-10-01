#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
 vector<int> random_vector(int n, int upper_bound);
int how_many(const  vector<int>& vec, int value);

int main() {
    int num_values = 100000;
    int upper_bound = 10;

    // Seed the random number generator
     srand( time(0));

     vector<int> vector = random_vector(num_values, upper_bound);
     vector<int> histogram(upper_bound, 0);

    for (int i = 0; i < num_values; i++) {
        int index = vector[i];
        histogram[index]++;
    }

    // Output the histogram
    for (int i = 0; i < histogram.size(); i++) {
         cout << "Value " << i << ": " << histogram[i] << " occurrences\n";
    }

    return 0;
}

 vector<int> random_vector(int n, int upper_bound) {
     vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) {
        vec[i] =  rand() % upper_bound;
    }

    return vec;
}

int how_many(const  vector<int>& vec, int value) {
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value)
            count++;
    }
    return count;
}
