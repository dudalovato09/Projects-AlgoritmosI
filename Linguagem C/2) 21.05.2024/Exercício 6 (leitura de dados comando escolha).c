/* Um posto de combustível vende três tipos de combustível : álcool, diesel e gasolina. 
O preço de cada litro dos combustíveis deve ser lido(informado) pelo usuário. 
Faça um algoritmo que leia um caracter que representa o tipo de combustível comprado (a, d ou g) , 
o preço do combustível e a quantidade em litros. Utilizar o comando Switch / escolha. 
O programa deve imprimir o valor em reais a ser pago pelo combustível.
Combustível                            Preço por Litro

A – Álcool                             ler o valor

D – Diesel                             ler o valor

G – Gasolina                           ler o valor */

#include<stdio.h>
#include<locale.h>

int main( )
{
	char tipo;
	float valor,litros,total_valor;
	setlocale(LC_ALL, "portuguese");
			
	printf("Digite o tipo de combustível:");
	printf("\nA para álcool");
	printf("\nD para diesel");
	printf("\nG para gasolina:");
	scanf("%s", &tipo);
	
	switch(tipo)
	{
		case 'A':
		printf("\nO combustível escolhido foi álcool");
		printf("\nDigite o valor da combustível: ");
		scanf("%f", &valor);
		printf("\nDigite quantos litros abasteceu: ");
		scanf("%f", &litros);
		total_valor = valor*litros;
		printf("\nO valor total é R$ %.2f", total_valor);
		break;
		case 'D':
		printf("\nO combustível escolhido foi álcool");
		printf("\nDigite o valor da combustível: ");
		scanf("%f", &valor);
		printf("\nDigite quantos litros abasteceu: ");
		scanf("%f", &litros);
		total_valor = valor*litros;
		printf("\nO valor total é R$ %.2f", total_valor);
		break;
		case 'G':
		printf("\nO valor do por é: %.2f", valor);
		printf("\nDigite o valor da combustível: ");
		scanf("%f", &valor);
		printf("\nDigite quantos litros abasteceu: ");
		scanf("%f", &litros);
		total_valor = valor*litros;
		printf("\nO valor total é R$ %.2f", total_valor);
		break;
	}

	
	return 0;
}
	
	
