#include <iostream>
#include <math.h>
using namespace std;

void new_line()
{
	cout << endl;
}
int nothing()
{
	int number = 5 + 10 + 7;
	return number;
}
int main()
{
	cout << "First Line." << endl;
	nothing();   
	cout << new_line() + 7 << endl;
    	cout << "Second Line." << endl;
    	return 0;
}
