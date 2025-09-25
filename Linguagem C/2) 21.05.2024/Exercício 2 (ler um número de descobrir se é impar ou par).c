/* Faça um algoritmo que leia um número e verifique se ele é par ou ímpar, Imprima a frase  “é par” ou “é ímpar”. */

#include<stdio.h>
#include<locale.h>

int main(void)
{
	int A;
	setlocale(LC_ALL, "portuguese");
	printf("digite o valor de A: ");
	scanf("%d", &A);

	if (A % 2 == 0){
		printf("É par");
	}else{
		printf("É impar");
	}	
	
	return 0;
}
