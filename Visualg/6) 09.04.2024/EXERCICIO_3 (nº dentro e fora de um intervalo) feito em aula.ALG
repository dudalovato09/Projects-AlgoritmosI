Algoritmo "Exercicio_3"
// Descrição   : números dentro e fora do intervalo 10,20
// Data atual  : 09/04/2024
Var
   i,numero,dentro, fora:inteiro


Inicio
   dentro <- 0
   fora <- 0
   para i de 1 ate 10 passo 1 faca
      escreva("Digite o número",i,": ")
      leia(numero)
      se ((numero >= 10) e (numero <=20)) entao
         dentro <- dentro + 1
      senao
         fora <- fora +1
      fimse

   fimpara

   escreval("Total de valores dentro do intervalo: ", dentro)
   escreval("Total de valores fora do intervalo: ", fora)

Fimalgoritmo