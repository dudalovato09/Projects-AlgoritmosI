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
   n, i: inteiro
   primo:   logico
Inicio
   primo <- verdadeiro
   repita
      escreval("Informe um número:")
      leia(n)
   ate (n > 1)

   para i de n-1 ate 2 passo -1 faca
      se (n % i = 0) entao
         primo <- falso
      fimse
   fimpara

   se(primo) entao
      escreval("Número primo")
   senao
      escreval("Número não primo")
   fimse
   
   fimalgoritmo