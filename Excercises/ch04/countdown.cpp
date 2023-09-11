#include <iostream>
#include <math.h>
using namespace std;

void countdown(int n) {
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

