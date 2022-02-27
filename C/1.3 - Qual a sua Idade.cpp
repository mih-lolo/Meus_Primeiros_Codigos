#include <stdio.h>

int main (){
	
	int idade, idade_nova, ano_atual, ano_de_nascimento, idade_errada, ano_de_nascimento_correto;
	char satisfacao;
	
	printf("Insira a sua idade:\n");
	scanf ("%d", &idade);
	
	idade_nova = idade + 1;
	printf("Ano que vem voce tera %d anos.\n", idade_nova);
	
	printf("Insira em que ano a gente esta:\n");
	scanf ("%d", &ano_atual);
	
	ano_de_nascimento = ano_atual - idade;
	
	printf("Voce nasceu em %d.\n", ano_de_nascimento);
	
	printf("Se o seu ano de nascimento estiver errado, e porque voce nasceu depois do mes de maio, se este for o seu caso, entao digite 1\n");
	scanf ("%d", &idade_errada);
	
	ano_de_nascimento_correto = ano_atual - idade - 1;
	
	printf("Na verdade, voce nasceu em %d.\n", ano_de_nascimento_correto);
	
	printf("Gostou do jogo?\n");
	scanf ("%d", &satisfacao);
	
	printf("Obrigada!! Tambem gostei muito de te ter por aqui!");
	

	
	return 0;
	
	
}
