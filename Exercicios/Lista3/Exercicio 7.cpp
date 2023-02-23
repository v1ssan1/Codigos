#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main (){
	char nome[35];
	cout << "Digite seu nome:\t" << endl;
	cin >> nome;
	
	if(strcmp(nome, "Maria") == 0){
		cout << "Ola Maria!" << endl;
	}
	else if (strcmp(nome, "Joao") == 0){
		cout << "Ola Joao";
		}
	else{
		cout << "Nome desconhecido";
	}
}