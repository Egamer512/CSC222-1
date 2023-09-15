#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void sequence(int n)
{
   while (n != 1) {
       cout << n << endl;
       if (n%2 == 0) {      // n is even
           n = n / 2;
       } else {             // n is odd
           n = n * 3 + 1;
       }
   }
   cout << n << endl;
}
int main (){
//will run forever
	sequence(0);
	sequence(6);
	sequence(5);
	sequence(101010113);
	return 0;
}

