#include<stdio.h>
#include<stdlib.h>
// opção 3 de ler um numero inteiro dentro do intervado de 1 a 10.


main(void)
{

    int x;
    printf("\n\n\nLeia um valor para x(opcao 3):")  ;    
    scanf("%d", &x);
    
    while (x<1 || x>10)
    {
       printf("\n\n Valor invalido - fora do intervalo deve er entre 1 - 10\n\n"); 
       printf("\n\n\nLeia um valor para x:")  ;    
       scanf("%d", &x);

    }
          
    system("pause");    
}

