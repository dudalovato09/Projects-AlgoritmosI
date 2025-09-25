/* Faça um algoritmo para ler 6 números inteiros e ao final escrever sua média. 
Calcule e imprima quantos são pares e quantos são ímpares.*/

#include<stdio.h>
#include<stdlib.h>

main (void)
{
	int x, numero, par = 0, impar = 0;
	float soma = 0, media;
	
	for ( x = 1; x <= 6; x++){
		printf("\n Digite um numero: ");
		scanf("%d", &numero);
		soma = soma + numero;
		
		if(numero % 2 == 0){
			par++;	
		}else{
			impar++;	
		}
	}
	
	media = soma / x-1;
	printf("\nMedia calculada = %.2f", media);
	printf("\nTotal de pares = %d", par);
	printf("\nTotal de impares = %d", impar);
	
	system("pause");
}
