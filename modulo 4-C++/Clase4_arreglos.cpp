#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*char str[3][100]={{0,}};
	printf("nombre:");
	scanf("%s",str[0]);
	printf("Apellido:");
	scanf("%s",str[1]);
	printf("2do apellido:");
	scanf("%s",str[2]);
	
	printf("\n \nTu nombre es %s\n",str[0]);
	printf("Tu apellido es %s, y\n",str[1]);
	printf("Tu segundo apellido es %s.\n",str[2]);
	*/
	
	int n=0;
	int p=printf("ingresa un caracter y luego un numero \n");
	char g=getchar();
	int s=scanf("%d",&n);

	printf("Valor de retorno de printf: %d \n", p);	
	printf("Valor de retorno de getchar: %c \n", g);
	printf("Valor de retorno de scanf: %d \n", s);
	
	return 0;
}
