#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma, qntd, maior, menor, pares, impares;
	float media;
	bool primeiro;
	
	primeiro = true;
	qntd = 0;
	pares = 0;
	impares = 0;
	media = 0;
	
	printf("Informe um n�mero:\n");
	scanf("%d", &num);
	
	while(num != 0){
	
		if(num != 0){
			qntd++;	
		}
		
		if(primeiro == true){
		
			maior = num;
			menor = num;
			primeiro = false;
		
		}
	
		if(num > maior){
			maior = num;
		}
	
		if(num < menor){
			menor = num;
		}
	
		if(num % 2 == 0){
			pares++;
		} else {
			impares++;
		}
	
		media = media + num;
		
		printf("Informe um n�mero:\n");
		scanf("%d", &num);
		system("cls");	
		
	}	
	
	media = media / qntd;
	
	printf("\nA m�dia dos valores �: %.2f\n", media);
	printf("O maior valor �: %d\n", maior);
	printf("O menor valor �: %d\n", menor);
	printf("A quantidade de n�meros pares �: %d\n", pares);
	printf("A quantidade de n�meros �mpares �: %d\n", impares);
	
	return 0;
		
}
