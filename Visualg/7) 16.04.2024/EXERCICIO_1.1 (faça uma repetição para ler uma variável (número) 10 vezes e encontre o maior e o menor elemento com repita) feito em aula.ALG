Algoritmo "Exercicio_1.1"
// Descrição   :  faça uma repetição para ler uma variável (número) 10 vezes e
//encontre o maior e o menor elemento
// Data atual  : 16/04/2024
Var
   cont,numero,maior,menor:inteiro


Inicio
   cont <- 1

   escreva("Digite o número", cont, ":")
   leia (numero)
   maior <- numero
   menor <- numero

   repita
      escreva("Digite o numero", cont + 1, ": ")
      leia(numero)
      se (numero > maior) entao
         maior <- numero
      fimse
      se (numero < menor) entao
         menor <- numero
      fimse
      cont <- cont + 1
   ate (cont >= 10)

   escreva("O maior número é: ", maior)
   escreval( )
   escreva("O menor número é: ", menor)



Fimalgoritmo