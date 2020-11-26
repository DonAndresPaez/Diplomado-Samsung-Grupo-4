#include <stdio.h>
int main()
{
	int a=0,b=0;
	printf("ingrese dos enteros:\n");
	scanf("%d %d", &a, &b);
	printf("a=%d y b=%d\n", a,b);
	
	printf("a es mayor que b: %d\n", a>b);
	printf("a es menor que b: %d\n", a<b);
	printf("a es igual a b: %d\n", a==b);
	printf("a no es igual a b:%d\n", a!=b);
	printf("a es mayor a 2b:%d\n", a>=2*b);
	
	return 0;
	
}
