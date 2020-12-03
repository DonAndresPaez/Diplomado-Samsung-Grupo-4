#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f=fopen("pasatiempos.txt","r");
	char s[10]={0};
	
	char nombre[10]={0};
	char edad[10]={0};
	char pasat[10]={0};
	char cmd[100]={0};
	int edad_int=0;

	for(int i=0;i<3;i++)
	{
		fscanf(f,"%s %s %s",nombre, edad, pasat);
		printf("%s %s %s\n", nombre, edad, pasat);	
		sprintf(cmd, "start https://www.google.com/search?q=%s^&tbm=isch",pasat);
		system(cmd);
	}
	
	fclose(f);
	return 0;
}

