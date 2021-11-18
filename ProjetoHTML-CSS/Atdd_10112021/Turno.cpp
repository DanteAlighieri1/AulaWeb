/*Seu Turno*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float horario;

int main(void){
	setlocale (LC_ALL, ""); // importa as variáveis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas
   	
	printf("Informe seu horário: ");
	scanf("%f", &horario);
	if(horario >= 5 && horario < 13){
		printf("Manhã");
	}else{
		if(horario >= 13 && horario < 21){
			printf("Tarde");
		}
		else{
			printf("Noite");
		}
	}
	
	return 0;
}
