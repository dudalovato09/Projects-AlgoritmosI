Algoritmo "Ano_Bissexto"
// Descrição   : ano bissexto outra maneira de fazer
// Data atual  : pós aula / dia 22/03/2024
var
   ano: inteiro

Inicio
   Escreva("Digite o ano:")
   Leia(ano)

   Se (ano % 400 = 0) Então
      escreval ("Ano bissexto")
   Senão
      Se (ano % 4 = 0) e (ano % 100 <> 0) Então
         escreval ("Ano bissexto!")
      Senão
         escreval ("Não é um ano bissexto.")
      FimSe
   fimse
FimAlgoritmo