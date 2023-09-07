#include <iostream>
#include <cstdlib> 
#include <cmath>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int num1 = rand() % 100 + 1;
	int num2 = rand() % 10 + 1;
	int num3 = rand() % 20 + 20;

	cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n" << endl;
	cout << num1 << " + " << num2 << " + " << num3 << " = " << num1 + num2 + num3 << "\n" << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n" << endl;
	cout << num3 << " - " << num2 << " = " << num3 - num2 << "\n" << endl;
	cout << num1 << " * " << num2 << " * " << num3 << " = " << num1 * num2 * num3 << "\n" << endl;
	cout << num3 << " ** " << num2 << " = " << pow(num3, num2) << "\n" << endl;
	cout <<"√" << num1 << " = " << sqrt(num1) << "\n" <<endl;
	cout << num1 << " * " << num3 << " + " << num2  << " = " << num1 * num3 + num2 << "\n" << endl;		
	cout << num1 << " * " << num3 << " - " << num2  << " = " << num1 * num3 - num2 << "\n" << endl;
	cout << "("<< num1 << " - " << num3 << ") * " << num2  << " = " << (num1 - num3) * num2 << "\n" << endl;
	return 0;
}
