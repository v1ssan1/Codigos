#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	char name[50];
	int i;
	
	cout << "Nome:\t" << endl;
	cin >> name;
	cout << "Idade:\t" << endl;
	cin >> i;
	
	if(i>=18){
		cout << "Voce e maior de idade e ";
	}
	else{
		cout << "Voce nao e maior de idade e ";
	}
	
	if(strcmp(name, "Maria") == 0){
		cout << "o seu nome e Maria!";
	}
	else if(strcmp(name, "Joao") == 0){
		cout << "o seu nome e Joao!";
	}
	else{
		cout << "o seu nome nao e maria ou joao";
	}
}