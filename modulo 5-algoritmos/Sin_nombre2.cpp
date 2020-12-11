int busquedaLineal(int arreglo[size], int tamArreglo);


int main()
{
	int option = 0;
	int arreglo[size]={1,2,3,4,5,6,7};
	int tamArreglo=7;
	int indice=0;
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
			indice=busquedaLineal(arreglo, tamArreglo);
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

int busquedaLineal(int arreglo[size], int tamArreglo)
{
    int valor_buscado=0;
    int j;
	printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor_buscado);
    for(j=0; j<tamArreglo; j++)
    {
        if(arreglo[j]==valor_buscado)
        {
            printf("El valor se ha encontrado en la posición: %d", j);
            return j;
        }
    }
    printf("El valor no se ha encontrado. No se encuentra en el arreglo");
    return -1;
}

