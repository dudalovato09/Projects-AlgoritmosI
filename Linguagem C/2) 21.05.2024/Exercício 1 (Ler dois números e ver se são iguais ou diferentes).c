/* Fa�a um algoritmo que leia dois n�meros inteiros, em seguida, se eles forem diferentes, escreva na tela "os valores s�o diferentes". 
Caso contr�rio escreva a mensagem �n�meros iguais� */

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
		printf("S�o diferentes!");
	}else{
		printf("S�o iguais!");
	}	
	
	return 0;
}
