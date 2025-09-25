/*Grupo: Eduarda Lovato e Cleiton Muniz*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	
	char codigo[10], classificacao;
	float valor_Km, km[10], desconto, valor_corrida, valor_desconto, valor_total, total_motorista, media_final;
	float total_a = 0, total_b = 0, total_c = 0, porcentagem_a, porcentagem_b, porcentagem_c;
	int i;
	

	
	for(i = 0; i < 4; i++){
	printf("\n Informe o código da corrida que você deseja (A, B ou C): ");
	fflush(stdin);
	scanf("%c", &codigo[i]);
	
	printf("\n Digite a distância em km que você irá percorrer: ");
	scanf("%f", &km[i]);
	
	if(codigo[i] == 'A'){ // Mosta o valor que irá pagar de acoro com a classificação	
		valor_Km = 5.0;
		total_a ++;
		classificacao = 'A';
				
	}else 
		if(codigo[i] == 'B'){
		valor_Km = 6.5;
		classificacao = 'B';
		total_b ++;
		
	}else 
		if(codigo[i] == 'C'){	
		valor_Km = 8.0;
		classificacao = 'C';
		total_c ++;
		
	}else{
	     valor_Km = 0.0;
	     
	}
	
	valor_corrida = valor_Km * km[i]; //Cacula o valor da viagem 
	
	if(valor_corrida >= 25){  //Calcula o valor do desconto do valor da viagem 
		
		desconto = 0.15;
		valor_desconto = (valor_corrida * desconto);
		
	}else{
		
		desconto = 0.10;
		valor_desconto	= (valor_corrida * desconto);
	}
	
	valor_total = valor_corrida - valor_desconto;  //Cacula o valor do desconto da viagem 
	
	printf("\n Valor da sua corrida R$ %.2f\n", valor_corrida);
	printf("\n Valor do desconto que você terá R$ %.2f\n", valor_desconto);
	printf("\n Valor total R$ %.2f\n", valor_total);
	
	total_motorista += valor_total;
	
	}

	media_final = total_motorista / 10; //Calcula qual a média do valor que o motorista recebeu
	
	printf("\nRELATÓRIO\n");
	printf("Valor do motorista R$ %.2f\n",total_motorista);
	printf("Média dos valores  R$ %.2f\n",media_final);
	
	porcentagem_a = (total_a / 10) * 100; //Calcula a porcentagem das classificações 
	porcentagem_b = (total_b / 10) * 100;
	porcentagem_c = (total_c / 10) * 100;
		
	printf("\nRELATORIO POR TIPO DE CORRIDA\n");
	printf("Total de corridas A:  %.2f %%\n", porcentagem_a);
	printf("Total de corridas B:  %.2f %%\n", porcentagem_b);
	printf("Total de corridas C:  %.2f %%\n", porcentagem_c);
	
	
	return 0;
	
}
 
