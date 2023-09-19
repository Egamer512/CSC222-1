#include <iostream>
#include <cstring>

using namespace std;
void reverse(char str[]){
    int end = strlen(str) - 1;
    int start = 0;
    while (start < end){
        swap(str[start], str[end]);
        end --;
        start ++;
    }
}
int main(){
    char string [100];
    cin.getline(string, 100);
    reverse(string);
    cout << string << endl;
}