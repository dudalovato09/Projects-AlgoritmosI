/* Faça um algoritmo que leia dois números inteiros, em seguida, se eles forem diferentes, escreva na tela "os valores são diferentes". 
Caso contrário escreva a mensagem “números iguais” */

#include<stdio.h>
#include<locale.h>

int main()
{
	int A, B;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("digite o valor de B: ");
	scanf("%d", &B);
	if (A != B){
		printf("São diferentes!");
	}else{
		printf("São iguais!");
	}	
	
	return 0;
}
