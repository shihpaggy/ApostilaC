#include <stdio.h>

int main()
{
	/* Declaração de variáveis*/
	int idade,peso;
	
	
	
	/*Lista de comandos*/
	
	printf("Qual a sua idade e peso?\n");
	scanf("%d %d",&idade,&peso);

	printf("Sua idade é de %d anos e seu peso é %d kg.",idade,peso);

	/*Fim*/
	
	return 0;
	
}