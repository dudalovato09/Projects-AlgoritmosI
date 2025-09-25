Algoritmo "Exercício_3"
// Descrição   : Crédito do cliente
// Data atual  : 22/03/2024
Var
   saldo_medio,valor_credito:real


Inicio
   Escreva("Digite o saldo medio do seu cliente: ")
   leia(saldo_medio)

   se (saldo_medio <= 200) entao
      escreva("Nenhum credito, ")
   senao
      se (saldo_medio >= 201) e (saldo_medio <= 600) entao
         valor_credito <- saldo_medio * 0.2
      senao
         valor_credito <- saldo_medio * 0.3
      fimse
   fimse

   escreva("O saldo medio do cliente é:", saldo_medio)
   escreva(", O valor de credito do seu cliente é: ", valor_credito)

Fimalgoritmo