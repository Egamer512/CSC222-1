#include <iostream>
#include <cstdlib>  // For rand and srand functions
#include <ctime>    // For time function
#include <vector>

using namespace std;
vector<int> random_vector(int n, int upper_bound)
{
    srand(time(0));
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % upper_bound;
    }

    return vec;
}
int how_many(const vector<int>& vec, int value)
{
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) count++;
    }
    return count;
}

int main() {
    int num_values = 999999999;
    int upper_bound = 10;
    vector<int> vector = random_vector(num_values, upper_bound);
    cout << "value\thow_many" << endl;
    for (int i = 0; i < upper_bound; i++) {
        cout << i << '\t' << how_many(vector, i) << endl;
    }

    return 0;
}