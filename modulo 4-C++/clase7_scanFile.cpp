#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f=fopen("pasatiempos.txt","r");
	char s[10]={0};
	int i;
	int edad_int=0;
	char nombre[10]={0};
	char edad[10]={0};
	char pasat[10]={0};
	
  	for(i=0;i<3;i++)	
	{
  		fscanf(f,"%s %s %s",nombre, edad, pasat);
  		edad_int=atoi(edad);
		printf("%s %d %s\n", nombre, edad_int, pasat);
	}
	fclose(f);
			
	return 0;
}


/* fscanf(f,"%s",s);	
	printf("%s\n",s);

	//fscanf(f,"%s",nombre);
	//fscanf(f,"%s",edad);
	//fscanf(f,"%s",pasat);*/
	
	


