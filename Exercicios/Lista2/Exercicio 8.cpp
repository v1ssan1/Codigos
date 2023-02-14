#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main(){
	time_t hoje = time(0);
	int ano;
	
	tm *ltm = localtime(&hoje);
	
	int i = 1900 + ltm->tm_year;
	
	cout << "Ano de nascimento:\t";
	cin >> ano;
	
	int e;
	
	e = i - ano;
	
	cout << "No final do ano voce vai ter " << e << " anos";
}