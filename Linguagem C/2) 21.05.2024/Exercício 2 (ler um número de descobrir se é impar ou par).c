/* Fa�a um algoritmo que leia um n�mero e verifique se ele � par ou �mpar, Imprima a frase  �� par� ou �� �mpar�. */

#include<stdio.h>
#include<locale.h>

int main(void)
{
	int A;
	setlocale(LC_ALL, "portuguese");
	printf("digite o valor de A: ");
	scanf("%d", &A);

	if (A % 2 == 0){
		printf("� par");
	}else{
		printf("� impar");
	}	
	
	return 0;
}
