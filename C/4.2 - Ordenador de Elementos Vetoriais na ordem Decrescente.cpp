#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 3

int main(){
	
	int i, j, aux, VetorA[MAX];
	
	aux = 0;
	
	for(i=0;i<MAX;i++){
		
		VetorA[i] = 0;
	}
	
	printf("\nDigite 5 valores para o vetor A\n\n");
	
	for(i=0; i<MAX; i++){
		
		printf("Digite o valor %d:\n", i+1);
		scanf("%d", &VetorA[i]);
		fflush(stdin);
	}
	
	for (i=0;i<MAX-1; i++){
		for (j=i+1; j<MAX; j++){
			
			if(VetorA[i] < VetorA[j]){
				
				VetorA[i] = aux;
				VetorA[i] = VetorA[j];
				VetorA[j] = aux;	
			}		
		}	
	}
	
	for(i=0;i<MAX;i++){
		
		printf("%d ", VetorA[i]);
		
	}
	
	return 0; 
}
