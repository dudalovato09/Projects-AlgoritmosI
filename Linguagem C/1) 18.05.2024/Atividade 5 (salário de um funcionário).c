/* Escrever um algoritmo que leia a matricula de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora. 
Calcular o salário total deste funcionário. Escrever a sua matricula e o seu salário total.*/

#include<stdio.h>
int main(void)
{
	int matricula;
	float horas, salario_h, salario_t;
	printf("\n Digite a matricula do funcionario: ");
	scanf("%d", &matricula);
	printf("\n Digite o numero de horas trabalhadas deste funcionario: ");
	scanf("%f", &horas);
	printf("\n Digite quanto este funcionario recebe por hora: ");
	scanf("%f", &salario_h);
	salario_t = horas*salario_h;
	printf("\n Matricula: %d", matricula);
	printf("\n Salario total: %.2f", salario_t);
	return 0;
	
}
