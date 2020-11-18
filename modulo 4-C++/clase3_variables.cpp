#include<stdio.h>
#include<stdlib.h>

#define pi 3.14   //la constante se declara fuera dle main, sin punto y coma

int main()
{
	int a= 65;
	int b=3;
	printf("el valor asignado a a es: %d\n",a);
	a=56 ;
	printf("el nuevo valor almacenado en a es: %d\n",a);
	printf("la direccion donde esta almacenada a es:%x\n",&a);
	printf("la direccion de b es %x\n",&b);
	
	int c=2;
	int r=0;
	
	r=c==2;
	printf("\n \nel resultado de la evaluacion c==2 es: %d\n",r);
	
	r=c==1;
	printf("\nel resultado de la evaluacion c==1 es: %d\n",r);
	
	char car='1';
	printf("\nun caracter lo puedo imrpimir como caracter:%c\n",car);
	printf("o como su valor en decimal: %d (ver tabla ascii))\n",car);
	
	printf("\n \n ********** arreglos*******\n");
	char d[5]="hola";  //Esto es un arreglo de caracteres. Se debe incluir una posicion adicional para el \0
	printf("%s\n",d); 
	
	printf("la posicion 0 del arreglo contiene: %c\n",d[0]);
	printf("la posicion 3 del arreglo contiene: %c\n",d[3]);
	printf("la posicion 4 del arreglo contiene: %c\n",d[4]);
	
	char s[]={"Samsung Innovation Campus"}; //un arreglo se puede inicializar sin especificar el tamano
	printf("%s\n",s);
	
	s[7]='\0';
	printf("reemplazando la posicion 7 por un \\0 corto la frase:");
	printf("%s\n",s);

	
	//ejemplo de constante
	printf("\n \n ********** constantes*******\n");
	int radio=2;
	float per= 2*pi*radio;
	
	printf("\n \nel perimetro del circulo es: %.5f", per);
	
	
	return 0;
}
