#include <stdio.h>

int main()
{
	int a=91, b=7;
	printf("a=%d, b=%d\n",a,b);
	if(a%b==0) 
	{
		printf("%d: es un multiplo de %d\n",a,b);
	}
	else
	{
		printf("%d: No se divide por %d\n",a,b);
	}
	return 0;
}
