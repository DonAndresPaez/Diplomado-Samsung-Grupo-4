#include<stdio.h>
#include<stdlib.h>

int main()
{
	int time= 0;
	char cmd[100]={0};
	
	printf("Ingresar el tiempo en el que se apagara la computadora (unit=sec):");
	scanf("%d", &time);
	sprintf(cmd, "start shutdown -s -t %d", time);
	system(cmd);
		
	
	return 0;
}
