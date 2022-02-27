#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 5 

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int iguais, i, j, vetorA[MAX], vetorB[MAX];
	
	for(i=0;i<MAX;i++){
		
		vetorA[i] = 0;
		vetorB[i] = 0;		
	}
	
	for(i=0;i<MAX;i++){
		
		printf("Digite o valor da posição %d do vetor A:\n", i+1);
		scanf("%d", &vetorA[i]);
	}
	
	printf("\n");
	
	for(i=0;i<MAX; i++){
		
		printf("Digite o valor da posição %d do vetor B:\n", i+1);
		scanf("%d", &vetorB[i]);
	}
	
	for(i=0;i<MAX;i++){
		
		for(j=0; j < MAX; j++){
			
			if(vetorA[i] == vetorB[j]){
				iguais++;		
			}	
		}
		
		if(iguais < 1){
			
			printf("Elementos diferentes:");
			printf("%d ", vetorA[i]);
		}
		
		iguais = 0;
	}
	
	return 0;
}
