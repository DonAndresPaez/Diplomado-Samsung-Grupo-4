#include <stdio.h>
#include <stdlib.h>

#define capacidad 10 
 
//busqueda lineal

/*int main(int argc, char *argv[]) {
    int i = 0;
    int CAPACIDAD = 10;
    int arreglo[CAPACIDAD] = {2,4,6,8};
    int tamArreglo = 4;
    int valor_buscado = 6;

    for(i=0;i<tamArreglo;i++){
        if(arreglo[i] == valor_buscado){
            printf("\nSe encontro el elemento en la posicion %d del arreglo",i);
            return 0;
        }
        
	}
    puts("No se encontro el elemento en el arreglo");
    return 0;
}*/

//remover un elemento en arreglo desordenado
/*
int main(int argc, char** argv) {
    int arreglo[capacidad] = {8,5,2,9,1,7,6};
    int tam = 7;
    int indiceEliminar = 3;

    //Imprimiendo el arreglo antes
    for(int i=0;i<tam;i++){
        printf("%i",arreglo[i]);
    }
    printf("\n");

    arreglo[indiceEliminar] = arreglo[tam-1];
    tam-=1;

    //Imprimiendo el arreglo
    for(int i=0;i<tam;i++){
        printf("%i",arreglo[i]);
    }
    printf("\n");
    return 0;
}*/

//remover un elemento en arreglo ordenado
/*
int main(int argc, char** argv) {
    int arreglo[capacidad] = {1,2,3,4,5,6,7};
    int tamArreglo = 7;
    int indiceEliminar = 3;
    int i = 0;


    printf("El tamanio del arreglo es %d \n", tamArreglo);
    printf("El arreglo es ");
    for(i=0;i<tamArreglo;i++){
        printf("%i",arreglo[i]);
    }
    printf("\n");
    for(i=indiceEliminar;i<tamArreglo;i++){
        arreglo[i] = arreglo[i+1];
    }
    
	tamArreglo=tamArreglo - 1;
    
    printf("El tamanio del arreglo es %d \n", tamArreglo);
    printf("El arreglo es ");
    for(int i=0;i<tamArreglo;i++){
        printf("%i",arreglo[i]);
    }
    return 0;
}*/

//Insertar elemento en arreglo desordenado
int main(int argc, char** argv) {
    int arreglo[capacidad] = {8,5,6,9,2,3,1};
    int tamArreglo = 7;
    int elementoInsertar = 13;
    int i=0;


    printf("El tamanio del arreglo es %d \n", tamArreglo);
    printf("El arreglo es ");
    for(i=0;i<tamArreglo;i++){
        printf("%i",arreglo[i]);
    }
    printf("\n");
    
	arreglo[tamArreglo]=elementoInsertar;
    tamArreglo=tamArreglo + 1;
    
    printf("El tamanio del arreglo es %d \n", tamArreglo);
    printf("El arreglo es ");
    for(int i=0;i<tamArreglo;i++){
        printf("%i",arreglo[i]);
    }
    return 0;
}







