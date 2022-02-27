#include <stdio.h>
#include <math.h>

int main(){
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if(num % 3 == 0){
		
		printf("\nO numero %d e divisivel por 3.", num);
	} 
	if(num % 7 == 0){
		
		printf("\nO numero %d e divisivel por 7.", num);
	}
	
	return 0;
	
}
