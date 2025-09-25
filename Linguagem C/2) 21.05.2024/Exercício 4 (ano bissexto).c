/* Dado um ano D.C (Depois de Cristo), identifique se este � um ano bissexto ou n�o. 
Considere que para o ano ser bissexto basta que seja divis�vel por 400. 
Caso contr�rio, este precisar� ser divis�vel por  4 e n�o divis�vel por 100. */

#include<stdio.h>
#include<locale.h>

int main()
{
	int ano;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o ano que voc� deseja: ");
	scanf("%d", &ano);
	
	if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
		printf("O ano %d � bissexto", ano);
	}else{
		printf("O ano %d n�o � bissexto", ano);
	}
	
	return 0;
		
}
	
