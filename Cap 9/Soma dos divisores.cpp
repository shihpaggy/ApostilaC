/*Soma dos divisores*/

#include <stdio.h>

int main()
{
	/*Declara��o de variaveis*/
	int num,cont,soma=0;
	
	/*Lista de comandos*/
	
	printf("Insira um numero.\n");
	scanf("%d",&num);
	
	for(cont=1;cont<=num;cont++){
		if(num%cont==0){
			soma=soma+cont;
		}
	}
	
	printf("A soma dos divisores de %d � %d.\n",num,soma);
	
	/*Fim*/
	
	return 0;
}