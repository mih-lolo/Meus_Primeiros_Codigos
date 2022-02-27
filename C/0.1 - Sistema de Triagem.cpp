#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	FILE *saida;
	
	char nome[50], cpf[18], opcao;
	int  cont=0,comp, idade, sexo;
	
	printf("SISTEMA TRIAGEM\n");
	printf("RESPONDA O QUESTIONÁRIO\n");
	
	printf("\nDigite o seu nome:\n");
	scanf ("%50[^\n]s",&nome);
	fflush(stdin);
	
	printf("\nDigite o seu CPF:\n");
	scanf(" %12[^\n]s",&cpf);
	fflush(stdin);
	
	saida = fopen (nome, "w");
	fprintf (saida,"Nome: %s \n",nome);
	fprintf (saida,"CPF: %s\n", cpf);
	
	printf("\nDigite a sua idade:\n");
	scanf("%d",&idade);
	fflush(stdin);
	
	fprintf (saida,"Idade: %d\n", idade);
	sexer:
	
	printf("\nDigite o seu sexo: (1 - Masculino; 2 - Feminino)\n");
	scanf("%d", &sexo);
	fflush(stdin);
	
	switch (sexo){
		
		case 1: 
			fprintf (saida,"Sexo: Masculino\n");
			break;
			
		case 2:
	   		fprintf (saida,"Sexo: Feminino\n");
	   		break;
	   		
	   	default:
	   		printf("Valor inválido.\n");
	   		goto sexer;
	   		break;
	}
	
	system("cls");
	
	printf("\nAGORA RESPONDA O QUESIONÁRIO SOBRE SINTOMAS DO COVID\n\n");
	aqui:
		
	printf("Tem febre? [S] - SIM / [N] - NÃO \n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+5;
			break;
		case 's':
			cont=cont+5;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			goto aqui;
	}
	
	system("cls");
	aqui1:
		
	printf("Tem dor de cabeça? [S] - SIM / [N] - NÃO \n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			goto aqui1;
	}
	
	system("cls");
	aqui2:
	
	printf("Tem secreção nasal ou espirros? [S] - SIM / [N] - NÃO \n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+1;
			printf("%d \n",cont);
			break;
		case 's':
			cont=cont+1;
			printf("%d \n",cont);
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			goto aqui2;
	}
	
	system("cls");
	aqui3:
		
	printf("Tem dor/ irritação na garganta? [S] - SIM / [N] - NÃO \n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			printf("------------------------------------\n");
			goto aqui3;
	}
	
	system("cls");
	aqui4:
	
	printf("Tem tosse seca? [S] - SIM / [N] - NÃO\n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+3;
			break;
		case 's':
			cont=cont+3;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n",setlocale(LC_ALL,"Portuguese"));
			printf("TENTE NOVAMENTE\n",setlocale(LC_ALL,"Portuguese"));
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));
			goto aqui4;
	}
	
	system("cls");
	aqui5:
		
	printf("Tem dificuldade respiratória? [S] - SIM / [N] - NÃO\n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+10;
			break;
		case 's':
			cont=cont+10;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			printf("------------------------------------\n",setlocale(LC_ALL,"Portuguese"));	
			goto aqui5;
	}
	
	system("cls");
	aqui6:
		
	printf("Tem dores no corpo? [S] - SIM / [N] - NÃO\n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			printf("------------------------------------\n");
			goto aqui6;
	}
	
	system("cls");
	aqui7:
		
	printf("Tem diarréia? [S] - SIM / [N] - NÃO\n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+1;
			break;
		case 's':
			cont=cont+1;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			printf("------------------------------------\n");			
			goto aqui7;
	}
	
	system("cls");
	aqui8:
		
	printf("Esteve em contato, nos últimos 14 dias, com alguém diagnosticado com Covid-19? [S] - SIM / [N] - NÃO\n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+10;
			break;
		case 's':
			cont=cont+10;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			printf("------------------------------------\n");			
			goto aqui8;
	}
	
	system("cls");
	aqui9:
		
	printf("Esteve em locais com grande aglomeração? [S] - SIM / [N] - NÃO\n");
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		case 'S':
			cont=cont+3;
			break;
		case 's':
			cont=cont+3;
			break;
		case 'N':
			cont=cont+0;
			break;
		case 'n':
			cont=cont+0;
			break;
		default:
			printf("OPÇÃO INVÁLIDA \n");
			printf("TENTE NOVAMENTE\n");
			printf("------------------------------------\n");			
			goto aqui9;
	}
	
	system("cls");
	
	for (comp=0; comp<10; comp++){
		printf("Aguarde!\n");
		system("cls");
	}

	fflush(stdin);
	printf("--------------------------------------\n");
	printf("RESUMO DO PACIENTE\n");
	printf("--------------------------------------\n");
	printf("Nome: %s \n",nome);
	printf("--------------------------------------\n");
	printf("IDADE: %d\n",idade);
	printf("--------------------------------------\n");
	
	if (sexo == 1) {
		printf ("Sexo: Masculino\n");
	}
	if (sexo==2){
		printf ("Sexo: Feminino\n");
	}
	printf("--------------------------------------\n");
	
	printf("Seu resultado foi: %d pts\n", cont);
	fprintf (saida,"Seu resultado foi: %d pts\n", cont);
	
	printf("--------------------------------------\n");
	
	if ((cont>=0)&&(cont<=9)){
		printf("Você vai ser encaminhado para a ala de: BAIXO RISCO\n");
		fprintf(saida,"Você vai ser encaminhado para a ala de: BAIXO RISCO\n");	
	}
	
	if ((cont>9)&&(cont<=19)){
		printf("Você vai ser encaminhado para a ala de: MÉDIO RISCO\n");
		fprintf(saida,"Você vai ser encaminhado para a ala de: MÉDIO RISCO\n");	
	}
	
	if (cont>19){
		printf("Você vai ser encaminhado para a ala de: ALTO RISCO\n");
		fprintf(saida,"Você vai ser encaminhado para a ala de: ALTO RISCO\n");	
	}
	
	printf("--------------------------------------\n");
	
	fclose (saida);
	system("pause");
	system("CLS");

	return 0;
}
