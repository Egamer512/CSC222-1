#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
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

bool check_if_number(char *a){
	for (int i = 0, len_a = strlen(a); i < len_a; i++){
		int part = a[i];
		if ((part < 48 || part > 57) && (part != 45)){		
			return true;
		}
	}	
	return false;
}

int main (int argc, char *argv[]){
//I thought that it will be boring to ask for user input so 
	if (argc != 3){
		cout << "Usage: ./compare int1 int2" << endl;
		return 1;
	}

	for (int i = 2; i > 0; i--){
		if(check_if_number(argv[i])){
			cout << "Usage: ./compare int1 int2" << endl;
			return 1;
		}		
	}
	int a = atoi(argv[1]), b = atoi(argv[2]);
	compare(a, b);
	return 0;
}
