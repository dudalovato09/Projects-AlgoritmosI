Algoritmo "Exercicio_3"
// Descrição   : Fazer um algoritmo que leia vários números inteiros e
//calcule a soma dos números pares. O fim da leitura será indicado
//pelo número zero (0). Mostrar o resultado final.
// Data atual  : 16/04/2024
Var
   numero,soma:inteiro


Inicio
   soma <- 0
   repita
      escreva("Digite o número: ")
      leia(numero)
      se (numero % 2 = 0) entao
         soma <- soma + numero
      fimse
   ate (numero = 0)
   escreva("Total da soma = ", soma)

Fimalgoritmo