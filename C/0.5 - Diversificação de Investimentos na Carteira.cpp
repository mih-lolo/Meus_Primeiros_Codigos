#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

	void Perc_invest_Pretendidos (float *perc, int n){
		
		int i;
		
		printf("\nPercentuais pretendidos para cada tipo de investimento:\n");
		
		for(i=0;i<n;i++){
			
			printf("%d - %.2f%%\n", i+1, perc[i]);	
		}
	}


	void Valores_Ja_Investidos (float *perc_invest, int n){
		
		int i;
		printf("\nPercentual dos valores já investidos em cada categoria:\n");

		for(i=0;i<n;i++){
			
			printf("%d - %.2f%%\n", i+1, perc_invest[i]);
		}
	}
	
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor[5], percentual[5], percentual_invest[5], difer[5], soma, maior;
	int i, num;
	bool primeiro;

	printf("Opções de investimento:\n\n");
	printf("1 - CDBs\n");
	printf("2 - Ações\n");
	printf("3 - Fundos Imobiliários\n");
	printf("4 - Stocks\n");
	printf("5 - Reits\n");

	do{
		soma = 0;

		for(i=0; i<5; i++){
			
			printf("\nDigite o percentual de investimento pretendido para a categoria %d:\n", i+1);
			printf("(digite um valor entre 0 e 100, caso não tenha interesse em investir em determinada categoria, apenas digite 0)\n");
			scanf("%f", &percentual[i]);
			fflush(stdin);
			soma = soma + percentual[i];	
		}
	
		if (soma != 100){
			
			printf("A soma dos percentuais digitados não alcança o total de 100%. ");
			printf("Por favor, digite os percentuais pretendidos para cada categoria novamente.");	
		}	
			
	} while(soma != 100);

	soma = 0;

	for(i=0;i<5;i++){
		
		printf("\nDigite o valor investido na categoria %d:\n", i+1);
		scanf("%d", &valor[i]);
		fflush(stdin);
		soma = soma + valor[i];	
	}

	for(i=0;i<5;i++){
		percentual_invest[i] = (valor[i] * 100) / soma;
	}

	Perc_invest_Pretendidos (percentual, 5);
	Valores_Ja_Investidos (percentual_invest, 5);
	primeiro = true;

	for(i=0;i<5;i++){
		
		difer[i] = (percentual[i] - percentual_invest[i]);
		
		if(primeiro == true){
			
			maior = difer[i];
			num = i;
			primeiro = false;	
		}
			
		if(difer[i] < 0){
		 	
			 difer[i] = difer[i] * (-1);		
		}
			
		if(difer[i] > maior){
		
			maior = difer[i];
			num = i;	
		}
	}

	switch (num){
		case 1: 
			printf("\nA categoria mais desbalanceada é: CDBs");
			break;
		case 2: 
			printf("\nA categoria mais desbalanceada é: Ações");
			break; 
		case 3: 
			printf("\nA categoria mais desbalanceada é: Fundos Imobiliários");
			break; 
		case 4: 
			printf("\nA categoria mais desbalanceada é: Stocks");
			break; 
		case 5: 
			printf("\nA categoria mais desbalanceada é: Reits");
			break; 	
	}
	
} 
		
