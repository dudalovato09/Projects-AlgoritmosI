/*Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começam a fazer pesquisas para descobrir um bom plano, não muito caro. 
Um vendedor de um plano de saúde apresentou a Tabela 2. Criar um programa que receba a idade de uma pessoa e imprima o valor que ela devera pagar, 
segundo a Tabela 2*/

#include<stdio.h>
#include<locale.h>

int main( )
{
	int idade,valor;	
	setlocale(LC_ALL, "portuguese");
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade <= 10){
	valor = 30;
	printf("Você deverá pagar R$%d", valor);
	
	}else{
		if ((idade > 10) && (idade <= 29)){
		valor = 60;
		printf("Você deverá pagar R$%d", valor);
		
		}else{
			if ((idade > 29) && (idade <= 45)){
			valor = 120;
			printf("Você deverá pagar R$%d", valor);
			
			}else{
				if ((idade > 45) && (idade <= 59)){
				valor = 150;
				printf("Você deverá pagar R$%d", valor);
				
				}else{
					if ((idade > 59) && (idade <= 65)){
					valor = 250;
					printf("Você deverá pagar R$%d", valor);
					
					}else{ 
						if (idade > 65){
						valor = 400;
						printf("Você deverá pagar R$%d", valor);
						}
		
					}	
				}
			}
		}
	}
}



