/*Multa do peixe*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float peixe,p_kg,multa;

int main(void){
	setlocale (LC_ALL, ""); // importa as variáveis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas
   	
	printf("Peixe em KG: ");
	scanf("%f", &peixe);
	if(peixe > 50){
		p_kg= peixe-50;
		printf("Aplicação da multa");
		multa = p_kg*4;
		printf(" %0.0f", multa);
		
	}else{
		printf("Não passou do limite");
	}
	
	return 0;
}
