#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0, j=0;
	int arreglo[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arreglo[i][j]*=arreglo[i][j];
			printf("posicion %d,%d: %2d\n", i, j, arreglo[i][j]);
		}
	}
	return 0;
	
}


