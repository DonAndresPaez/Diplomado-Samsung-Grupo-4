#include <stdio.h>

int main()
{
	int entrada =0;
	int clave = 1234;
	int itry=3;
	
	printf("Igresa la clave:\n");
	scanf("%d",&entrada);
	
	if((itry=itry-1)&&(entrada==clave))
	{
		printf("la clave es correcta");
		return 0;
	}
	
	printf("quedan %d intentos.\n", itry);
	scanf("%d",&entrada);

	if((itry=itry-1)&&(entrada==clave))
	{
		printf("la clave es correcta");
		return 0;
	}
	
	printf("quedan %d intentos.\n", itry);
	scanf("%d",&entrada);
	
	if(entrada==clave)
	{
		printf("la clave es correcta");
		return 0;
	}
	printf("Has ingresado la clave incorrecta 3 veces.\n");
	
	return -1;
}


