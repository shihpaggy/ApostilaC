 /*Dados numeros inteiros ´ n e k, com k >= 0, determinar n elevado a k.*/
 
 #include<stdio.h>
 
 int main()
 {
	/*Declaração de variáveis*/
	int n,k,e,total;
	
	/*Lista de comandos*/
	
	printf("Digite dois números.\n");
	scanf("%d %d",&n,&k);
	
	e=k-1;
	total=n;
	
	while(e>0)
	{
		total=total*n;
		e=e-1;
	}

	printf("O valor de %d elevado a %d é de %d.\n",n,k,total);
	
	/*Fim*/
	
	return 0;
 }