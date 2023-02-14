#include <ctime>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

	int main(){
		char frase[70];
		cout << "Inserir frase a ser contada:\t" << endl;
		cin >> frase; 
		
		string str (frase);
		cout << "A frase tem " << str.size() << " letra(s)";
		
		return 0;
	}