/* Solu��o aplicando vetores (Case ) para an�lise e teste*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{

principal(){
      float notas[5], soma=0,media,maior, menor;
      int i, contamaior=0, contamenor=0, pmaior,pmenor;
      para(eu=0; eu<5; eu++)
      {
           printf("\n Digite a nota %d :", i+1);
           scanf("%f", �as[i]);
           soma=soma+notas[i];
      }
      m�dia= soma/i;
      printf("\n\nRelat�rio de notas\n\n");
      maior=notas[0];
      menor=notas[0];
      pmaior=0;
      pmenor=0;
      para(eu=0; eu<5; eu++)
      {
           printf("\n Nota %d : %.2f", i+1, notas[i]);
           if(notas[i]>=m�dia)
           {
              contamaior++;                   
           }
           outro
           {
               contamenor++;
           }
            
           // encontra o maior elemento0 e sua posi��o no vetor
           if(notas[i]>maior)
           {
              maior=notas[i];
              pmaior=i;
              
           }
           // encontra o menor elemento0 e sua posi��o no vetor
           if(notas[i]<menor)
           {
              menor=notas[i];
              pmenor=i;
              
           }
      }
      printf("\n\n RELAT�RIO INVERTIDO\n\n");
      para(eu=4; eu>=0; eu--)
      {
           printf("\n Nota %d : %.2f", i+1, notas[i]);
      }
      printf("\n\n\n RELAT�RIO DOS C�LCULOS\n\n");
      printf("\n C�lculo da m�dia = %.2f", m�dia);
      printf("\n Notas acima ou iguais a media = %d", contamaior);
      printf("\n Notas abaixo da m�dia = %d", contamenor);
      printf("\n Nota Maior = %.2f", maior);
      printf("\n Posi��o da Nota Maior = %d", pmaior);
      printf("\n Nota Menor = %.2f", menor);
      printf("\n Posi��o da Nota Menor = %d\n\n", pmenor);
      
      
       sistema("pausa");
       
       }
}
