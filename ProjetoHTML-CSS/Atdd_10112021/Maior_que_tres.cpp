/*Maior que tr�s*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float numero;

int main(void){
	setlocale (LC_ALL, ""); // importa as vari�veis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das d�vidas
   	
	printf("N�mero: ");
	scanf("%f", &numero);
	if(numero > 3){
		printf("%0.0f", numero);
		
	}else{
		printf("N�o � maior que 3");
	}
	
	return 0;
}
