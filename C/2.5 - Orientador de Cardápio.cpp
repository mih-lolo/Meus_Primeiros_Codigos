#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int op, total;
	
	printf("Escolha um prato:\n\n1 - Italiano\n2 - Japones\n3 - Salvadorenho\n\n");
	scanf("%d", &op);
	total = 0;
	
	switch(op){
		
		case 1: total = total + 750;
		break;
		
		case 2: total = total + 324;
		break;
		
		case 3: total = total + 545;
		break;
		
		default: printf("\nOpcao invalida.\n");
		break;
	
	}
	
	printf("\nEscolha uma bebida:\n\n1 - Cha\n2 - Suco de laranja\n3 - Refrigenrante\n\n");
	scanf("%d", &op);
	
	switch(op){
		
		case 1: total = total + 30;
		break;
		
		case 2: total = total + 80;
		break;
		
		case 3: total = total + 90;
		break;
		
		default: printf("\nOpcao invalida.\n");
		break;
		
	}
	
	printf("\nNo total, voce ira consumir %d calorias.", total);
	
	return 0;	
	
}
