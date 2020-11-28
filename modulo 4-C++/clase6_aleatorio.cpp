#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i;
	int letra;
	for(i=1; i<=20; i++)
	{
		letra=(rand() % 26)+97;
		printf("%c\n",letra); 
	}
	return 0;
}

//printf("%d\n",rand());
//
//;
 


