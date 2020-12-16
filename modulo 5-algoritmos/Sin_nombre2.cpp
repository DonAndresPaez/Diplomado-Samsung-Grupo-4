#include <stdio.h>
#include <stdlib.h>
#define length(x) (sizeof(x) / sizeof((x)[0]))
#define size 10

void imprimirArreglo(int tamano, int arreglo[size]); //prototipo de funcion
int busquedaLineal(int arreglo[size], int tamArreglo);
int eliminarDesordenado(int arreglo[size], int tamArreglo);//retorna el nuevo tamaño del arreglo
int eliminarOrdenado(int arreglo[size], int tamano);
int insertarDesordenado(int arreglo[size], int tamano);
int insertarOrdenado(int arreglo[size], int tamano);
void intercambiarElementos(int arreglo[size], int tamArreglo);

int main()
{
	int option = 0;
	int arreglo[size]={1,2,3,4,5,6,7};//arreglo es un apuntador(eauivalente a direccion) a la primera posicion del arreglo
	int tamArreglo=7;
	int indice=-1;
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
			printf("El valor se ha encontrado en la posición: %d", indice);
		break;
		case 2:
			tamArreglo=eliminarDesordenado(arreglo,tamArreglo);
			imprimirArreglo(tamArreglo, arreglo);
			
		break;
		case 3:
			tamArreglo=eliminarOrdenado(arreglo,tamArreglo);
			imprimirArreglo(tamArreglo, arreglo);
		break;
		case 4:
			tamArreglo=insertarDesordenado(arreglo,tamArreglo);
			imprimirArreglo(tamArreglo, arreglo);
		break;
		case 5:
			tamArreglo=insertarOrdenado(arreglo,tamArreglo);
			imprimirArreglo(tamArreglo, arreglo);
		break;
		case 6:
			intercambiarElementos(arreglo, tamArreglo);
			imprimirArreglo(tamArreglo, arreglo);
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

int eliminarDesordenado(int arreglo[size], int tamArreglo) //RETORNA EL NUEVO TAMAÑO DEL ARREGLO
{
    int indiceEliminar=-1;
    printf("Por favor, ingrese la posición del arreglo a eliminar\n");
    scanf("%d", &indiceEliminar);

	if(indiceEliminar<tamArreglo)
    {
    	arreglo[indiceEliminar]=arreglo[tamArreglo-1];
    	return tamArreglo-1;
    }
    else
    {
    	printf("indice fuera de rango");
    	return tamArreglo;
	}
}


int eliminarDesordenado1(int arreglo[size], int tamano){

    int indice = 0;
    puts("Ingrese el indice a eliminar");
    scanf("%d",&indice);

	if(indice<tamano)
    {
    	arreglo[indice] = arreglo[tamano - 1];
    	tamano--;
	}
	else
	{
		printf("indice fuera de rango");
	}
	
    return tamano;
}

int eliminarOrdenado(int arreglo[size], int tamano){

    int indice = -1;
    puts("Ingrese el indice a eliminar");
    scanf("%d", &indice);

    if(indice < tamano){
        int i = 0;
        for(i = indice; i < tamano; i++){

            arreglo[i] = arreglo[i+1];

        }
        tamano--;
    }
    else{
        puts("Este indice no se encuentra en el arreglo");
    }
 
    return tamano;
}

int insertarDesordenado(int arreglo[size], int tamano){

    int elemento = -1;
    puts("Ingrese el elemento a ingresar");
    scanf("%d", &elemento);

    
    arreglo[tamano] = elemento;

     
    return tamano+1;
}

int insertarOrdenado(int arreglo[size], int tamano){
        int indice=tamano; // lo ingresa al final
        int elemento;
        
        printf("Ingrese el elemento a insertar\n");
        scanf("%d", &elemento);
        
        for(int i=0; i<tamano; i++){
                if(elemento<arreglo[i]){
                        indice=i;
                        break;
                }                              
        }    
        
        if(indice!= tamano){
                for(int j = tamano ;j >indice;j--){
                arreglo[j] = arreglo[j-1];
                }
        }
        // se inserta
        arreglo[indice]=elemento;
        return tamano+1;        
}

void intercambiarElementos(int arreglo[size], int tamArreglo)
{
	int indice1=-1,indice2=-1;
	puts("Ingrese los indices a intercambiar");
    scanf("%d %d", &indice1, &indice2);
    
    int aux = arreglo[indice1];
	arreglo[indice1]=arreglo[indice2];
	arreglo[indice2]=aux;
	return;
	
}


