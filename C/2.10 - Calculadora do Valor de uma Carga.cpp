#include <stdio.h>
#include <math.h>

int main(){
	
	int codigoEst, codigoCarg;
	float pesoTon, pesoKg, tax_imp, imposto, valor_carga, valor_total;
	
	printf("Digite o codigo do estado de origem da carga: ");
	scanf("%d", &codigoEst);
	
	printf("\nDigite o peso da carga, em toneladas: ");
	scanf("%f", &pesoTon);
	
	printf("\nDigite o codigo da carga: ");
	scanf("%f", codigoCarg);
	
	switch(codigoEst){
		
		case 1: tax_imp = 0.2;
		        break;
		        
	    case 2: tax_imp = 0.15;
	            break;
	            
	    case 3: tax_imp = 0.1;
	            break;
	            
	    case 4: tax_imp = 0.05;
	            break;
	            
	    default: printf("Codigo Invalido");
		      	
	}

	pesoKg = pesoTon * 1000;
		
	if((codigoCarg < 10) || (codigoCarg > 40)){
		
		printf("Codigo Invalido.");
		
	} else {
		
		if(codigoCarg <= 20){
		
		valor_carga = pesoKg * 180;
		
	    } else {
		
		    if(codigoCarg <= 30){
			
			valor_carga = pesoKg * 120;
			
		    } else {
		    	
			    valor_carga = pesoKg * 230;
			    
		    }
		}
	}
	
	imposto = valor_carga * tax_imp;
	valor_total = imposto + valor_carga;
	
	printf("Peso da carga: %.1fkg\n", pesoKg);
	printf("Preco da carga: %.2f reais\n", valor_carga);
	printf("Valor do imposto: %.2f reais\n", imposto);
	printf("Valor total da carga: %.2f reais\n", valor_total);
	
	return 0;
}
