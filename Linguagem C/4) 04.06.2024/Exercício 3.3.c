/* Escreva um programa na linguagem C que leia inteiramente um vetor A, do tipo inteiro de 10 posi��es. 
Ap�s, em outro la�o de repeti��o, armazene os valores do vetor A em um novo vetor B, por�m com a ordem inversa. 
Ou seja: o valor da primeira posi��o do vetor A deve ser armazenado na �ltima posi��o do vetor B, logo, 
o valor da segunda posi��o do vetor A deve ser armazenado na pen�ltima posi��o do vetor B, e assim por diante. 
Por fim, escreva os valores do vetor B, tamb�m em um novo la�o de repeti��o.*/

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
