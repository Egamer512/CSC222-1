#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

void compare(int a, int b){
	if (a > b){
		cout << a << " it's greater than " << b << endl;
	}	
	else if (a < b){
		cout << a << " it's less than " << b << endl;
	}
	else {
		cout << a << " it's the same as " << b << endl;
	}
}
int main (int argc, char **argv){
//I thought that it will be boring if the computer asked you for prompts
	if (argc != 3){
		cout << "Usage: ./compare num1 num2" << endl;
	return 1;
	}
	int a = atoi(argv[argc - 2]);
	int b = atoi(argv[argc - 1]);
	compare(a, b);
	return 0;
}
