/*M�dia dos Alunos */
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float N1,N2,resul;

int main(void){
	
	setlocale (LC_ALL, ""); // importa as vari�veis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das d�vidas
	
	printf("O primeiro n�mero: ");
	scanf("%f", &N1);
	
	printf("\n O primeiro n�mero: ");
	scanf("%f", &N2);
	if(N1>N2){
		printf("O primeiro n�mero � Maior");
	}
	else{
		printf("O primeiro n�mero � Menor");
	}
	
	return 0;
}
