/* 6. Faça um algoritmo para calcular o fatorial de N! 
Imprimir todos os elementos e o resultado final do cálculo da série apresentada acima. */

#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	int i, n, fat;
	fat = 1;
	
	printf("Digite um numero para descobrir seu fatorial: ");
	scanf("%d", &n);
	
	printf("Fatorial de %d! = ", n);
	
	for (i = 1; i <= n; i++){
		fat *= i;
		 if (i < n){
            printf(" x ");
        }
	}
	
	printf(" = %d\n", fat);

    return 0;
}
