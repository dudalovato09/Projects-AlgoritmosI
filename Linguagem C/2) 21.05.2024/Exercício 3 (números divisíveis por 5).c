/* Ler um número inteiro e determinar se é divisível por 5. Se for divisível, escrever uma mensagem na tela “o número xx é divisível por 5”. 
Se não for divisível imprima “o número xx não é divisível por 5”. No lugar de xx deve aparecer o número que foi lido pelo usuário. */

#include<stdio.h>
#include<locale.h>

int main(void)
{
	int A;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite o número que você deseja: ");
	scanf("%d", &A);

	if (A % 5 == 0){
		printf("É divisível por 5");
	}else{
		printf("Não é divisível por 5");
	}	
	
	return 0;
}
	
