#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	int a, b;
	cout << "Primeiro numero:\t" << endl;
	cin >> a;
	cout << "Segundo numero:\t" << endl;
	cin >> b;
	cout << endl << endl;
	
	if(a>b){
		cout << "O primeiro numero e maior do que o segundo";
	}
	else if(b>a){
		cout << "O segundo numero e maior do que o primeiro.";
	}
	else{
		cout << "Os numeros sao iguais.";
	}
	}