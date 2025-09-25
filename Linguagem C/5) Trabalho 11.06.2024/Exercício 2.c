/* 
Grupo: Bruno, Cleiton, Eduarda Lovato.

Escreva um programa em C para ler um valor A e um valor N. Imprimir a soma dos N números a partir de A (inclusive). 
Caso N seja negativo ou ZERO, deverá ser lido um novo N (apenas N).

Valores para teste

A          N        SOMA

3          2          7    (3+4)
4          5          30  (4+5+6+7+8)
-2         6          3    ((-2)+(-1)+0+1+2+3*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int A, N, i, soma = 0;
	
	printf("Digite um valor para A: ");
	scanf("%d", &A);
	
	do{
	printf("Digite um valor para N: ");
	scanf("%d", &N);
		if(N < 1){
			printf("Valor invalido redigite \n");
		}
	}while(N<1);
	
	for(i = 0; i < N; i++){
		soma += A + i;
	}
	
	printf("Soma dos %d numeros a partir de %d: %d \n", N, A, soma);
	
	return 0;
}
