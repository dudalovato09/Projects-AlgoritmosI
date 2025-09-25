Algoritmo "Exercicio_2"
// Descrição   : some os números fornecidos pelo usuário
//até que o número lido seja igual a zero e mostre a soma
// Data atual  : 16/04/2024
Var
   numero,soma:inteiro


Inicio
   soma <- 0
   repita
      escreva("Digite o número: ")
      leia(numero)
      soma <- soma + numero
   ate (numero = 0)
   escreva("Total soma = ", soma)


Fimalgoritmo