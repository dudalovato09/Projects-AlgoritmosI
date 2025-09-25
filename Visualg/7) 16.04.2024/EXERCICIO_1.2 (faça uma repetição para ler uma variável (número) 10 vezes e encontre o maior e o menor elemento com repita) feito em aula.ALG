Algoritmo "Exercicio_1.2"
// Descrição   :  faça uma repetição para ler uma variável (número) 10 vezes e
//encontre o maior e o menor elemento
// Data atual  : 16/04/2024
Var
   cont,numero,maior,menor:inteiro


Inicio
   cont <- 1

   repita
      escreva("Digite o numero", cont, ": ")
      leia(numero)
      se (cont = 1) entao
         maior <- numero
         menor <- numero
      fimse
      se (numero > maior) entao
         maior <- numero
      fimse
      se (numero < menor) entao
         menor <- numero
      fimse
      cont <- cont + 1
   ate (cont > 10)

   escreva("O maior número é: ", maior)
   escreval( )
   escreva("O menor número é: ", menor)



Fimalgoritmo