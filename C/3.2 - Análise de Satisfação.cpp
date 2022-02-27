#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int idade, opiniao, qntds, qntdi;
	float midade;
	
	printf("Qual a sua idade?\n");
	scanf("%d", &idade);
	
	midade = 0;
	qntds = 0;
	qntdi = 0;
	
	while(idade != 0){
	
		do{
	
			printf("\nQual a sua avaliação do produto?\n\n1 - Satisfatório\n2 - Indiferente\n3 - Insatisfatório\n\n");
			scanf("%d", &opiniao);
			system("cls");		
		
		} while (opiniao != 1 && opiniao != 2 && opiniao != 3);
		
		switch(opiniao){
			
			case 1:
				midade = midade + idade;
				qntds++;
				break;
					
			case 3:
				qntdi++;
				break;	
		
		}
		
		printf("Qual a sua idade?\n");
		scanf("%d", &idade);	
			
	}
	
	midade = midade / qntds;
	
	system("cls");
	
	printf("\nO número de clientes que respondeu satisfatório foi: %d", qntds);
	printf("\nA média da idade entre os que responderam satifatório é: %.1f anos", midade);
	printf("\nE o número de clientes que respondeu insatisfatório foi: %d", qntdi);
	
	return 0;
	
}
