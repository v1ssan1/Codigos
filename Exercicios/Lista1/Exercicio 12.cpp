#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main (){
	double pre, total;
	int qntd;
	
	cout << "Valor do produto:\t";
	cin >> pre;
	cout << endl;
	cout << "Quantidade comprada:\t";
	cin >> qntd;
	cout << endl;
	
	total = pre * qntd;
	
	cout << "O total foi de:\tR$" << total;
}