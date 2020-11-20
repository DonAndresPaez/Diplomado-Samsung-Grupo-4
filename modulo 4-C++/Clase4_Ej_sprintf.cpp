#include <stdio.h>

int main ()
{
  char buffer [50];
  int n, a=5, b=3;
  
  //sprintf (buffer, "%d plus %d is %d", a, b, a+b); //llena buffer con la estructura entre comillas y retorna el
  // tamaño del buffer, pero como no lo estoy igualando a una variable, ese retorno "se pierde"
  
  n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);//llena buffer con la etsructura entre comillas y retorna el tamaño de buffer
  // el cual queda guardado en n, debido a que lo estoy igualando a n
  
  printf ("%s\n",buffer);
  printf ("[%s] is a string %d chars long\n",buffer,n);
  
  return 0;
}



