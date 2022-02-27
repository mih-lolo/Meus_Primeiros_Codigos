#include <stdio.h>
#include <math.h>

int main(){
	
	int num, maior, menor;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num);
	
	maior = num;
	menor = num;
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num);
	
	if(num > maior){
		
		maior = num;
	}
    
    if(num < menor){
    	
    	menor = num;
	}
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &num);
	
	if(num > maior){
		
		maior = num;
	}
	
	if(num < menor){
		
		menor = num;
	}
	
	printf("Digite o quarto numero: ");
	scanf("%d", &num);
	
	if(num > maior){
		
		maior = num;
	}
	
	if(num < menor){
		
		menor = num;
	}
	
	printf("Digite o quinto numero: ");
	scanf("%d", &num);
	
	if(num > maior){
		
		maior = num;
	}
	
	if(num < menor){
		
		menor  = num;
	}
	
	printf("\nO maior numero e %d ", maior);
	printf("e o menor numero e %d.", menor);
	return 0;
	
	}
