#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f=fopen("sic2.html","a");
	
	char html[100]={0};
	scanf("%[^\n]", html);
	fprintf(f, "%s",html);
	
	fclose(f);
	
	system("sic2.html");
	
	return 0;
}
