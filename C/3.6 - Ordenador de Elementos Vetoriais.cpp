#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetorB[10];
	int i, j, troca;
	
	for(i=0; i<10; i++){
		
		printf("Digite o valor do elemento %d:\n", i+1);
		scanf("%d", &vetorB[i]);
		
	}
	
	for(i=0; i<9; i++){
		
		for(j=i+1; j<10; j++){
			
			if(vetorB[i] > vetorB[j]){
				
				troca = vetorB[i];
				vetorB[i] = vetorB[j];
				vetorB[j] = troca;
			}
		}
	}
	
	printf("\nA ordem correta dos elementos é: ");
	
	for(i=0; i<10; i++){
		
		 printf("%d - ", vetorB[i]);
				
	}
	
	return 0;
	
}
