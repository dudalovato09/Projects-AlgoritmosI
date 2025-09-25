Algoritmo "Exercicio_1"
// Descrição: Simulação de financiamento
// Data atual  : pós aula / dia 22/03/2024
Var
   salario,financiamento:real

Inicio
   Escreva("Digite seu salario: ")
   leia(salario)
   Escreva("Digite o valor do financiamento pretendido: ")
   leia(financiamento)
   se (financiamento <= (salario*5)) entao
      escreva ("Financiamento aceito, ")
   senao
      escreva ("Financiamento negado, ")
   fimse
   escreva("Obrigado por nos consultar!")

Fimalgoritmo