#include <stdio.h>

main(void)

{
    int numero, soma = 0, cont = 1;
    while ( cont <= 10)
    {
        printf("\n Digite um numero:");         
        scanf("%d", &numero);
        soma = soma + numero;
        cont ++ ;
    } 
    printf("\n Resultado da soma = %d", soma);
}

