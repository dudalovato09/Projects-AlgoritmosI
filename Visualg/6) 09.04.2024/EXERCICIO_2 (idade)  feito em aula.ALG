Algoritmo "Exercicio_2"
// Descrição   : leia a idade de 10 pessoas calcule e imprima maiores de idade
// Data atual  : 09/04/2024
Var
   i,idade, conta_maior:inteiro


Inicio
   conta_maior <- 0
   para i de 1 ate 10 passo 1 faca
      escreva("Digite a idade",i,": ")
      leia(idade)
      se (idade>=18) entao
         conta_maior <- conta_maior + 1
      fimse

   fimpara

   escreva("Total de pessoas maiores de idade: ", conta_maior)

Fimalgoritmo