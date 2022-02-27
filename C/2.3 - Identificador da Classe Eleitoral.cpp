#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Informe a sua idade:\n");
	scanf("%d", &idade);
	
	if(idade < 16){
		
		printf("\nNao eleitor.\n");
		
	} else {
		
		if(idade < 18 || idade > 65){
			
			printf("\nEleitor facultativo.\n");
			
		} else {
			
			printf("\nEleitor obrigatorio.\n");
		}
		
	}
	
	return 0;
	
}
