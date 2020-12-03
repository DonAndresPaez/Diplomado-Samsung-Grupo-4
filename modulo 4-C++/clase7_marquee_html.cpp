#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f=fopen("sic3.html","w");
	
	char menu[4][100] = {"JIM", "SIC", "Sr. Samsung", "Gran SIC"};
	int mode=0;
	
	printf("Selecciona los contenidos que deseas mostrar en el navegador web\n"); 
	printf("[1]Cantante popular del mes\n");
	printf("[2]Serie popular del mes\n"); 
	printf("[3]Jugador popular del mes\n"); 
	printf("[4]Película popular del mes\n"); 
	printf("Ingresar un número(1-4):");

	scanf("%d",&mode);

	fprintf(f,"<html>"); 
	fprintf(f,"<marquee direction=UP>"); 
	fprintf(f,"%s", menu[mode-1]); 
	fprintf(f,"</marquee>"); 
	fprintf(f,"</html>");
	fclose(f);
	
	system("sic3.html"); 
	return 	0;
}


