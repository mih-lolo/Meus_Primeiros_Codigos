#include <stdio.h>

int main(){
	
	char nome[20];
	int idade, mensalidade;
	
	printf("Informe o seu nome: ");
	scanf("%s", &nome);
	
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	
	if(idade <= 18){
		
		mensalidade = 50;
		
	} else {
		
		if(idade <= 29){
			
			mensalidade = 70;
			
		} else {
			
			if(idade <= 45){
				
				mensalidade = 90;
				
			} else {
				
				if(idade <= 65){
					
					mensalidade = 130;
					
				} else {
					
					mensalidade = 170;
						
				}
								
			}
			
		}
		
	}
	
	printf("\nO seu nome e: %s\n", nome);
	printf("Sua idade e: %d anos\n", idade);
	printf("O valor da mensalidade de seu plano de saude e: %d reais\n", mensalidade);
	
	return 0;
		
}
