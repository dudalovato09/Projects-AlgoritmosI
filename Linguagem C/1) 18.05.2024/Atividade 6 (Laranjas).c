/*Um mercado vende a d�zia de laranjas pelo dobro do pre�o de custo. Com a baixa em suas vendas o propriet�rio resolveu
conceder um desconto a seus clientes. Escreva um algoritmo que leia o pre�o de custo da d�zia de laranjas (em R$),
o percentual do desconto (por d�zia) fornecido e o n�mero de laranjas (unidade) adquiridas pelo cliente.
Calcule e imprima o valor a ser pago pelo cliente em R$. Ap�s a escrita do resultado acima, dever� ser lido o valor que o 
cliente pagou ao mercado (em R$) e escrever o troco que dever� ser fornecido em R$. pre�o de venda d�zia = custox2*/

#include<stdio.h>

int main(void)
{
	float compra_duzia,venda_duzia,uni_venda,venda_inicial,desconto,porc_desc,desconto_final,valor_final;

	
	
	
	
	
	//1. Informar o pre�o de compra e de venda da d�zia:
	printf("Informe o valor pago pela duzia do produto: R$");
	scanf("%f",&compra_duzia);
	venda_duzia = (compra_duzia*2);
	
	//2. Recebendo dados venda
	printf("Quantidade sendo vendida: ");
	scanf("%f",&uni_venda);
	uni_venda = (uni_venda/12); // se o cliente comprar uma d�zia = 1
	
	venda_inicial = (uni_venda*venda_duzia);
	
	printf("\nValor: R$%.2f",venda_inicial);
	
	printf("\nPorcentagem de desconto a ser aplicado: ");
	scanf("%f",&desconto);
	porc_desc = (desconto/100);
	desconto_final = (venda_inicial*porc_desc);
	valor_final = (venda_inicial-desconto_final);
	printf("Valor final: R$%.2f",valor_final);
	
	return 0;
}

