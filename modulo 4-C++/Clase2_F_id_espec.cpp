#include<stdio.h>
#include<stdlib.h>

int num=0;   //esto es una variable gobal, declarada fuera del main
void s(); //prototipo de funcion para que se pueda llamar en el main a pesar de estar definida despu[es del main

int main()
{
	int a=0,b=0; //declaracion de dos variables de tipo entero locales
	
	printf("Ingresa dos numeros enteros:\n");
	scanf("%d %d", &a, &b);
	printf("los dos numeros ingresados: %d y %d\n", a,b );
	num=a+b;
	s();   //Esto es un llamado de la funcion*/
	
	/* indentificadores de tipo
	%c caracter
	%d entero con signo
	%f numero decimal de punto flotante
	%s cadena de caracteres
	%u entero sin signo	
	*/
	
	
	char c='a';
	int i=-58;
	float f=3.33188;
	char palabra[]={"hola"};
	
	printf("como caracter %c . como entero %d\n", c, c );
	printf("como entero con signo %d . como entero sin signo %u\n", i, i );
	printf("un flotante es %.2f\n", f);  //el .2f indica el numero de cifras significativas que quieor mostrar
	
	
	/*Secuencias de entrada salida
	\a campana
	\b retroceso
	\n nueva l[inea
	\t tabulador
	\\ diagonal inversa
	\? (obsoleto)
	\' comilla simple
	\" comilla doble
	*/
	
	printf("para sobreescribir la ultima letra hago\b\\b \n");
	printf("para que aparezca el \\ impreso debo poner dos \\");
	
	return 0;

}

/* la estructura de una función es:
	 TIPO nombre_de_funcion(TIPO  nombre_arg1, TIPO nombre_arg2, etc..)
	 {
	 			instrucciones
	 			return ;
	 }
	 
	 */

void s()
{
	num = num *2;
	return;
}
