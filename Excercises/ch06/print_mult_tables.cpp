#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void print_multiples(int n, int high){
    int i = 1;
    while (i <= high){
        cout << n * i << "\t";
        i ++;
    }
    cout << endl;
}

void print_mult_table(int high){
    int i = 1;
    while (i <= high){
        print_multiples(i, i);
        i ++;
    }
}

int main(){
    print_mult_table(4);
}
