#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void loop_forever(int n){
   while (true) {
	   cout << "n is now " << n << "." << endl;
	   n++;
   }
}
void recurse_forever(int n){
	cout << "n is now" << n << "." << endl;
	recurse_forever(n+1);
}
int main (){
//will run forever
	recurse_forever(1);
//If we run an inifite function it will continue running nonstopping,
//not allowing other functions to run.
	loop_forever(1);
	return 0;
}

