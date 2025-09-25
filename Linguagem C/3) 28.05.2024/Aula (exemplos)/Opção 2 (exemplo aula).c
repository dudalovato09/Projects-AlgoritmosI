#include<stdio.h>
#include<stdlib.h>

// opção 2 de ler um numero inteiro dentro do intervado de 1 a 10

main(void)
{
    bool op=false;
    int x;
    
    while (op==false)
    {
       printf("\n\n\nLeia um valor para x(opcao 2):")  ;    
       scanf("%d", &x);
       if (x>0 && x<=10) 
       {
               op=true;
       }else
       {
               printf("\n\n Valor invalido - fora do intervalo deve er entre 1 - 10\n\n"); 
       }
          
    }
    system("pause");    
}



