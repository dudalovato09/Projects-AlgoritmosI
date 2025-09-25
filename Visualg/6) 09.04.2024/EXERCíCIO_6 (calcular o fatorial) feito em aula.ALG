Algoritmo "Exercício_6"
// Descrição   : Calcular o fatorial
// Data atual  : 09/04/2024
Var
   i,n,fat:inteiro


Inicio
   fat <- 1
   escreva("Digite número para descobrir o fatorial: ")
   leia(n)
   para i de 1 ate n passo 1 faca
      fat <- fat * i

   fimpara
   escreva("Valor do fatorial: ", fat)

Fimalgoritmo