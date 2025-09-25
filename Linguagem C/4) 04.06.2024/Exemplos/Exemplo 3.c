/* Exemplo para análise de teste */

#include<stdio.h>
#include<stdlib.h>

main(void)
{
	 int idade[5]; // defini??o do vetor
	 int i, soma=0, contamaior=0, contamenor=0;  // ? o ?ndice do vetor idade
	float media;
	 // leitura do vetor de 5 posi??es
	 printf("\n\n LEITURA DO VETOR DE IDADES \n\n");
	 for(i=0; i<5; i++)
	 {
	 	printf("\n Digite o valor [ %i ] : ",i+1);
	 	scanf("%i", &idade[i]);
	 	soma= soma+idade[i]; // acumula a soma de todas as idades lidas
	 	if(idade[i]>=18)
	 	{
	 		contamaior++; // conta os maiores de idade
	 		
	 		
	 	}
		 else
	 	{ 
		 	contamenor++; // conta os menores de idade
	 	}
	 	
	 }
	 
	 media= (float)soma / i; // calula a media de idades
	 // impress?o do vetor
    printf("\n\n RELATORIO DO VETOR DE IDADES \n\n");
	for(i=0; i<5; i++)
	 {
	 	printf("\n valor do vetor idade [ %i ] : %i ",i+1, idade[i]);
	 
	 	
	 	
	 }
	 printf("\n\n\n\n CALCULOS EFETUADOS\n\n");
	
	 printf("\n O valor da m?dia  = %.2f", media);
	 printf("\n Total de pessoas maiores de idade  = %i", contamaior);
	 printf("\n Total de pessoas menores de idade  = %i", contamenor);
	
	
}
