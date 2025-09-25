/*Programa que calcula a média dos N números digitados pelo usuário.*/

#include<stdio.h>
#include<conio.h>

main(void)

{  int i = 1, idade, soma=0, n;
   float media;
   printf("\n Digite o numero de pessoas: ");
   scanf("%i",&n);
   
   for ( i =1 ; i <= n ; i++   )
   {          
    printf("\n Digite a idade (%d) : ",i);
    scanf("%i",&idade); 
    soma= soma+idade;   // variável acumuladora para acumular a soma de todas idades        
   }
   
   printf("\n A soma total das idades = %d", soma);
   media =float( soma) / n;   // casting para a variável soma
   printf("\n A media = %.2f", media);
   getch();  // leitura de um caracter via teclado
}

