#include <iostream>
#include <cmath>

using namespace std;
long reverse (long num);
int lychrel (long num);

int main(){
    cout << "Let's Check if you can find a Lychrel number after 10 iterations\n" << "Enter a number:";
    long num;
    cin >> num;
    lychrel(num);
    return 0;
}

int lychrel (long num){
    
    for (int i = 1; i <= 10; i++){
        
        long reversed = reverse(num);
        
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

long reverse (long num){
    long reversed_num = 0, remainder;
    while (num != 0){
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num /= 10;
    }
    return reversed_num;
}