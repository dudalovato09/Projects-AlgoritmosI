/* L� 5 notas, faz a m�dia e identifica maior e menor nota e em qual posi��o ela est�*/

#include<stdio.h>

int main(void)
{
	float notas[5], soma=0, media, maior, menor;
	int i, posicao_maior, posicao_menor;
	char nome[40];
	
	
	for(i=0 ; i<5 ; i++ ) // la�o para inicializar o vetor com 0 caso contr�rio pode ser usado float nota[5] = {0} 
	{
		notas[i] = 0;	
	}
	
	printf("\n Digite o nome do aluno: "); // cada caracter � um byte e para formar 1 caracter tem 8 bits
	fflush(stdin); // limpa o buffer do teclado para n�o ficar lixo ao ler a v�riavel  
	gets(nome);
	
	for(i=0 ; i<5 ; i++ ) // la�o para leitura do vetor notas 
	{
		printf("\n Digite a nota [%d]: ", i);
		scanf("%f", &notas[i]);	
		soma = soma + notas[i];		
	}
	
	media = soma / i; // pode dividir por 5 por�m como o i quando sair do for ter� 5 podemos usar ele sem precisar tirar um
	
	printf("\n Aluno(a): %s", nome);
	
	printf("\n\n Relatorio das notas: \n");
		
	for(i=0 ; i<5 ; i++ ) // la�o para imprimir as notas do vetor 
	{
		printf("\n Nota [%d] = %.2f", i, notas[i]);		
	}
	
	printf("\n\n Relatorio invertido das notas: \n");
		
	for(i=4 ; i>=0 ; i-- ) // la�o para imprimir as notas do vetor 
	{
		printf("\n Nota [%d] = %.2f", i, notas[i]);		
	}
	
	// la�o para encontrar a maior nota
	maior = notas[0];
	posicao_maior = 0;
	for(i=0 ; i<5 ; i++ )  
	{
		if(notas[i] > maior)
		{
			maior = notas[i];
			posicao_maior = i;
		}		
	}
	
	// la�o para encontrar a menor nota
	menor = notas[0];
	posicao_menor = 0;
	for(i=0 ; i<5 ; i++ )  
	{
		if(notas[i] < menor)
		{
			menor = notas[i];
			posicao_menor = i;
		}		
	}
		
	printf("\n\n Total da soma das notas: %.2f", soma);
	printf("\n Total da media das notas: %.2f", media);
	printf("\n A maior nota e = %.2f na posicao %d", maior, posicao_maior);
	printf("\n A menor nota e = %.2f na posicao %d", menor, posicao_menor);
	
	
	return 0;
}
