#include <stdio.h>

int main()
{
	int count =0;
	int clave = 1234;
	int entrada =0;
	
	while(1)
	{
		printf("Ingresa la clave:\n");
		scanf("%d",&entrada);
		count ++;
		if(entrada==clave)
		{
			printf("la clave es correcta.\n");
			break;		
		}
	}
	
	printf("Has salido del bucle infinito en el intento: %d.\n",count);
	return 0;
}

