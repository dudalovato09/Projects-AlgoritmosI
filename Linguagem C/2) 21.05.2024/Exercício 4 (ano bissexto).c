/* Dado um ano D.C (Depois de Cristo), identifique se este é um ano bissexto ou não. 
Considere que para o ano ser bissexto basta que seja divisível por 400. 
Caso contrário, este precisará ser divisível por  4 e não divisível por 100. */

#include<stdio.h>
#include<locale.h>

int main()
{
	int ano;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o ano que você deseja: ");
	scanf("%d", &ano);
	
	if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
		printf("O ano %d é bissexto", ano);
	}else{
		printf("O ano %d não é bissexto", ano);
	}
	
	return 0;
		
}
	
