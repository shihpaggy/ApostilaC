/* Calcular sal�rio anual*/

#include<stdio.h>

int main ()
{
	/* Declara��o das vari�veis*/
	
	int salario,anual;
	
	/* Lista de comandos */
	
	printf("Qual o seu salario mensal?\n");
	scanf("%d",&salario);
	
	anual=salario*12;
	
	printf("Seu salario anual � de %d.",anual);
	
	/* Fim */
	
	return 0;
}
