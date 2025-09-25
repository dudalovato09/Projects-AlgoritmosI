/*
 Grupo: Bruno, Cleiton, Eduarda Lovato.
 Dado código em um vetor inteiro de 5 posições e o salário de 5 funcionários em um vetor float de 5 posições, faça:

a) Imprima o código  e o salário dos funcionários que ganham mais de R$ 2500,00

b) Para os funcionários que ganham menos de R$ 1200,00 conceda um aumento de 20%.
Imprima Código e o novo salário destes funcionários com salários reajustados. 
O cálculo do valor reajustado deve ser atualizado no vetor float.
*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int cod [5], i, indice;
	float salario [5];
	
	for(i = 0; i < 5; i++){
	printf("\n Digite seu codigo: ");
	scanf("%d", &cod[i]);
	
	printf(" Digite seu salario: ");
	scanf("%f", &salario[i]);
	}
	
	printf("\n ===========================================================");
	printf("\n\n Funcionarios que ganham mais de R$ 2500 ");
	for(i = 0; i < 5; i++){
		if(salario[i] > 2500){
			printf("\n\n Codigo %d e salario do funcionario R$ %2.f", cod[i], salario[i]);
		}
	}
	
	printf("\n ===========================================================");
	printf("\n\n Funcionarios que ganham menos de R$ 1200 ");
	for(i = 0; i < 5; i++){
		if(salario[i] < 1200){
			
			indice = salario[i] * 0.2;
			salario[i] += indice;
			
			printf("\n\n Codigo %d e novo salario do funcionario R$ %2.f", cod[i], salario[i]);
		}
	}
	
	return 0;
}
