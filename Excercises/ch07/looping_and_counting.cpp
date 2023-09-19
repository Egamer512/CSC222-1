#include <iostream>
#include <string>
using namespace std;
int count_letters (string string,char letter){
    int count = 0;
    int index = 0;

    while (index < string.length()) {
        if (string[index] == letter) {
            count ++;
        }
        index ++;
    }
    return count;
}
int main(){
    string str = "ASLDJASLFJLSiiiiiiA";
    
    char letter = 'i';
    cout << count_letters(str, letter);

}