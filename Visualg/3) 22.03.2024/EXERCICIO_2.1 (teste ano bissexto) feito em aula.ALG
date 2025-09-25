Algoritmo "Exercicio_2"
// Descrição   : ano bissexto
// Data atual  : pós aula / dia 22/03/2024
Var
   ano:inteiro


Inicio
   escreva("Informe o ano: ")
   leia(ano)
   se ((ano % 400 = 0) ou ((ano % 4 = 0) e (ano % 100 <> 0))) entao
      escreva("Ano bissexto")
   senao
      escreva("Ano não bissexto")
   fimse
Fimalgoritmo

