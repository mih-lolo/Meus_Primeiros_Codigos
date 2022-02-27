#include <stdio.h>

int main(){
	
	float salario, aumento, novo_salario;
	int op;
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o seu codigo: ");
	scanf("%d", &op);
	
	switch(op){
		
		case 1: aumento = salario * 0.4;
		        novo_salario = salario + aumento;
		        printf("\nO seu cargo e de SERVENTE, voce tera %.2f reais de aumento ", aumento);
		        printf("e por isso seu novo salario sera de %.2f ", novo_salario);
		        printf("reais.");
		        break;
		        
		case 2: aumento = salario * 0.35;
		        novo_salario = salario + aumento;
		        printf("\nO seu cargo e de PEDREIRO, voce tera %.2f reais de aumento ", aumento);
		        printf("e por isso seu novo salario sera de %.2f ", novo_salario);
		        printf("reais.");
		        break;
		        
		case 3: aumento = salario * 0.2;
		        novo_salario = salario + aumento;
		        printf("\nO seu cargo e de MESTRE DE OBRAS, voce tera %.2f reais de aumento ", aumento);
		        printf("e por isso seu novo salario sera de %.2f ", novo_salario);
		        printf("reais.");
		        break;
		        
		case 4: aumento = salario * 0.1;
		        novo_salario = salario + aumento;
		        printf("\nO seu cargo e de TECNICO DE SEGURANCA, voce tera %.2f reais de aumento ", aumento);
		        printf("e por isso seu novo salario sera de %.2f ", novo_salario);
		        printf("reais.");
		        break;	
		
	}
	
	return 0;
}
