/*Um mercado vende a dúzia de laranjas pelo dobro do preço de custo. Com a baixa em suas vendas o proprietário resolveu
conceder um desconto a seus clientes. Escreva um algoritmo que leia o preço de custo da dúzia de laranjas (em R$),
o percentual do desconto (por dúzia) fornecido e o número de laranjas (unidade) adquiridas pelo cliente.
Calcule e imprima o valor a ser pago pelo cliente em R$. Após a escrita do resultado acima, deverá ser lido o valor que o 
cliente pagou ao mercado (em R$) e escrever o troco que deverá ser fornecido em R$. preço de venda dúzia = custox2*/

#include<stdio.h>

int main(void)
{
	float compra_duzia,venda_duzia,uni_venda,venda_inicial,desconto,porc_desc,desconto_final,valor_final;

	
	
	
	
	
	//1. Informar o preço de compra e de venda da dúzia:
	printf("Informe o valor pago pela duzia do produto: R$");
	scanf("%f",&compra_duzia);
	venda_duzia = (compra_duzia*2);
	
	//2. Recebendo dados venda
	printf("Quantidade sendo vendida: ");
	scanf("%f",&uni_venda);
	uni_venda = (uni_venda/12); // se o cliente comprar uma dúzia = 1
	
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

