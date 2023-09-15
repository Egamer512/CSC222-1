#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int age;
	cout << "Type your age: "; // Type a number and press enter
	cin >> age;
	if (age > 16 && age < 65) {
		cout << "age is within the normal working age." << endl;
	}
	return 0;
}
