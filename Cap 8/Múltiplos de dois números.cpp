/* Determinar n primeiros n�meros m�ltiplos de i e j*/

#include<stdio.h>

int main()
{
	/*Declara��o de vari�veis*/
	int i,j,n,num,cont;
	
	/*Lista de comandos*/
	printf("Entre com dois n�meros maiores que 0 que deseja saber os m�ltiplos.\n");
	scanf("%d %d",&i,&j);
	
	printf("Digite a quantidade de m�ltiplos que dejesa saber:\n");
	scanf("%d",&n);
	
	num=cont=0;
	
	printf("S�o m�ltiplos de %d ou %d:\n",i,j);
	
	while(cont<n){
		if(num%i==0||num%j==0){
			printf("%d\n",num);
			cont++;
		}
			num++;
	}
	
	/*Fim*/
	
	return 0;
}