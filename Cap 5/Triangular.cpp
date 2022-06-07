/* Determinar se um número é triangular */

#include<stdio.h>

int main ()
{
	/* Declaração de variáveis */
	
	int n /*número inserido*/,i/*primeiro número da sequência*/;
	
	/*Lista de comandos*/
	
	printf("Digite o número que deseja verificar.\n");
	scanf("%d",&n);
	
	i=1;
	
	while((i*(i+1)*(i+2))<n){
	i=i+1;
	}
		
	if(i*(i+1)*(i+2)==n){
	printf("O número %d é produto dos números %d, %d e %d.\n",n,i,i+1,i+2);
	}
	else{
	printf("O número %d não é triangular\n",n);
	}
	
	/*Fim*/
	
return 0;	
}