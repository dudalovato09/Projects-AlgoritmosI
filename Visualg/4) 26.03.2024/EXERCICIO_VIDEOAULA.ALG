Algoritmo "Exercicio_videoaula"
// Descrição   : Seleção encadeada
// Data atual  : 25/03/2024
Var
   ingresso,desconto:real
   dia:caracter
   idade:inteiro


Inicio
   escreva("Digite sua idade: ")
   leia(idade)
   escreva("Digite o dia da semana: ")
   leia(dia)
   se (dia = "segunda") ou (dia = "terça")entao
      ingresso <- 10.00
   senao
      se (dia = "quarta") ou (dia = "quinta") entao
         ingresso <- 20.00
      senao
         se (dia = "sexta") entao
            ingresso <- 30.00
         senao
            se (dia = "sabado") entao
               ingresso <- 40.00
            senao
               se (dia = "domingo") entao
                  ingresso <- 50.00
               senao
                  ingresso <- 0
                  escreval("Dia inexistente")
               fimse
            fimse
         fimse
      fimse
   fimse
   se (idade <= 10) e (ingresso >0) entao
      desconto <- ingresso/2
      ingresso <- ingresso - desconto
      escreval ("Promoção infantil. Valor do ingresso = ", desconto)
   fimse
   escreval ("Valor do ingresso = ", ingresso)


Fimalgoritmo