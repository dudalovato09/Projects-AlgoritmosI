/* Solução aplicando vetores (Case ) para análise e teste*/
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
           scanf("%f", ¬as[i]);
           soma=soma+notas[i];
      }
      mídia= soma/i;
      printf("\n\nRelatório de notas\n\n");
      maior=notas[0];
      menor=notas[0];
      pmaior=0;
      pmenor=0;
      para(eu=0; eu<5; eu++)
      {
           printf("\n Nota %d : %.2f", i+1, notas[i]);
           if(notas[i]>=mídia)
           {
              contamaior++;                   
           }
           outro
           {
               contamenor++;
           }
            
           // encontra o maior elemento0 e sua posição no vetor
           if(notas[i]>maior)
           {
              maior=notas[i];
              pmaior=i;
              
           }
           // encontra o menor elemento0 e sua posição no vetor
           if(notas[i]<menor)
           {
              menor=notas[i];
              pmenor=i;
              
           }
      }
      printf("\n\n RELATÓRIO INVERTIDO\n\n");
      para(eu=4; eu>=0; eu--)
      {
           printf("\n Nota %d : %.2f", i+1, notas[i]);
      }
      printf("\n\n\n RELATÓRIO DOS CÁLCULOS\n\n");
      printf("\n Cálculo da mídia = %.2f", mídia);
      printf("\n Notas acima ou iguais a media = %d", contamaior);
      printf("\n Notas abaixo da mídia = %d", contamenor);
      printf("\n Nota Maior = %.2f", maior);
      printf("\n Posição da Nota Maior = %d", pmaior);
      printf("\n Nota Menor = %.2f", menor);
      printf("\n Posição da Nota Menor = %d\n\n", pmenor);
      
      
       sistema("pausa");
       
       }
}
