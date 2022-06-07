/*Soma dos digitos*/

#include <stdio.h>

int main()
{
	/*Declaracao das variaveis*/
	int num,dig,soma=0;
	
	/*Lista de comandos*/
	
	printf("Insira um numero.\n");
	scanf("%d",&num);
	while(num!=0)
	{
		dig=num%10;
		soma=soma+dig;
		num=num/10;
	}
	
	printf("A soma dos dígitos do numero inserido é %d.\n",soma);
	
	/*Fim*/
	
	return 0;
}