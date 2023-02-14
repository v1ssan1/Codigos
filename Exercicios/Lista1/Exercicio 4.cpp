#include <stdlib.h>
#include <stdio.h>

int main(){
	char a1[10], a2[10], a3[10], a4[10];
	int n1, n2, n3, n4;

	printf("Nome aluno 1: ");
	scanf("%s", &a1);
	printf("\nNota do aluno:	");
	scanf("%i", &n1);

system("CLS");

	printf("Nome aluno 2: ");
	scanf("%s", &a2);
	printf("\nNota do aluno:	");
	scanf("%i", &n2);
	
system("CLS");

	printf("Nome aluno 3: ");
	scanf("%s", &a3);
	printf("\nNota do aluno:	");
	scanf("%i", &n3);
	
system("CLS");

	printf("Nome aluno 4: ");
	scanf("%s", &a4);
	printf("\nNota do aluno:	");
	scanf("%i", &n4);

system("CLS");
	
	printf("ALUNO(A)\tNOTA");
	printf("\n====================");

	printf("\n%s", a1);
	printf("\t\t%i", n1);
	
	printf("\n%s", a2);
	printf("\t\t%i", n2);
	
	printf("\n%s", a3);
	printf("\t\t%i", n3);
	
	printf("\n%s", a4);
	printf("\t\t%i", n4);
	
	return 0;
}