#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int num, pares, impares;
	
	printf("Informe um n�mero:\n");
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
		printf("Informe um n�mero, ou digite 0 para finalizar:\n");
		scanf("%d", &num);
		
	}
	
	system("cls");
	printf("\n%d dos n�meros informados s�o pares e %d s�o �mpares.", pares, impares);
	return 0;
	
}
