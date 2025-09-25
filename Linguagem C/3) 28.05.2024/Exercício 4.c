/* 4. Faça um algoritmo para somar os números pares positivos < 1000 e ao final imprimir o resultado. Utilizar o comando While. */

#include<stdio.h>

int main(void)
{
	
	int num, soma;
	
	while (num < 1000)
	{
		if (num % 2 == 0){
			
			soma = soma + num;
		}
		
		num++;
	}
	
	printf("O resultado da soma e: %d", soma);
	
	return 0;
}
