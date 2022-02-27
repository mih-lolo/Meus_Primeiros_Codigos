#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if(num % 5 == 0){
		
		printf("O numero e divisivel por 5");
		
	} else {
		
		printf("O numero nao e divisivel por 5");
				
	}
	
	return 0;
	
}
