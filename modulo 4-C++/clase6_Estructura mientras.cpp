#include <stdio.h>

int main()
{
	int count=10;
	
	while(count)
	{
		count=count-1;  //count--
		printf("Cuenta regresiva: %d\n",count);
	}
	return 0;
}

