#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float notas[5], soma, media;
	int i;

	soma = 0;

	for(i=0; i<5; i++){
		
		printf("Digite a nota %d do aluno:\n", i+1);
		scanf("%f", &notas[i]);
		
		soma = soma + notas[i];
	}
		
	media = soma / 5;
	printf("\nA média anual do aluno é %.1f", media); 

	if (media < 5){
		
		printf("\nStatus: REPROVADO");
		
	} else {
		
		if (media  < 7){
			
			printf("\nStatus: EM RECUPERAÇÃO");
			
		} else {
			
				printf("\nStatus: APROVADO");		
		}	
	}
		
	return 0;
	
}
