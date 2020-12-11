#include <stdio.h>
#include <stdlib.h>
#define length(x) (sizeof(x) / sizeof((x)[0]))
#define size 10

void imprimirArreglo(int tamano, int arreglo[size]); //prototipo de funcion

int main()
{
	int option = 0;
	int arreglo[size]={1,2,3,4,5,6,7};
	int tamArreglo=7;
	char instructions[6][100] =
	{
		"Busqueda lineal",
		"Remover elemento en arreglo desordenado",
		"Remover elemento en arreglo ordenado",
		"Insertar elemento en arreglo desordenado",
		"Insertar elemento en arreglo ordenado",
		"Intercambiar elementos",
	};
	
	imprimirArreglo(tamArreglo, arreglo);
			
	for (int i = 0; i < length(instructions); i++ ) {
		printf("%d. %s \n", i + 1, instructions[i]);
	}
	scanf("%d", &option);
	switch (option)
	{
		case 1:
			printf("Instrucción. %s \n", instructions[option -1]);
		break;
		case 2:
			printf("Instrucción. %s \n", instructions[option -1]);
		break;
		case 3:
			printf("Instrucción. %s \n", instructions[option -1]);
		break;
		case 4:
			printf("Instrucción. %s \n", instructions[option -1]);
		break;
		case 5:
			printf("Instrucción. %s \n", instructions[option -1]);
		break;
		case 6:
			printf("Instrucción. %s \n", instructions[option -1]);
		break;
		default:
			printf("Opción no soportada\n");
		break;
	}
return 0;
}

void imprimirArreglo(int tamano, int arreglo[size])
{
	for (int i = 0; i < tamano; i++ )
	{
		printf("%d\t", arreglo[i]);
	}
	printf("\n");
}


