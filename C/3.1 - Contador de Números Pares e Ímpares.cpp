#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int num, pares, impares;
	
	printf("Informe um número:\n");
	scanf("%d", &num);
	
	pares = 0;
	impares = 0;
	
	while(num != 0){
		
		if(num % 2 == 0){
			
			pares = pares + 1;
			
		} else {
			
			impares = impares + 1;
		}
		
		system("cls");
		printf("Informe um número, ou digite 0 para finalizar:\n");
		scanf("%d", &num);
		
	}
	
	system("cls");
	printf("\n%d dos números informados são pares e %d são ímpares.", pares, impares);
	return 0;
	
}
