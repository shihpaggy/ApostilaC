/* Determinar se um n�mero � triangular */

#include<stdio.h>

int main ()
{
	/* Declara��o de vari�veis */
	
	int n /*n�mero inserido*/,i/*primeiro n�mero da sequ�ncia*/;
	
	/*Lista de comandos*/
	
	printf("Digite o n�mero que deseja verificar.\n");
	scanf("%d",&n);
	
	i=1;
	
	while((i*(i+1)*(i+2))<n){
	i=i+1;
	}
		
	if(i*(i+1)*(i+2)==n){
	printf("O n�mero %d � produto dos n�meros %d, %d e %d.\n",n,i,i+1,i+2);
	}
	else{
	printf("O n�mero %d n�o � triangular\n",n);
	}
	
	/*Fim*/
	
return 0;	
}