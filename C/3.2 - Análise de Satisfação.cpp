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
	
			printf("\nQual a sua avalia��o do produto?\n\n1 - Satisfat�rio\n2 - Indiferente\n3 - Insatisfat�rio\n\n");
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
	
	printf("\nO n�mero de clientes que respondeu satisfat�rio foi: %d", qntds);
	printf("\nA m�dia da idade entre os que responderam satifat�rio �: %.1f anos", midade);
	printf("\nE o n�mero de clientes que respondeu insatisfat�rio foi: %d", qntdi);
	
	return 0;
	
}
