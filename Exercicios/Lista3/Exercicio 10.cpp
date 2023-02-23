#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	int id, re;
	cout << "Idade:\t";
	cin >> id;
	cout << endl;
	cout << "Renda:\t";
	cin >> re;
	cout << endl;
	
	if(id >= 18 && re <= 1800){
		cout << "Parabens, voce e elegivel para receber o beneficio!";
	}
	else{
		cout << "Infelizmente, voce nao e elegivel para receber o beneficio";
	}
}