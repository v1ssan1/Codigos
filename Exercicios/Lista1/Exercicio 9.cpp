#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;



void fArea(){
	double area, r;
	cout << "Inserir raio:\t";
	cin >> r;
	area = r * r * 3.14;
	cout << "A area vale:\t" << area << endl;
	system("PAUSE");
	system("CLS");
}
void fPer(){
	double per, r;
	cout << "Inserir raio:\t";
	cin >> r;
	per = 2 * r * 3.14;
	cout << "O perimetro vale:\t" << per << endl;
	system("PAUSE");
	system("CLS");
}

int main(){
	
		while (true) {
	cout << "1. Perimetro" << endl;
	cout << "2. Area" << endl;
	cout << "3. Sair" << endl;
	
	int choice;
	cin >> choice;
	
	switch (choice){
		case 1:
			system("CLS");
			fPer();
			break;
		case 2:
			system("CLS");
			fArea();
			break;
		case 3:
			system("CLS");
			return 0;
		default:
			system("CLS");
			cout << "Escolha invalida" << endl;
			system("PAUSE");
			system("CLS");
			break;
			
	}
}
}

