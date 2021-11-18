/*Equação de segundo grau*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float Nota1,Nota2,Nota3,Nota4,Exame,Recuperacao,media;

int main(void){
	setlocale (LC_ALL, ""); // importa as variáveis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas
   	
   	printf("Entre com a Primeira nota: ");
	scanf("%f", &Nota1);
	printf("Entre com a Segunda nota: ");
	scanf("%f", &Nota2);
	printf("Entre com a Terceira nota: ");
	scanf("%f", &Nota3);
	printf("Entre com a Quarta nota: ");
	scanf("%f", &Nota4);
	
	media = (Nota1+Nota2+Nota3+Nota4)/4;
	
	if(media >= 7){
		printf("Aprovado %0.0f", media);
	}else{
		printf("\n Recuperacao %0.0f", media);
		printf("\n Nota no Exame: ");
		scanf("%f", &Exame);
		Recuperacao = (media + Exame)/2;
		
		if(Recuperacao >= 5){
			printf("Aprovado %0.0f", Recuperacao);
		}
		else{
			printf("Reprovado %0.0f", Recuperacao);
		}
	}
	
   	
   	return 0;
}
