#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int cont, i, j, cart, num[10];
	
	srand(time(NULL));
	
	printf("Informe o n�mero de cartelas que precisam ser impressas:\n");
	scanf("%d", &cart);
	system("cls");
	
	for(cont=1; cont<=cart; cont++){
	//Primeiro foi criado um loop de repeti��o para imprimir a quantidade de cartelas informadas
		
		printf("Cartela n� %d:\n", cont);
		
		for(i=0; i<10; i++){
		//Depois foi criado mais um la�o para atribuir todos os 10 n�meros aleat�rios para cada cartela
		
			num[i] = rand() % 99;
		}
	
		for(i=0; i<=9; i++){
		/*Pensando em fazer a verifica��o de cada n�mero para que nenhum deles se repita, foi criada uma estrutura de repeti��o aninhada com as vari�veis i e j.
		  Assim, p�de-se fazer a compara��o de igualdade entre um n�mero e outro, em sequ�ncia*/
		
			for(j=i+1; j<=10; j++){
			
				if(num[i] == num[j]){
					num[j] = rand() % 99;
					//Quando os dois n�meros comparados ca�a na condi��o de igualdade, o segundo n�mero era trocado por outro n�mero aleat�rio	
				}
			}
						
			printf("%d ", num[i]); /*Feito isso, todos os n�meros foram sendo impressos na tela conforme o �ndice i ia aumentando, at� que a condi��o de 
			ser menor que 10 fosse atingida*/
		}
		
		printf("\n\n");	//Por �ltimo, visando uma melhor rela��o usu�rio-programa, eu coloquei 2 quebras de linha		
	}
	
	return 0;		
			
}
		

