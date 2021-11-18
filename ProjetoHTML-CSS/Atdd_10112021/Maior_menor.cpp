/*Média dos Alunos */
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float N1,N2,resul;

int main(void){
	
	setlocale (LC_ALL, ""); // importa as variáveis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas
	
	printf("O primeiro número: ");
	scanf("%f", &N1);
	
	printf("\n O primeiro número: ");
	scanf("%f", &N2);
	if(N1>N2){
		printf("O primeiro número é Maior");
	}
	else{
		printf("O primeiro número é Menor");
	}
	
	return 0;
}
