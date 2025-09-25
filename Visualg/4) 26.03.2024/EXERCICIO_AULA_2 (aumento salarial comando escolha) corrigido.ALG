Algoritmo "Exercicio_aula_2"
// Descrição   : Aumento de salário comando escolha com letras
// Data atual  : aula dia 26/03/2024
Var
   Categoria: Caractere
   Salario: Real
   SalarioReajuste: Real

Inicio
   Escreva("Digite a categoria de seu funcionário! (Entre A, B, C, D ou E): ")
   Leia(Categoria)
   Escreva("Digite o salário do seu funcionário: ")
   Leia(Salario)

   Escolha categoria
   Caso "A"
      SalarioReajuste <- Salario + (Salario * 10/100)

   Caso "B"
      SalarioReajuste <- Salario + (Salario * 15/100)

   Caso "C"
      SalarioReajuste <- Salario + (Salario * 25/100)

   Caso "D"
      SalarioReajuste <- Salario + (Salario * 35/100)

   Caso "E"
      SalarioReajuste <- Salario + (Salario * 50/100)

   Outrocaso
      Escreva("Categoria inválida, por favor, reinsira a categoria correta.")

   FimEscolha

   Escreva("O salário reajustado do seu funcionário é: ", SalarioReajuste)

Fimalgoritmo