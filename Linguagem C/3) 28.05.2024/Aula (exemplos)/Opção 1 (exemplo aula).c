#include<stdio.h>
#include<stdlib.h>
// opção 1 de ler um numero inteiro dentro do intervado de 1 a 10.

main(void)
{
    int x= -1;
    
    while (x<1 || x>10)
    {
    
       printf("\n\n\nLeia um valor para x(opco 1):")  ;    
       scanf("%d", &x);
       if (x<1 || x>10)
       {
                printf("\n\n Valor invalido - fora do intervalo deve er entre 1 - 10\n\n"); 
       }

    }
    system("pause");    
}
