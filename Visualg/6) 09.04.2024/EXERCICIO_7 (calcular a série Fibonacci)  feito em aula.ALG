Algoritmo "Exercicio_7"
// Descrição   : calcular a série Fibonacci (0,1,1,2,3,5,8,13,21,34)
// Data atual  : 09/04/2024
Var
i,n,ultimo,penultimo,atual:inteiro


Inicio

ultimo <- 0
penultimo <- 1

escreva("Digite o nessimo termo que deseja descobrir a série Fibonacci: ")
leia(n)
escreval("Valor: ",ultimo)
escreval("Valor: ",penultimo)

para i de 1 ate n passo 1 faca
atual <- ultimo + penultimo
ultimo <-  penultimo
penultimo <- atual

escreval("Valor: ",atual)

fimpara


Fimalgoritmo