/* 
Grupo: Bruno, Cleiton, Eduarda Lovato.

Faça um programa que receba um número inteiro de 1 até 50 . O vetor será no máximo de 20 posições inteiras. 
O programa deverá calcular e armazenar em um vetor todos os números que são divisíveis pelo valor lido. 
Imprimir todos os valores do vetor. Se não possuir nenhum divisor, deverá ser impressa a frase “Não possui divisores” */

#include <stdio.h>
#include<locale.h>

int main() {
    int numero, divisores[20];
    int qtd_divisores = 0; 
    setlocale(LC_ALL,"portuguese");

	
	do{
	printf("Digite um número inteiro: ");
    scanf("%d", &numero);
		if(numero < 1 || numero > 50){
			printf("Valor invalido redigite \n");
		}
	}while(numero<1 || numero > 50);		

    printf("Divisores de %d: ", numero);

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            divisores[qtd_divisores] = i; 
            qtd_divisores++; 
        }
    }

    if (qtd_divisores == 0) {
        printf("Não há divisores.\n");
    } else {
        for (int i = 0; i < qtd_divisores; i++) {
            printf("%d ", divisores[i]);
        }
        printf("\n");
    }

    return 0;
}

