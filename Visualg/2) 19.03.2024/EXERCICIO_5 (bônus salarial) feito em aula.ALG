Algoritmo "Exercicio_5"
// Descrição   : Bônus salarial de um funcionário
// Data atual  : aula 19/03/2024
Var
   salario_base,bonus,salario_liquido:real
   idade:inteiro


Inicio
   escreva("Informe o salário base do funcionário: ")
   leia(salario_base)
   escreva("Infrome a idade do funcionário: ")
   leia(idade)

   se ((salario_base >= 1000) e (idade > 50)) entao
      bonus <- salario_base * (10/100)
   senao
      se ((salario_base < 1000) e (idade <= 50)) entao
         bonus <- salario_base * (5/100)
      senao
         bonus <- 0
      fimse
   fimse

   salario_liquido <- salario_base + bonus

   escreval("Salário base: ", salario_base)
   escreval("Bônus: ", bonus)
   escreval("Salário líquido: ", salario_liquido)


Fimalgoritmo