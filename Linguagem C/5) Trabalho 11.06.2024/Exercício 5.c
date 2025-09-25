/*
Grupo: Bruno, Cleiton, Eduarda Lovato

A empresa TABAJARA Ltda deseja um programa para realizar uma pesquisa entre seus funcionários, coletando dados sobre o salário e 
número de filhos de seus funcionários para gerenciar os custos com relação aos dependentes de seus colaboradores. Assim, o usuário 
do programa deverá informar a quantidade de funcionários que deseja registrar a pesquisa, sendo dentro do intervalo (>0 e <=100). 
Se for inserido um valor fora deste intervalo, deve aparecer a mensagem “valor inválido – redigite” e a leitura deve ser realizada 
novamente até um valor válido ser informado.*/

#include<stdio.h>

int main (void){
		
	float salario, bonus, percentual [4], bonusT;
	int i, numFil, numFun;
	char clas;
	
	int qntC[4] = {0, 0, 0, 0};
	float qntB[4] = {0.0, 0.0, 0.0, 0.0};
	
	do{
	
	printf("Digite a quantidade de funcionarios para a pesquisa: ");
	scanf("%d", &numFun);
		if(numFun <= 0 || numFun > 100){
			printf("Valor invalido!! Redigite (Valor de 1 a 100)\n");	
		}
	
	}while(numFun <= 0 || numFun > 100);
	
	for(i = 0; i < numFun;i++){
		printf("\nInforme o salario do funcionario [%d] R$ ", i + 1);
		scanf("%f", &salario);
		
		printf("Informe o numero de filhos do funcionario [%d]: ", i + 1);
		scanf("%d", &numFil);
		
		if (salario <= 1000.00){
			clas = 'D';
			bonus = 20.00;
		} else if (salario <= 2000.00){
			clas = 'C';
			bonus = 15.00;
		} else if (salario <= 3000.00){
			clas = 'B';
			bonus = 10.00;
		} else{
			clas = 'A';
			bonus = 5.00;
		}
		
		printf("\n----DETALHES DO FUNCIONARIO----\n");
		printf("Salario R$ %2.f\n", salario);
		printf("Classificacao: %c\n", clas);
		printf("Numero de filhos: %d\n", numFil);
		printf("Bonus por filho R$ %2.f\n", bonus);
		bonusT = bonus * numFil;
		printf("Bonus Total R$ %2.f\n", bonusT);
		
		switch (clas) {
            case 'A':
                qntC[0]++;
                qntB[0] += bonusT;
                break;
            case 'B':
                qntC[1]++;
                qntB[1] += bonusT;
                break;
            case 'C':
                qntC[2]++;
                qntB[2] += bonusT;
                break;
            case 'D':
                qntC[3]++;
                qntB[3] += bonusT;
                break;
        }
	}
	
	for(i = 0;i < 4; i++){
		percentual[i] = (qntC[i] / numFun) * 100.0;
	}
	
	printf("\n----RELATORIO FINAL----\n");
	printf("Total de Funcionarios - Classificacao A: %d %2.f Total R$ %2.f\n", qntC[0], percentual[0], qntB[0]);
	printf("Total de Funcionarios - Classificacao B: %d %2.f Total R$ %2.f\n", qntC[1], percentual[1], qntB[1]);
	printf("Total de Funcionarios - Classificacao C: %d %2.f Total R$ %2.f\n", qntC[2], percentual[2], qntB[2]);
	printf("Total de Funcionarios - Classificacao D: %d %2.f Total R$ %2.f\n", qntC[3], percentual[3], qntB[3]);
	
	return 0;
}
