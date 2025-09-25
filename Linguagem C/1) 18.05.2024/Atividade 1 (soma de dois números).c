/* Elabore um algoritmo que leia dois valores digitados pelo usuário e calcule e mostre a soma destes dois valores.*/

#include<stdio.h>
int main(void)
{
	float valor1, valor2, soma;
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	soma = valor1+valor2;
	printf("\n A soma dos dois numeros digitados e: %.1f", soma);
	return 0;
}
