/* Um posto de combust�vel vende tr�s tipos de combust�vel : �lcool, diesel e gasolina. 
O pre�o de cada litro dos combust�veis deve ser lido(informado) pelo usu�rio. 
Fa�a um algoritmo que leia um caracter que representa o tipo de combust�vel comprado (a, d ou g) , 
o pre�o do combust�vel e a quantidade em litros. Utilizar o comando Switch / escolha. 
O programa deve imprimir o valor em reais a ser pago pelo combust�vel.
Combust�vel                            Pre�o por Litro

A � �lcool                             ler o valor

D � Diesel                             ler o valor

G � Gasolina                           ler o valor */

#include<stdio.h>
#include<locale.h>

int main( )
{
	char tipo;
	float valor,litros,total_valor;
	setlocale(LC_ALL, "portuguese");
			
	printf("Digite o tipo de combust�vel:");
	printf("\nA para �lcool");
	printf("\nD para diesel");
	printf("\nG para gasolina:");
	scanf("%s", &tipo);
	
	switch(tipo)
	{
		case 'A':
		printf("\nO combust�vel escolhido foi �lcool");
		printf("\nDigite o valor da combust�vel: ");
		scanf("%f", &valor);
		printf("\nDigite quantos litros abasteceu: ");
		scanf("%f", &litros);
		total_valor = valor*litros;
		printf("\nO valor total � R$ %.2f", total_valor);
		break;
		case 'D':
		printf("\nO combust�vel escolhido foi �lcool");
		printf("\nDigite o valor da combust�vel: ");
		scanf("%f", &valor);
		printf("\nDigite quantos litros abasteceu: ");
		scanf("%f", &litros);
		total_valor = valor*litros;
		printf("\nO valor total � R$ %.2f", total_valor);
		break;
		case 'G':
		printf("\nO valor do por �: %.2f", valor);
		printf("\nDigite o valor da combust�vel: ");
		scanf("%f", &valor);
		printf("\nDigite quantos litros abasteceu: ");
		scanf("%f", &litros);
		total_valor = valor*litros;
		printf("\nO valor total � R$ %.2f", total_valor);
		break;
	}

	
	return 0;
}
	
	
