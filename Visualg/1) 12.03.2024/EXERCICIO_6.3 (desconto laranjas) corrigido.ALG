Algoritmo "aula2_exercicio6"

Var
          custo,desconto,unidades,total,pagou,troco:real

Inicio
          escreva("Digite o preço de custo da dúzia de laranjas: ")
          leia(custo)
          escreval()
          escreval()
          escreva("Digite o percentual de desconto fornecido: ")
          leia(desconto)
          escreval()
          escreval()
          escreva("Digite o número de laranjas adquiridas pelo cliente: ")
          leia(unidades)
          escreval()
          escreval()
          total <- ((unidades/12)*custo*2)*(1-(desconto/100))
          escreva("Total = ",total)
          escreval()
          escreval()
          escreva("Valor que o cliente pagou: ")
          leia(pagou)
          escreval()
          troco <- pagou-total
          escreva("Troco = ",troco)

Fimalgoritmo