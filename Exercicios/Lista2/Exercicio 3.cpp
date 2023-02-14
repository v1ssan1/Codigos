#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int num1, num2;
	srand(time(NULL));
	
	num1 = rand()%1000+10;
	num2 = rand()%1000+10;
	
	cout << "Numero 1:\t" << num1 << endl;
	cout << "Numero 2:\t" << num2 << endl;
	
	if (num1>num2){
		cout << "\nMaior numero:\t" << num1 << endl;
	}
	else {
		cout << "\nMaior numero:\t" << num2 << endl;
	}
}