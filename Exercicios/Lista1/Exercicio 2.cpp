#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	char nome[30], endereco[40];
	int cep, telefone;
	
	printf("Nome completo:	");
	scanf("%s", &nome);
	
	printf("\nEndereco:	");
	scanf("%s", &endereco);
	
	printf("\nCEP:	");
	scanf("%i", &cep);
	
	printf("\nTelefone:	");
	scanf("%i", &telefone);
	
	system("PAUSE");
	system("CLS");
	
	printf("\t%s", nome);
	printf("\n\t%s", endereco);
	printf("\n\t%i", cep);
	printf("\t%i", telefone);
	
	return 0;

}