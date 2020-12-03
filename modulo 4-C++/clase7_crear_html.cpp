#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f=fopen("sic.html","w");
	fprintf(f, "Hola, Samsung Innovation Campus");
	fclose(f);
	system("sic.html");
	return 0;
}


//
//
