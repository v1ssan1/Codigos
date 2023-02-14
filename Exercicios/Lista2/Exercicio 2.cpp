#include <ctime>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

	int main(){
		int num1, num2;
		cout << "Inserir primeiro numero:\t" << endl;
		cin >> num1;
		cout << "Inserir segundo numero:\t" << endl;
		cin >> num2;
		
		int r;
		r = num1 + num2;
		
		cout << r << flush;
		return 0;
	}