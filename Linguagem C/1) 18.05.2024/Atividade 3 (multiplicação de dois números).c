/*Elabore um algoritmo que leia dois valores digitados pelo usu�rio e calcule e mostre a multiplica��o destes dois valores.*/

#include<stdio.h>
int main(void)
{
	float valor1, valor2, multiplicacao;
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	multiplicacao = valor1*valor2;
	printf("\n A multiplica�ao dos dois numeros digitados e: %.1f", multiplicacao);
	return 0;
}

