#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	float peso, altura, imc;
	cout << "Peso (Kg):\t";
	cin >> peso;
	cout << endl << "Altura (m):\t";
	cin >> altura;
	
	cout << endl << "Peso:\t" << peso << endl;
	cout << "Altura:\t" << altura << endl;
	
	imc = peso/(altura * altura);
	
	cout << "O seu indice de massa corporal e:\t" << imc << endl;
	
	if(imc < 18.5){
		cout << "Classificacao: Magreza" << endl;
	}
	else if(imc >= 18.5 && imc <= 24.9){
		cout << "Classificaco: Normal" << endl;
	}
	else if(imc >= 25 && imc <= 29.9){
		cout << "Classificacao: Sobrepeso";
	}	
	else if(imc >= 30 && imc <= 39.9){
		cout << "Classficacao: Obesidade 1";
	}
	else {
		cout << "Obesidade extrema";
	}
}