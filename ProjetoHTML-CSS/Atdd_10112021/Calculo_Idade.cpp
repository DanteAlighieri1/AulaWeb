/*Calculo de idade*/
#include <stdio.h>
#include <conio.h>

int dia_nasc,mes_nasc,ano_nasc,dia_atua,mes_atua,ano_atua,dia,mes,ano;

int main() {
	printf("Dia do nascimento: ");
	scanf("%i",&dia_nasc);
	printf("Mes de nascimento: ");
	scanf("%i",&mes_nasc);
	printf("Ano do Nascimento: ");
	scanf("%i",&ano_nasc);
	printf("Dia atual: ");
	scanf("%i",&dia_atua);
	printf("Mes atual: ");
	scanf("%i",&mes_atua);
	printf("Ano atual: ");
	scanf("%i",&ano_atua);
	
	dia= (dia_atua-dia_nasc);
	mes= (mes_atua-mes_nasc);
	ano= (ano_atua-ano_nasc);
	
	printf("Dia: %i", dia);
	printf(" Mes: %i", mes);
	printf(" Ano: %i", ano);
	return 0;
}
