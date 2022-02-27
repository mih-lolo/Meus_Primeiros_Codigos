#include <stdio.h>

int main ()
{		
	char materia[10];
	float parcial, bimestral;
	
	printf("Qual a materia que voce quer consultar?\n");
	scanf ("%s", materia);
		
	printf("\nInsira a sua nota parcial:\n");
	scanf ("%f", &parcial);
	printf("Perfeito!\n");
	
	bimestral = 14 - parcial;
	
	printf("\nPara voce passar em %s,", materia);
	printf(" voce tera que tirar no minimo %0.1f na prova bimestral.\n", bimestral);
	
	return 0;
		
	}
