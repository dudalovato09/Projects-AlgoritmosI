/*Escreva um programa em C que leia os lados de um cubo e calcule o volume do mesmo.*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	float lado, volume;
	printf("Digite a medida da aresta do seu cubo: ");
	scanf("%f", &lado);
	volume = pow(lado,3);
	printf("O volume do seu cubo e: %.2f", volume);
	return 0;
}
