/* Calcular salário anual*/

#include<stdio.h>

int main ()
{
	/* Declaração das variáveis*/
	
	int salario,anual;
	
	/* Lista de comandos */
	
	printf("Qual o seu salario mensal?\n");
	scanf("%d",&salario);
	
	anual=salario*12;
	
	printf("Seu salario anual é de %d.",anual);
	
	/* Fim */
	
	return 0;
}
