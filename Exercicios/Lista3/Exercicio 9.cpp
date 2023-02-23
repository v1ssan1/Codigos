#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	int num1, num2, num3, ma, me;
	cout << "Inserir numero 1:\t";
	cin >> num1;
	cout << endl << "Inserir numero 2:\t";
	cin >> num2;
	cout << endl << "Inserir numero 3:\t";
	cin >> num3;
	
	if(num1 >= num2 && num1 >= num3){
		ma = num1;
	}
	else if(num2 >= num1 && num2 >= num3){
		ma = num2;
	}
	else{
		ma = num3;
	}
	
	if(num1 <= num2 && num1 <= num3){
		me = num1;
	}
	else if(num2 <= num1 && num2 <= num3){
		me = num2;
	}
	else{
		me = num3;
	}
	
	cout << endl << "O maior numero e:\t" << me << endl;
	cout << "O maior numero e:\t" << ma;
}