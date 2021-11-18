/*Média dos Alunos */
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float Nota1,Nota2,Nota3,Nota4,media;

int main(void){
	printf("Entre com a Primeira nota: ");
	scanf("%f", &Nota1);
	printf("Entre com a Segunda nota: ");
	scanf("%f", &Nota2);
	printf("Entre com a Terceira nota: ");
	scanf("%f", &Nota3);
	printf("Entre com a Quarta nota: ");
	scanf("%f", &Nota4);
	
	media = (Nota1+Nota2+Nota3+Nota4)/4;
	
	if(media >= 5){
		printf("Aprovado %0.0f", media);
	}
	else{
		printf("Reprovado %0.0f", media);
	}
	return 0;
}
