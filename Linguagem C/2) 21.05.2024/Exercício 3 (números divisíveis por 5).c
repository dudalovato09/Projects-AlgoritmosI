/* Ler um n�mero inteiro e determinar se � divis�vel por 5. Se for divis�vel, escrever uma mensagem na tela �o n�mero xx � divis�vel por 5�. 
Se n�o for divis�vel imprima �o n�mero xx n�o � divis�vel por 5�. No lugar de xx deve aparecer o n�mero que foi lido pelo usu�rio. */

#include<stdio.h>
#include<locale.h>

int main(void)
{
	int A;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite o n�mero que voc� deseja: ");
	scanf("%d", &A);

	if (A % 5 == 0){
		printf("� divis�vel por 5");
	}else{
		printf("N�o � divis�vel por 5");
	}	
	
	return 0;
}
	
