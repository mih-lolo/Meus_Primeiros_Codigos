#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nprovas, codigo, cont, aprovados, reprovados;
	float nota, soma, media;

	printf("Digite o numero de provas da disciplina:\n");
	scanf("%d", &nprovas);
	
	printf("Digite o codigo do aluno:\n");
	scanf("%d", &codigo);

	aprovados = 0;
	reprovados = 0;

	while(codigo != 0){
		
		system("cls");
		
		printf("Aluno código - %d\n\n", codigo);
		
		for(cont = 1; cont <= nprovas; cont++){
			
			printf("Qual o valor da nota da prova %d?\n", cont);
			scanf("%f", &nota);

			soma = soma + nota;
			
		}
		
		media = (soma / nprovas);
		
		if(media >= 7){
			
			aprovados = aprovados + 1;
			
		}
		
		if(media < 7){
			
			reprovados = reprovados + 1;		
					
		}
		
		soma = 0;
		system("cls");
		printf("Digite o codigo do aluno:\n");
		scanf("%d", &codigo);	
	}
	
	system ("pause");
	system ("cls");

	printf("\nO número de alunos aprovados é: %d\n", aprovados);
	printf("\nE o número de alunos reprovados é: %d", reprovados);

}
