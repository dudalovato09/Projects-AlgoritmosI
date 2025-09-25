Algoritmo "Validar_faixa_de_valor"
// Descrição   : Validar dados dentro de uma faixa de valor
// Data atual  : 16/04/2024
Var
   numero:inteiro


Inicio
   repita
      escreva("Digite um número entre 10 e 20: ")
      leia(numero)
      se ((numero < 10) ou (numero > 20)) entao
         escreval("Valor inválido. Redigite!")
      fimse
   ate ((numero >= 10) e (numero <= 20))


Fimalgoritmo