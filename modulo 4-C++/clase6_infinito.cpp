#include <stdio.h>

int main()
{
	int entrada=0;
	
	while(1)
	{
		printf("ingresa un numero para calcular su cuadrado: ");
		scanf("%d", &entrada);
		printf(" El cuadrado de %d es %d \n",entrada,entrada*entrada);
	}
	return 0;
}

