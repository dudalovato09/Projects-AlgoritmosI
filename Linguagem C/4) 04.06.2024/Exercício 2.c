/* Escreva um programa na linguagem C que leia dois vetores (A e B) do tipo inteiro de 30 posições. 
Após a leitura, armazene em um vetor I os valores de A e B intercalados nessa ordem 
(primeiro o valor armazenado no vetor A, depois o valor armazenado do vetor B). Para tanto, 
o vetor I deverá ter o dobro do tamanho dos vetores A e B.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int A[30],B[30], k[60];
	int i, j;	
	
	printf("\n Informe os valores do vetor A");
	
	for(i=0; i<30; i++){
		printf("\n Digite os valores [ %d ]", i);
		scanf("%d", &A[i]);	
	}
	
	printf("\n Informe os valores do vetor B");
	
	for(i=0; i<30; i++){
		printf("\n Digite os valores [ %d ]", i);
		scanf("%d", &B[i]);	
	}
	
	j = 0;
	for(i=0; i<30; i++){
		k[j] = A[i];
		j++;
		k[j] = B[i];
		j++;
	}
	
	printf("\n VALORES SAO");
	
	for(i=0; i<30; i++){
		printf("\n S[%d]  = %d \n", i , k[i]);
			
	}	
	
	system("pause");
}
