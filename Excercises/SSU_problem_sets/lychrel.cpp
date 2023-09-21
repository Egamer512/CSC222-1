#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;
int reverse (int num){
    int reversed_number = 0, remainder = 0, reversed_num = 0;
    while (num != 0){
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num /= 10;
    }
    return reversed_num;
}
int lychrel (int num){
    
    for (int i = 1; i <= 10; i++){
        
        int reversed = reverse(num);
        
        cout << "Iteration " << i << ":\t" << num;
        num += reversed;
        cout << " + " << reversed << " \t"<<"= " << num << endl;
        if (num == reverse(num)){
            cout << "Not a Lychrel number after "<< i << " iterations: "<< num << endl;
            return 0;
        }
    }
    cout << "Still a Lychrel number after "<< 10 << " iterations: "<< num << endl;
    return 1;
}
int main(){
    cout << "Let's Check if you can find a Lychrel number after 10 iterations\n" << "Enter a number:";
    int num;
    cin >> num;
    lychrel(num);
    return 0;
}