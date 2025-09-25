Algoritmo "Validar_dado_entrada_1.1"
// Descrição   : Algortimo que valida dados de entrada (idade)
//(le um dado, testa e ve se esta certo)
// Data atual  : 16/04/2024
Var
   idade:inteiro


Inicio
   repita
      escreva("Digite a sua idade: ")
      leia(idade)
      se (idade < 0) entao
         escreval("Idade inválida, redigite")
      fimse
   ate (idade >= 0)

Fimalgoritmo