/* 3. Faça um algoritmo para:
a) Ler um valor x qualquer
b) Calcular Y = ( x+1)+(x+2)+(x+3)+(x+4)+(x+5)+…(x+10).
Utilize o laço for.*/

#include<stdio.h>

int main(void)
{
	float x, y = 0, i;
	
	printf("\n Digite um valor para X: ");
	scanf("%f", &x);
	
	for (i = 1; i <=10; i++){
		y = x + i;
	}
	
	printf("\n O valor de Y e: %f ", y);
	
	return 0;
}
