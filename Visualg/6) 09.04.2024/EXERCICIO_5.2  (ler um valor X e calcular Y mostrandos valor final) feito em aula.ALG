Algoritmo "Exercicio_5.2"
// Descrição   : ler um valor X e calcular Y = X+2X+3X+4X+5X+…+20X
// Data atual  : 09/04/2024
Var
   i,x,y:inteiro


Inicio
   y <- 0
   escreva("Digite o valor para o X: ")
   leia (x)

   para i de 1 ate 20 passo 1 faca
   y <- y + (i * x)

   fimpara
   
   escreva(y)


Fimalgoritmo