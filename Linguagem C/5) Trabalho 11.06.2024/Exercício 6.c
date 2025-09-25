/* 
Grupo: Bruno, Cleiton, Eduarda Lovato.

Escrever um programa que leia um vetor inteiro A(5). Em seguida ordene os valores em ordem crescente e decrescente.
Para a ordenação Pesquise o método de ordenação Bolha e implemente esta solução através deste método de ordenação.
Imprime o vetor ordenado em ordem crescente e também decrescente.*/

#include <stdio.h>
#include<locale.h>

int main() {
	
	int A[5];
	int i, aux, contador;
	setlocale(LC_ALL,"portuguese");
	
	for(i=0 ; i<5 ; i++ ){
		printf("\n Digite um número inteiro: ");
		scanf("%d",&A[i]);
	}
	
	for (contador = 1; contador < 5; contador++) {
		for (i = 0; i < 5 - 1; i++) {
    		if (A[i] > A[i + 1]) {
    		aux = A[i];
       		A[i] = A[i + 1];
       		A[i + 1] = aux;
     		}
   		}
 	}
 	
	printf("\n Elementos do array em ordem crescente:\n");
	for (i = 0; i < 5; i++) {
 		printf("%4d", A[i]);
	}
	printf("\n");
	
	for (contador = 1; contador < 5; contador++) {
		for (i = 0; i < 5 - 1; i++) {
    		if (A[i] < A[i + 1]) {
    		aux = A[i];
       		A[i] = A[i + 1];
       		A[i + 1] = aux;
     		}
   		}
 	}
 	
 	printf("\n Elementos do array em ordem decrescente:\n");
	for (i = 0; i < 5; i++) {
 		printf("%4d", A[i]);
	}
	
	return 0;
}
