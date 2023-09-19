#include <iostream>
#include <string>
#include <string.h>
#define pass (void)0

using namespace std;
int main(){
    string suffix = "ack";
    
    char letter = 'J';
    while (letter <= 'Q') {
        if (letter == 79 || letter == 81){
            cout << letter << "u" + suffix << endl;
            letter++;
        }
        else {
            cout << letter + suffix << endl;
            letter++;
        }

    }
}