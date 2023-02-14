#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	char nome[50];
	int ano, sal;
	
	cout << "Nome:\t";
	cin >> nome;
	cout << endl;
	system("CLS");
	
	cout << "Ano de nascimento:\t";
	cin >> ano;
	cout << endl;
	system("CLS");
	
	cout << "Salario:\t";
	cin >> sal;
	cout << endl;
	system("CLS");
	
	cout << "Voce se chama " << nome << ", nascido em " << ano << " e ganha " << sal << " reais.";
}