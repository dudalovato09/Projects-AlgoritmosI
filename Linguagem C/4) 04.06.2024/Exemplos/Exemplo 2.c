/* Exemplo de aplicação de vator para a análise de um estudo*/

# include <stdio.h>

main(void)
{  int idade[5], maior, menor;
	int i, total=0;
	float media;
  
    
  // LA?O PARA INICIALIZAR O VETOR COM ZERO
  for (i=0; i<5; i++)
  {
  	 idade[i]= 0;
  		
  }
  // la?o para leitura do vetor idade de 5 posi??es
  for (i=0; i<5; i++)
  {
  	 printf("Digite a idade [ %d ]  : ",i+1);
  	 scanf("%d",&idade[i] )	;
  	 total = total + idade[i];
  	 
  }	
  media = (float)total / i;
  printf("\n RELATORIO DO CONTEUDO DO VETOR\n\n");
//	la?o para impress?o do conte?do do vetor
  for (i=0; i<5; i++)
  {
  	 printf("\nIdade [ %d ]  = %d ",i+1,idade[i] )	;
  }	
		
  printf("\n resultado da media de idades : %.2f", media);	
  menor= idade[0];
  maior = idade[0];
  for (i=0; i<5; i++)
  {  // if ? p ara encontrar o mais velho
        if(  idade[i] >maior)
        {
        	maior =idade[i];
                	
		}
		// este if ? para encontrar o mais novo
		if (idade[i]< menor)
		{
			menor = idade[i];
			
		}
		
  	 
  }	
  printf("\n o mais velho ? o = %d", maior);
  printf("\n o mais novo ? o = %d", menor);
  	
 	
}
