#include <stdio.h>
#include <math.h>

int main(){
	
	float altura, peso;
	char sexo;
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu sexo (M ou F): ");
	scanf("%s", &sexo);
	
	if((sexo=='M') || (sexo=='m')){
		
		peso = (72.7 * altura) - 58;
		printf("\nO seu peso ideal e %.2f", peso, "kg\n");
		
	} else {
		
		if((sexo == 'F') || (sexo == 'f')){
			
			peso = (62.1 * altura) - 44.7;
			printf("\nO seu peso ideal e %.1f", peso, "kg\n");
			
		} else {
			
			printf("Valor invalido.");
			
		}		
		
	}
	
	return 0;
	
}
