#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f=fopen("pasatiempos.txt","r");

	char nombre[10]={0};
	char edad[10]={0};
	char pasat[10]={0};
	int edad_int=0;

	
	while(1)
	{
		fscanf(f,"%s %s %s",nombre, edad, pasat);
		if(feof(f)) break;
		edad_int = atoi(edad);
		printf("%s %d %s\n", nombre, edad_int, pasat);
	}
	
	fclose(f);
	return 0;
}

