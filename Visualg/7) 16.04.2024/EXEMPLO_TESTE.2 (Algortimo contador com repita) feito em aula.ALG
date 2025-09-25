Algoritmo "Exemplo_teste.2"
// Descrição   : Algortimo contador com repita
// Data atual  : 16/04/2024
Var
   cont,num,total:inteiro

Inicio
   cont <- 1

   repita
   escreva("Digite um número: ")
      leia(num)
      total <- total + num
      cont <- cont + 1
   ate (cont >= 10)

   escreva("Resultado do total é = ", total)


Fimalgoritmo