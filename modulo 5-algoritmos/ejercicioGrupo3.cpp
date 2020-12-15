#define capacidad 10 
 
#include <stdio.h>
#include <stdlib.h>
 
void imprimirArreglo(int arreglo[capacidad], int tamArreglo); //prototipo de una funcion siempre antes del main
int BusquedaLineal(int Arreglo[capacidad], int tamArreglo) ;
int EliminarDesordenado(int Arreglo[capacidad], int tamArreglo);
int EliminarOrdenado(int Arreglo[capacidad], int tamArreglo);
int InsertarDesordenado(int Arreglo[capacidad], int tamArreglo);
int InsertarOrdenado(int arreglo[capacidad], int tamArreglo);

int main(int argc, char *argv[]) {

    int Arreglo[capacidad] = {1,2,3,4,5,6,7,};
    int tamArreglo = 7;
    int numero;
    
    imprimirArreglo(Arreglo, tamArreglo);
	
	printf("Seleccione una opcion: \n");
    puts("1. Busqueda Lineal \n2. Eliminar Desordenado \n3. Eliminar Ordenado \n4. Insertar Desordenado \n5. Insertar Ordenado \n6. Intercambiar Elementos\n");
    scanf("%i", &numero);
    system("CLS");
    switch(numero){
	    case 1:
	        BusquedaLineal(Arreglo,tamArreglo);
	                
	    break;
	    case 2:
	     	tamArreglo=EliminarDesordenado(Arreglo,tamArreglo);
	     	imprimirArreglo(Arreglo, tamArreglo);
	    break;
	    case 3:
	        tamArreglo=EliminarOrdenado(Arreglo,tamArreglo);
	     	imprimirArreglo(Arreglo, tamArreglo);
	    break;
	    case 4:
	        tamArreglo=InsertarDesordenado(Arreglo,tamArreglo);
	     	imprimirArreglo(Arreglo, tamArreglo);
	    break;
	    case 5:
	        tamArreglo=InsertarOrdenado(Arreglo,tamArreglo);
	     	imprimirArreglo(Arreglo, tamArreglo);
	    break;
	    case 6:
	        puts("\nIntercambiar Elementos");
	    break;
	    default:
	        puts("\nOpcion Invalido");
	    break;
    }
   return 0;
}
 
void imprimirArreglo(int arreglo[capacidad], int tamArreglo)
{
	int i;
	printf("El arreglo es: \t ");
    for(i=0;i<tamArreglo;i++){
        printf("%i\t",arreglo[i]);
    }
    printf("\n");
    
}
 
//busqueda lineal

int BusquedaLineal(int Arreglo[capacidad], int tamArreglo) 
{
    int i = 0;
    int valor_buscado = 0;
    printf("Ingrese el valor a buscar\n");
    scanf("%d", &valor_buscado);
    
    for(i=0;i<tamArreglo;i++){
        if(Arreglo[i] == valor_buscado){
            printf("\nSe encontro el elemento en la posicion %d del arreglo",i);
            return i;
        }
    }
    puts("No se encontro el elemento en el arreglo");
    return -1;
}

//remover un elemento en arreglo desordenado

int EliminarDesordenado(int Arreglo[capacidad], int tamArreglo) 
{
    int tamano= tamArreglo;  
    int indiceEliminar = -1;
    printf("Ingrese el indice a eliminar\n");
    scanf("%d", &indiceEliminar);

    Arreglo[indiceEliminar] = Arreglo[tamArreglo-1];
    tamano-=1;
    return tamano;

}

//remover un elemento en arreglo ordenado

int EliminarOrdenado(int Arreglo[capacidad], int tamArreglo) 
{
    int indiceEliminar = -1;
    int i = 0;

	printf("Ingrese el indice a eliminar\n");
    scanf("%d", &indiceEliminar);
    for(i=indiceEliminar;i<tamArreglo;i++){
        Arreglo[i] = Arreglo[i+1];
    }
    
	   return tamArreglo-1;
}

//Insertar elemento en arreglo desordenado
int InsertarDesordenado(int Arreglo[capacidad], int tamArreglo) 
{
    int elementoInsertar = -1;
    printf("Ingrese el elemento a insertar\n");
    scanf("%d", &elementoInsertar);
   
	Arreglo[tamArreglo]=elementoInsertar;
        
   return tamArreglo + 1;
}

int InsertarOrdenado(int Arreglo[capacidad], int tamArreglo){
	int i;
	int indice=tamArreglo; //suponemos que se va a poner al final del arreglo
	int elemento;
	// encontrar en donde se debe insertar
	printf("Ingrese el elemento a insertar\n");
    scanf("%d", &elemento);
	
	for(i=0;i<tamArreglo;i++){
		if(elemento<Arreglo[i]){
			indice=i;
			break;
		}				
	}	
	// se corren los elementos si es necesario
	if(indice!= tamArreglo){
		for(i=tamArreglo;i>=indice;i--){
		Arreglo[i]=Arreglo[i-1];
		}
	}
	// se inserta
	Arreglo[indice]=elemento;
	return tamArreglo+1;	
}







