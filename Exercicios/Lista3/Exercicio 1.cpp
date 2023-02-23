#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	int i;
	cout << "Numero a declarar:\t";
	cin >> i;
	
	if(i>0){
		cout << "O numero e positivo" << endl;
	}
	else if(i<0){
		cout << "O numero e negativo" << endl;
	}
	else {
		cout << "O numero e 0" << endl;
	}
}