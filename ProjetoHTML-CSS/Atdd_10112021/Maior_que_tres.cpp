/*Maior que três*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float numero;

int main(void){
	setlocale (LC_ALL, ""); // importa as variáveis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas
   	
	printf("Número: ");
	scanf("%f", &numero);
	if(numero > 3){
		printf("%0.0f", numero);
		
	}else{
		printf("Não é maior que 3");
	}
	
	return 0;
}
