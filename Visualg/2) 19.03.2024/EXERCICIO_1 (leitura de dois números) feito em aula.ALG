Algoritmo "Exercicio_1"
// Descrição   : Leitura de dois números
// Data atual  : 19/03/2024
Var
   n1, n2:inteiro

Inicio
   escreva("Digite um valor inteiro: ")
   leia(n1)
   escreva("Digite outro valor inteiro: ")
   leia(n2)
   se (n1 > n2 ) entao
      escreva("o numero", n1," é maior")
   senao
      se (n2 > n1 ) entao
         escreva("o numero", n2," é maior")
      senao
         escreva("os numeros",n1," são iguais")
      fimse
   fimse


Fimalgoritmo