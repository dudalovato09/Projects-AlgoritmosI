Algoritmo "Parte_2_GA"
// Descrição   : Parte 2 prova do GA
// Autor(a)    : Eduarda Pinto Lovato
// Data atual  : 02/05/2024
Var
   compradores,codigo,quantidade,idade,faixa,total_idade:inteiro
   valor,desconto,valor_final,frete,valor_desconto,media_idade:real
   entrega:caracter

Inicio
   total_idade <- 0
   idade <- 0
   media_idade <- 0
   valor_desconto <- 0
   desconto <- 0
   valor_final <- 0
   valor <- 0
   faixa <- 0
   quantidade <- 0

   para compradores de 1 ate 20 passo 1 faca
      repita
         escreva("Digite o código do produto: ")
         leia(codigo)
         se (codigo <= 0) entao
            escreval("Código do produto inválido. Redigite por favor")
         fimse
      ate(codigo >= 1)
      repita
         escreva("Digite o valor do produto: R$ ")
         leia(valor)
         se (valor <= 0) entao
            escreval("Valor inválido. Redigite por favor.")
         fimse
      ate(valor >= 1)
      repita
         escreva("Digite a quantidade dos produtos: ")
         leia(quantidade)
         valor <- valor * quantidade
         se (quantidade <= 0) entao
            escreval("Quantidade inválida. Redigite por favor.")
         fimse
      ate(quantidade >= 1)
      repita
         escreva("Digite sua idade: ")
         leia(idade)
         total_idade <- total_idade + idade
         se (idade <= 0) entao
            escreval("Idade inválida. Redigite por favor")
         fimse
      ate(idade >= 1)
      se (idade <= 18) entao
         faixa <- 1
         desconto <- 40
         valor_desconto <- (desconto / 100) * valor
         valor_final <- valor - valor_desconto
      senao
         se (idade > 18) e (idade <= 30) entao
            faixa <- 2
            desconto <- 30
            valor_desconto <- (desconto / 100) * valor
            valor_final <- valor - valor_desconto
         senao
            faixa <- 3
            desconto <- 20
            valor_desconto <- (desconto / 100) * valor
            valor_final <- valor - valor_desconto
         fimse
      fimse
      repita
         escreval("A entrega será feita no Rio grande do Sul?")
         escreva("Digite S para sim e N para não: ")
         leia(entrega)
         se (entrega <> "S") e (entrega <> "N") entao
            escreval("Caracter inválido. Redigite por favor")
         fimse
      ate(entrega = "S") ou (entrega = "N")
      escolha (entrega)
      caso "S"
         frete <- 0
         escreval (  )
         escreval("Parabéns, como cortesia da loja seu frete sairá de graça")
      caso "N"
         frete <- 30
         escreval(  )
         escreval("Como está fora do RS o valor do seu frete será: R$", frete)
      fimescolha
      escreval("A sua faixa etária é:", faixa," por isso seu desconto será de", desconto,"%")
      escreval("O valor da sua compra é: R$", valor)
      escreval("O valor do seu desconto é: R$", valor_desconto)
      escreval("O valor total da sua compra é: R$", valor_final)
      escreval(  )
   fimpara
   escreval (  )
   media_idade <- total_idade / compradores
   escreval("A média de idade dos compradores é: ", media_idade)


Fimalgoritmo