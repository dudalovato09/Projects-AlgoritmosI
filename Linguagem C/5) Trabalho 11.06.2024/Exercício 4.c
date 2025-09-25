/* 
Grupo: Bruno, Cleiton, Eduarda Lovato.

Fa�a um programa que receba um n�mero inteiro de 1 at� 50 . O vetor ser� no m�ximo de 20 posi��es inteiras. 
O programa dever� calcular e armazenar em um vetor todos os n�meros que s�o divis�veis pelo valor lido. 
Imprimir todos os valores do vetor. Se n�o possuir nenhum divisor, dever� ser impressa a frase �N�o possui divisores� */

#include <stdio.h>
#include<locale.h>

int main() {
    int numero, divisores[20];
    int qtd_divisores = 0; 
    setlocale(LC_ALL,"portuguese");

	
	do{
	printf("Digite um n�mero inteiro: ");
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
        printf("N�o h� divisores.\n");
    } else {
        for (int i = 0; i < qtd_divisores; i++) {
            printf("%d ", divisores[i]);
        }
        printf("\n");
    }

    return 0;
}

