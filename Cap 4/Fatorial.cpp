/*Dado um numero inteiro � n >= 0, calcular o fatorial de n (n!)*/

#include<stdio.h>

int main()
{
	/*Declara��o de vari�veis*/
	
	int n,f,i;
	
	/*Lista de comandos*/
	
	printf("Digite um n�mero maior que zero.\n");
	scanf("%d",&n);
	
	i=n;
	f=n;
	
	while(i>1){
		f=f*(i-1);
		i=i-1;
	}
	
	printf("O fatorial do n�mero %d � %d\n",n,f);
	
	/*Fim*/
	
	return 0;
}