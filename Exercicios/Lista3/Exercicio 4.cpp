#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main (){
	char letra;
	cout << "Digite uma letra:\t" << endl;
	cin >> letra;
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'
        || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        	cout << "Vogal";
		}
	else{
		cout << "Consoante";
	}
}
