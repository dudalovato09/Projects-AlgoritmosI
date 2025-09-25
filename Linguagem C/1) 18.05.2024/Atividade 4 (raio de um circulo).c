/*Elabore um algoritmo que leia a medida do raio de um círculo, calcule e mostra a área do círculo*/

#include<stdio.h>
int main(void)
{
	float circunferencia, raio, pi;
	pi = 3.14;
	printf("Digite a circunferencia do circulo: ");
	scanf("%f", &circunferencia);
	raio = circunferencia /(2*pi);
	printf("O raio do circulo e: %.2f", raio);
	return 0;
}
