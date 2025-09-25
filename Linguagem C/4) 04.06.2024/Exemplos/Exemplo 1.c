/*Exemplo para encontrar o maior e menor valor de um vetor*/

#include <stdio.h>
#include <stdlib.h>
main(void)
{ 
          float pesos[5], total=0, media, maior, menor;
          int i, pmaior, pmenor;
          for (i=0; i<5; i++  )
          {
              printf("\nDigite o peso %d : ", i+1);
              scanf("%f",&pesos[i] );
              total = total + pesos[i];  // soma todos os pesos
          
          }
          media = total / i;
          for (i=0; i<5; i++  )
          {
              printf("\nPesos %d :  %.2f", i+1, pesos[i] );
          
          }
          printf("\n Calculo da media de pesos : %.2f", media);
          maior = pesos[0];
          pmaior= 0;
          menor = pesos[0];
          pmenor=0;
          
          for (i=0; i<5; i++ )
          { 
              if (pesos[i]> maior)// encontrar o maior elemento
              {
                     maior = pesos[i];       
                     pmaior=i;
                            
              }
              if(pesos[i] < menor) // encontra  o menor elemento
              {
                     menor = pesos[i];       
                     pmenor=i;   
                          
              }   
          }
          printf("\n O maior elemento = %.2f na posi??o %d o vetor", maior, pmaior+1);
          printf("\n O menor elemento = %.2f na posi??o %d o vetor", menor, pmenor+1);
          
          system("pause");          
}
