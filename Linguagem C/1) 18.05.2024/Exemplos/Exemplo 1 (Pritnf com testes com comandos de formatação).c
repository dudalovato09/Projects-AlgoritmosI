#include<stdio.h>
int main(void)

{
	int valor1=10;
	float valor2=2.5;
	char nome[20]="Eduarda";
	
	printf("Eu amo C!");
	printf("\n\nEu \namo \nC!");	
	printf("\n\nEu \tamo C!");
	printf("\n\nEu \bamo C!");
	printf("\n\nEu amo\r C!");
	printf("\n\nEu amo C! \\ %%");
	
	printf("\n\n O valor da variavel e: %d",valor1);
	printf("\n\n O valor da variavel e: %.2f",valor2);
	
	printf("\n\n O valor da variavel e: %d e do valor 2 e: %.2f",valor1,valor2);
	
	printf("\n\n O valor da variavel e: %10.2f",valor2);
	
	printf("\n\n O nome e: %s",nome);
	
	return 0;
}
