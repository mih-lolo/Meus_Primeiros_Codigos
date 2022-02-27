#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int i, j, num1, num2;
	
	printf("Você quer fazer uma matriz com quantas linhas?\n");
	scanf("%d", &num1);
	
	printf("E quantas colunas?\n");
	scanf("%d", &num2);	
	
	printf("\n");
	
	for(i=0; i<num1; i++){
		
		for(j=0; j<num2; j++){
			
			printf("* ");
			
		}
		
	printf("\n");	
		
	}
	
	return 0;
	
}
