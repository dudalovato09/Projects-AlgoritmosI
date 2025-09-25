Algoritmo "aula02_06"
Var
	laranjas_adquiridas: inteiro
   custo_duzia, percentual_desconto_duzia, percentual_efetivo_duzia, valor_revenda_duzia, valor_revenda_unitaria, valor_pago_cliente, valor_total: real
Inicio
	escreva("Informe o custo da dúzia de laranjas: ")
	leia(custo_duzia)
	escreva("Informe o percentual de desconto da dúzia: ")
	leia(percentual_desconto_duzia)
	percentual_efetivo_duzia <- percentual_desconto_duzia/100
   valor_revenda_duzia <- (custo_duzia * 2)
   percentual_efetivo_duzia <- valor_revenda_duzia* percentual_efetivo_duzia
   valor_revenda_unitaria <- (valor_revenda_duzia-percentual_efetivo_duzia) / 12

	escreva("Informe o número de laranjas adquiridas pelo cliente: ")
	leia(laranjas_adquiridas)

	valor_total <- laranjas_adquiridas * valor_revenda_unitaria

	escreval("Valor da compra: ", valor_total)

	escreva("Valor pago pelo cliente: ")
	leia(valor_pago_cliente)

	escreva("O troco é de ", valor_pago_cliente - valor_total)
Fimalgoritmo