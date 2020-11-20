#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nombre[100]={0};
	char apellido[20];
	int edad=0;
	
	printf("Ingrese sus nombres:");
	//scanf("%s", nombre); //el especificador %s va a la primera posicion y lee hasta que encuentra un null 
	scanf("%[^\n]", nombre); //En lugar del especificador %s se usa el especificador %[^\n] que permite ingresar espacios en blanco
	
	getchar();
	
	printf("Ingrese sus apellidos:");
	scanf("%[^\n]", apellido); //En lugar del especificador %s se usa el especificador %[^\n] que permite ingresar espacios en blanco
	
	getchar();
	
	printf("Ingrese su edad:");
	scanf("%d", &edad);
	
	printf("Hola %s %s, tienes %d años\n", nombre,apellido, edad);
	
	return 0;
}
