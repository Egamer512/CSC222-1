#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void Table_pows_of_2(void){
	cout << "give me how many powers of two do you want: ";
	int pw; cin >> pw;
	cout << "TWO\t" << "POWERS" << endl;
	for(int i = 0; i < pw; i++){
		cout << "2\t" << pow(2,i) << endl;
	}
}

int main (){
	Table_pows_of_2();
	return 0;
}

