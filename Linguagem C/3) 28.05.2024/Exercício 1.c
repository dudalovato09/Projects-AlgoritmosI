/* Fa�a um algoritmo para ler 6 n�meros inteiros e ao final escrever sua m�dia. 
Calcule e imprima quantos s�o pares e quantos s�o �mpares.*/

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
