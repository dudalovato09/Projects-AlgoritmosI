/*Exemplo aula 1, comousar comandos para conjuntos de caracter*/

#include<stdio.h>
#include<locale.h> // para colocar em portugues
int main(void)
{
	char sexo;
	char nome[30];
	float nota1,nota2;
	setlocale(LC_ALL,"portuguese"); // ou setlocale (0, "portuguese")
	printf("\n Digite o nome do aluno(a):");
	fflush(stdin);
	gets(nome);
	printf("\n Informe o Sexo (F/M):");
	fflush(stdin);
	sexo=getchar();
	printf("\n Infrome a nota 1:");
	scanf("%f",&nota1); // Digitar com vígula e não ponto "portuguese"
	printf("\n Informe a nota 2:");
	scanf("%f",&nota2);
	printf("\n %s é do sexo %c, possui media = %.2f", nome, sexo,(nota1+nota2)/2);
	return 0;
}
