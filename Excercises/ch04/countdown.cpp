#include <iostream>
#include <math.h>
using namespace std;

void countdown(int n) {
// to fix the infinite printing we should do:
//  if (n <= 0) 
//  return Blastoff!
//  or maybe start adding to the negative values until its zero!  
	if (n == 0) {
       	cout << "Blastoff!" << endl;
	} 
	else {
        cout << n << endl;
        countdown(n-1);
	}
}
int main(){
//when running countdown with a negative parameter it will just run without stoping
	countdown(-1);
	
}

