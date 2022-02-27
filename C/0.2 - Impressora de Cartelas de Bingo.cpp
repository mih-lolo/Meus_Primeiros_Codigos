#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int cont, i, j, cart, num[10];
	
	srand(time(NULL));
	
	printf("Informe o número de cartelas que precisam ser impressas:\n");
	scanf("%d", &cart);
	system("cls");
	
	for(cont=1; cont<=cart; cont++){
	//Primeiro foi criado um loop de repetição para imprimir a quantidade de cartelas informadas
		
		printf("Cartela nº %d:\n", cont);
		
		for(i=0; i<10; i++){
		//Depois foi criado mais um laço para atribuir todos os 10 números aleatórios para cada cartela
		
			num[i] = rand() % 99;
		}
	
		for(i=0; i<=9; i++){
		/*Pensando em fazer a verificação de cada número para que nenhum deles se repita, foi criada uma estrutura de repetição aninhada com as variáveis i e j.
		  Assim, pôde-se fazer a comparação de igualdade entre um número e outro, em sequência*/
		
			for(j=i+1; j<=10; j++){
			
				if(num[i] == num[j]){
					num[j] = rand() % 99;
					//Quando os dois números comparados caía na condição de igualdade, o segundo número era trocado por outro número aleatório	
				}
			}
						
			printf("%d ", num[i]); /*Feito isso, todos os números foram sendo impressos na tela conforme o índice i ia aumentando, até que a condição de 
			ser menor que 10 fosse atingida*/
		}
		
		printf("\n\n");	//Por último, visando uma melhor relação usuário-programa, eu coloquei 2 quebras de linha		
	}
	
	return 0;		
			
}
		

