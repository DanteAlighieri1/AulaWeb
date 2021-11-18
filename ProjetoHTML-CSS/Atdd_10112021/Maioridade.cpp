/*Calculo de idade*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int idade;

int main(void){
	setlocale (LC_ALL, ""); // importa as variáveis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas
   	
	printf("Qual sua idade: ");
	scanf("%i", &idade);
	if( idade >= 18){
		printf(" Adulto: %i", idade);
	}
	else{
		if( idade >= 10 &&  idade <= 17){
			printf(" juvenil: %i", idade);
		}
		else{
				printf("Criança: %i", idade);
			}
		}
	}

