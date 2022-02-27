#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int op;
	
	printf("Digite o numero deste mes: ");
	scanf("%d", &op);
	
	switch(op){
		
		case 1: printf("\nEstamos no mes de Janeiro.");
		break;
		
		case 2: printf("\nEstamos no mes de Fevereiro.");
		break;
		
		case 3: printf("\nEstamos no mes de Marco.");
		break;
		
		case 4: printf("\nEstamos no mes de Abril.");
		break;
		
		case 5: printf("\nEstamos no mes de Maio.");
		break;
		
		case 6: printf("\nEstamos no mes de Junho.");
		break;
		
		case 7: printf("\nEstamos no mes de Julho.");
		break;
		
		case 8: printf("\nEstamos no mes de Agosto.");
		break;
		
		case 9: printf("\nEstamos no mes de Setembro.");
		break;
		
		case 10: printf("\nEstamos no mes de Outubro.");
		break;
		
		case 11: printf("\nEstamos no mes de Novembro.");
		break;
		
		case 12: printf("\nEstamos no mes de Dezembro.");
		break;
		
		default: printf("Valor invalido.");
		break;
	}
	
	return 0;
	
}
