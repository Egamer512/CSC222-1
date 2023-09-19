#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int count_letters (string str,char letter){
    int count = 0;
    int index = str.find(letter);
    int check;
    if (letter >= 65 && letter <= 90){
        check = 32;
    }
    if (letter >= 97 && letter <= 122){
        check = -32;
    }
    while (index != -1){
        count ++;
        index = str.find(letter, index + 1);
    }
    index = str.find(letter + check);
    while (index != -1){
        count ++;
        index = str.find(letter + check, index + 1 );
    }       
    return count;
}
int main(){
    string str;
    cout << "Give me a string: ";
    cin >> str;
    char letter;
    cout << "Give me a letter to find: ";
    cin >> letter;
    while (!((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))){
        cin >> letter;
    }
    cout << "the letter "<< letter << " appears " << count_letters(str, letter) << " times";
}