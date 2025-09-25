/* Escreva um programa na linguagem C que leia inteiramente um vetor A, do tipo inteiro de 10 posições. 
Após, em outro laço de repetição, armazene os valores do vetor A em um novo vetor B, porém com a ordem inversa. 
Ou seja: o valor da primeira posição do vetor A deve ser armazenado na última posição do vetor B, logo, 
o valor da segunda posição do vetor A deve ser armazenado na penúltima posição do vetor B, e assim por diante. 
Por fim, escreva os valores do vetor B, também em um novo laço de repetição.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int A[10], B[10];
	int i, j;	
	
	printf("\n Informe os valores do vetor A\n");
	
	for(i=0; i<10; i++){
		scanf("%d", &A[i]);	
	}
	
	j=9;
	for(i=0; i<10; i++){
		B[j--] = A[i];
	}
	
	printf("Vetor B (valores de A na ordem inversa):\n");
	
    for (int i = 0; i < 10; i++) {
        printf("%d \n", B[i]);
    }

	system("pause");
}
