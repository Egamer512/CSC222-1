#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2){
	double dx = x2 - x1;
    	double dy = y2 - y1;
    	double dsquared = dx * dx + dy * dy;
    	double result = sqrt(dsquared);
    	return result;
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
        if (argc != 5){
                cout << "Usage: ./distance coordx1 coordy1 coordx2 coordy2" << endl;
                return 1; 
        }
	int coords[argc - 1];
        for (int i = 1,len = argc; i < len; i++){
                if(check_if_number(argv[i])){
                        cout << "Usage: ./distance coordx1 coordy1 coordx2 coordy2" << endl;
                        return 1;
                }
		coords[i-1] = atoi(argv[i]);
        }

	cout << distance(coords[0], coords[1], coords[2], coords[3]);
	return 0;
}
