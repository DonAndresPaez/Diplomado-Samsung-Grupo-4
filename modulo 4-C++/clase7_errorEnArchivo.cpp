#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f=fopen("desconocido.txt","r+");
	
	if(f==0)
	{
		printf("no hay archivo para leer \n");
	}
	else
	{
		printf("archivo abierto exitosamente \n");	
	}
	
	if(fclose(f)==0)
	{
		printf("archivo cerrado correctamente \n");
	}
	else
	{
		printf("no se pudo cerrar el archivo \n");
	}
	return 0;
}

