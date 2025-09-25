Algoritmo "Exercicio_5"
// Descrição   : Validar dados dentro de uma faixa de valor
// Data atual  : 16/04/2024
Var
   numero:inteiro


Inicio
   repita
      escreva("Digite um número entre 20 e 30: ")
      leia(numero)
      se ((numero < 20) ou (numero > 30)) entao
         escreval("Valor inválido. Redigite!")
      fimse
   ate ((numero >= 20) e (numero <= 30))


Fimalgoritmo