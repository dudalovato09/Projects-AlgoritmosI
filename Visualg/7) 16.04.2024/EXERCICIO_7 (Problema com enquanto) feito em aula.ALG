Algoritmo "Exercicio_7"
// Descrição   : Chico tem 1,50 metro e cresce 2 centímetros por ano,
//enquanto Zé tem 1,40 metro e cresce 3 centímetros por ano.
//Construa um algoritmo que calcule e imprima quantos anos
//serão necessários para que Zé seja maior que Chico
// Data atual  : 16/04/2024
Var
   ze,chico:real
   anos:inteiro


Inicio

   ze <- 140
   chico <- 150
   anos <- 0

   Enquanto (ze <= chico) faca
      ze <- ze + 3
      chico <- chico + 2
      anos <- anos + 1
      
      escreval("Zé =", ze)
      escreval("Chico =", chico)
   fimenquanto

   escreval("Foram necessários", anos, " anos para Zé ultrapassar o chico")


Fimalgoritmo