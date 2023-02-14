#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

vector<string> names;

void novaClientela() {
	string novoCliente;
	cout << "Nome do cliente: " << endl;
	cin >> novoCliente;
	system("PAUSE");
	names.push_back(novoCliente);
	system("CLS");
}

void apagarCliente() {
	string apagarClientes;
	cout << "Nome a ser deletado:  " << endl;
	cin >> apagarClientes;
	system("PAUSE");
	for (int i=0; i < names.size(); i++) {
		if (names[i]== apagarClientes) {
			names.erase(names.begin()+i);
			break;
		}
	}
	system("CLS");
}

void nomes() {
	if (names.empty()) {
		cout << "Sem nomes cadastrados." << endl;
		system("PAUSE");
		system("CLS");
		return;
	}
	cout << "Os clientes sao:" << endl;
	for (const auto &name : names) {
		cout << name << " " << endl;
	}
	cout << endl;
}

int main () {
	while (true) {
		cout << "1. Adicionar cliente" << endl;
		cout << "2. Apagar cliente" << endl;
		cout << "3. Mostrar clientes" << endl;
		cout << "4. Sair" << endl;
		
		int choice;
		cin >> choice;
		
		switch (choice) {
			case 1:
				system("CLS");
				novaClientela();
				break;
			case 2:
				system("CLS");
				apagarCliente();
				break;
			case 3:
				system("CLS");
				nomes();
				break;
			case 4:
				system("CLS");
				return 0;
			default:
				system("CLS");
				cout << "Selecao invalida." << endl;
				system("PAUSE");
				system("CLS");
				break;
			}
	}
}

