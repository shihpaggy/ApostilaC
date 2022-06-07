/*Soma dos divisores*/

#include <stdio.h>

int main()
{
	/*Declaração de variaveis*/
	int num,cont,soma=0;
	
	/*Lista de comandos*/
	
	printf("Insira um numero.\n");
	scanf("%d",&num);
	
	for(cont=1;cont<=num;cont++){
		if(num%cont==0){
			soma=soma+cont;
		}
	}
	
	printf("A soma dos divisores de %d é %d.\n",num,soma);
	
	/*Fim*/
	
	return 0;
}