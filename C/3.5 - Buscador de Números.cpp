#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[10];
	int i, acha, busca;
	
	for(i=0; i<10; i++){
		
		printf("Digite o valor do elemento %d:\n", i);
		scanf("%d", &vetorA[i]);
		system("cls");
	}
	
	printf("Qual o valor que você quer buscar?\n");
	scanf("%d", &busca);
	
	i = 0;
	acha = 0;
	
	while ((acha == 0) && (i < 10)){
		
		if(vetorA[i] == busca){
			
			acha = 1;
			
		} else {
			
			i++;
			
		}
		
	}
	
	printf("\nO valor %d se localiza na posição %d do vetor.", busca, i);
	return 0;
	
}
