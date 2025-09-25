/* 
Grupo: Bruno, Cleiton, Eduarda Lovato.

ler 6 valores inteiros e armazene em um vetor de inteiros. Contar quantos valores são pares e quantos são impares.
 Imprima na tela todos os valores do vetor  e o total de valores pares e ímpares calculados.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int main (void)
 {
	int N[6], i, par = 0, impar = 0;
	
	for(i=0 ; i<6 ; i++ )  
	{
		printf("\n Digite a nota [%d]: ", i);
		scanf("%d", &N[i]);	
		
		if(N[i] % 2 == 0){
			par++;	
		}else{
			impar++;	
		}	
	}
	 
	printf("\n Numeros do vetor: \n");
	for (int i = 0; i < 6; i++) {
        printf(" %d", N[i]);
    }
    
	printf("\n Total de pares = %d", par);
	printf("\n Total de impares = %d", impar);
	
	return 0;
 }
