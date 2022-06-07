/* Determinar n primeiros números múltiplos de i e j*/

#include<stdio.h>

int main()
{
	/*Declaração de variáveis*/
	int i,j,n,num,cont;
	
	/*Lista de comandos*/
	printf("Entre com dois números maiores que 0 que deseja saber os múltiplos.\n");
	scanf("%d %d",&i,&j);
	
	printf("Digite a quantidade de múltiplos que dejesa saber:\n");
	scanf("%d",&n);
	
	num=cont=0;
	
	printf("São múltiplos de %d ou %d:\n",i,j);
	
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