Algoritmo "Exercicio_4"
// Descrição   : Média de 3 notas, tanto média aritmética quanto ponderada
// Data atual  : pós aula / dia 22/03/2024
Var
   n1, n2, n3, media: real
   tipo_media: inteiro
Inicio
   escreva("Informe a nota 1: ")
   leia(n1)
   escreva("Informe a nota 2: ")
   leia(n2)
   escreva("Informe a nota 3: ")
   leia(n3)
   escreval("Escolha o tipo de média que você deseja calcular: ")
   escreval("1. Aritmética")
   escreval("2. Ponderada")
   leia(tipo_media)

   se(tipo_media = 1) entao
      media <- (n1 + n2 + n3) / 3
   senao
      se (tipo_media = 2) entao
         media <- ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10
      fimse
   fimse
   
   escreval("A média é: ", media)



Fimalgoritmo