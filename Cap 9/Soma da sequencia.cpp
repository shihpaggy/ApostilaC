/*Determinar a soma da sequencia terminada com 0*/

#include<stdio.h>

int main()
{
	/*Declara��o de vari�veis*/
	int soma=0,num;
	
	/*Lista de comandos*/
	
	while(num!=0){
		printf("Digite um n�mero.\n");
		scanf("%d",&num);
		soma=soma+num;
	}
	
	printf("A soma da sequ�ncia inserida � %d.\n",soma);
	
	/*Fim*/
	
	return 0;
}