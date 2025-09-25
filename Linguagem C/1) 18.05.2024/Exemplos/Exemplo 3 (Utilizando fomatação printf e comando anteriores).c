#include<stdio.h>
int main(void)
{
	float salario1, salario2, salario3, soma, media;
	char nome[40];
	int codigo;
	printf("Digite o nome: ");
	fflush(stdin);
	gets(nome);
	printf("Digite o codigo: ");
	scanf("%d", &codigo);
	printf("Primeiro salario: ");
	scanf("%f", &salario1);
	printf("Segundo salario: ");
	scanf("%f", &salario2);
	printf("Terceiro salario: ");
	scanf("%f", &salario3);
	soma= salario1+salario2+salario3;
	media= soma/3;
	printf("\n=======================================");
	printf("\n Nome  : %30s",nome);
	printf("\n Codigo: %30d",codigo);
	printf("\n \t Salario 1: %10.1f",salario1);
	printf("\n \t Salario 2: %10.1f",salario2);
	printf("\n \t Salario 3: %10.1f",salario3);
	printf("\n\n %.1f + %.1f + %.1f = %.1f", salario1, salario2, salario3, soma);
	printf("\n Media do funcionario = %.1f", media);
	printf("\n=======================================");
	return 0;
}
