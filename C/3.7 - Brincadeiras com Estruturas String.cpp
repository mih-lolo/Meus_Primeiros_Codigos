#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], sobrenome[30];
	int tamanho;
	
	printf("Digite seu nome:\n");
	gets(nome);
	
	printf("\nDigite seu sobrenome:\n");
	gets(sobrenome);
	
	tamanho = strlen(nome);
	
	strcat(nome, " ");
	strcat(nome, sobrenome);
	
	if(strstr(sobrenome, nome) == 0){
		
		printf("\nAgora o sobrenome está incluso na variável nome.\n");
		
	}
	
	printf("\nSeu nome tem %d letras.\n", tamanho);
	printf("\nSeu nome completo é: %s", nome);
	
	strupr(nome);
	
	printf("\nNome em maiúsculo: %s", nome);
	
	strlwr(nome);
	
	printf("\nNome em minúsculo: %s", nome);
	
	return 0;
	
	
}
