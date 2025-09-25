/* Escreva um programa na linguagem C que leia dois vetores (A e B) do tipo inteiro de 20 posições. 
Após a leitura, armazene em um vetor S, também de 20 posições, na posição correspondente dos vetores A e B, 
a soma dos valores armazenados em A e B.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[20],B[20],S[20];
	int i,soma;	
	
	printf("\nInforme os valores do vetor A\n");
	
	for(i=0;i<20;i++){
		printf("Digite os valores  [ %d ]", i);
		scanf("%d", &A[i]);	
	}
	
	printf("\nInforme os valores do vetor B\n");
	
	for(i=0;i<20;i++){
		printf("Digite os valores  [ %d ]", i);
		scanf("%d", &B[i]);	
	}
	
	for(i=0;i<20;i++){
		S[i]=A[i]+B[i]	;
	}
	
	printf("Vetor S (soma de A e B):\n");
    for (int i = 0; i < 20; i++) {
        printf("\n [ %d ] = %d \n",i,S[i]);
	
}
	system("pause");
}
