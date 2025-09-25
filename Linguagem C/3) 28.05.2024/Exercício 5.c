/* 5. Faça um algoritmo para ler um valor X e calcular Y = X+2X+3X+4X+5X+…+20X*/

#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	int x, y = 0;

    printf("Digite um valor para X: ");
    scanf("%d", &x);

    for (int i = 1; i <= 20; i++) {
        y += i * x;
    }

    printf("O valor de Y : %d\n", y);
	
    return 0;
	
}
