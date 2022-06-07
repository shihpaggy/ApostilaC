/*Determinar a soma da sequencia terminada com 0*/

#include<stdio.h>

int main()
{
	/*Declaração de variáveis*/
	int soma=0,num;
	
	/*Lista de comandos*/
	
	while(num!=0){
		printf("Digite um número.\n");
		scanf("%d",&num);
		soma=soma+num;
	}
	
	printf("A soma da sequência inserida é %d.\n",soma);
	
	/*Fim*/
	
	return 0;
}