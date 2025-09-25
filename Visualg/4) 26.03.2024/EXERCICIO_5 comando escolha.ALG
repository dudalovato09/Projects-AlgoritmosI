Algoritmo "Exercicio_5"
// Descrição   : Imprimi cargo e código, feito em aula com a professora
// Data atual  : 26/03/2024
Var
   salario,reajuste,salario_final:real
   codigo:inteiro


Inicio
   escreva("Digite o salario: ")
   leia(salario)
   escreva("Digite o codigo >> de 1 até 5: ")
   leia(codigo)
   escolha(codigo)
   caso 1
      escreval("Escriturário")
      reajuste <- salario * 5/100
   caso 2
      escreval("Secretário")
      reajuste <- salario * 35/100
   caso 3
      escreval("Caixa")
      reajuste <- salario * 20/100
   caso 4
      escreval("Gerente")
      reajuste <- salario * 10/100
   caso 5
      escreval("Diretor")
      reajuste <- 0
   outrocaso
      escreval("Cargo inválido!")
   fimescolha

   salario_final <- reajuste + salario
   escreval("Valor do reajuste: ", reajuste)
   escreval("Valor do salário final: ", salario_final)


Fimalgoritmo