#include<stdio.h>
#include<conio.h>

main(void)
{  
   int n;
      
   do
   {          
        printf("\n Digite um numero para o n ( Dentro do intervalo de 100 a 200): ");
        scanf("%i",&n);
        if ( (n<100) ||  (n> 200) )  
        {
            printf("\n Valor fora do intervalo ! Redigite!! ");
         }
   } while ( n<100 || n>200);

  getch();  // leitura de um caracter via teclado equivale ao system (“pause”)
}

