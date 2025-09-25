Algoritmo "Exercicio_6.2"
// Descrição: Faça um programa que receba um número inteiro maior que 1
//(valide a leitura utilizando o comando Repita .. até),
//verifique se o número fornecido é primo ou não é .
//Imprima a frase para o usuário "É primo" ou " Não é Primo".
//Escreva uma  mensagem de "número é primo" ou "número não é primo"
//para o usuário.
//OBS: Um número é primo quando ele somente é divisível por 1 e por ele mesmo.
// Data atual: 16/04/2024
Var
   numero, divisor: Inteiro

Inicio
   Repita
      escreva("Digite um número inteiro maior que 1: ")
      leia(numero)
   até numero > 1

   divisor <- 2

   enquanto (divisor < numero) E (numero % divisor <> 0) faça
      divisor <- divisor + 1
   Fimenquanto

   Se divisor = numero então
      escreva("O número ", numero, " é primo.")
   senão
      escreva("O número ", numero, " não é primo.")
   Fimse
   
   fimalgoritmo