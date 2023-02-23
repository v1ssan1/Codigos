#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

	int main (){
		int i;
		cout << "Inserir idade:\t";
		cin >> i;
		
		if(i>=18){
			cout << "Ja atingiu a maioria de idade." << endl;
		}
		else {
			cout << "Ainda e menor de idade";
		}
	}