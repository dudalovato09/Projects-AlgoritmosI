/* Elabore um algoritmo que leia três valores digitados pelo usuário (nota1, nota2 e nota 3) e calcule e 
mostre a média aritmética destes três valores.*/

#include<stdio.h>
int main(void)
{
	float v1, v2, v3, soma, media;
	printf("\n Digite a nota 1: ");
	scanf("%f", &v1);
	printf("\n Digite a nota 2: ");
	scanf("%f", &v2);
	printf("\n Digite a nota 3: ");
	scanf("%f", &v3);
	soma = v1+v2+v3;
	media = soma/3;
	printf("\n A media dos numeros digitados e: %.1f", media);
	return 0;
}
