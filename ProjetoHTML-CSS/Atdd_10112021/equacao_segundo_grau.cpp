/*Equa��o de segundo grau*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

float A,B,C,X1,X2,Delta,X,Y;
float raiz_quadrada = 0.0;

int main(void){
	
	setlocale (LC_ALL, ""); // importa as vari�veis de ambiente
   	setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das d�vidas
	
	printf("Entre com o valor de A: ");
	scanf("%f", &A);
	printf("Entre com o valor de B: ");
	scanf("%f", &B);
	printf("Entre com o valor de C: ");
	scanf("%f", &C);
	if(A!=0 && B!=0 && C!=0){
		Delta = (B*B)-(4*A)*C;
		printf("\n valor do Delta: %0.0f", Delta);
		if(Delta > 0 || Delta == 0){
			printf("\n Havera pelo menos uma ra�z");
			raiz_quadrada = sqrt(Delta);
			printf("\n A raiz �: %0.0f", raiz_quadrada);
			
			X1=((-B - raiz_quadrada)/(2*A));
			X2=((-B + raiz_quadrada)/(2*A));
			
			printf("\n Delta: %0.0f", Delta);
			printf("\n X1: %f", X1);
			printf("\n X2: %f", X2);
			
			if(A > 0){
				printf("\n ent�o a par�bola possui concavidade voltada para cima");
				Y = - (Delta/(4*A));
				X = - (B/(2*A));
				printf("\n As coordenada de Y vertice: %f", Y);
				printf("\n As coordenada de X vertice: %f", X);
				
			}else{
				if(A < 0){
					printf("ent�o a par�bola possui concavidade voltada para baixo tendo um ponto m�ximo.");
					Y = - (Delta/(4*A));
					X = - (B/(2*A));
					printf("\n As coordenada de Y vertice: %f", Y);
					printf("\n As coordenada de X vertice: %f", X);
				}
				else{
				}
			}
			
			
		} else{
			printf("\n N�o existe ra�z para essa equa��o");
		}
		
		
	}
	else{
		printf("N�o � uma equac�o de segundo grau");
	}
	return 0;
}

