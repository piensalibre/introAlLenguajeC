//codigo 18, ejemplo de punteros
#include <stdio.h>

int main()
{
	int *a,b,c;//'a' se declara como unpuntero de tipo entero
	a=&b;//'a' recibe la direccion de memoria de b mediante el operador monario &
	b=5;//a 'b' se le asigna el valor de 5
	c=*a;//a 'c' se le asigna el valor de 'a'
	printf("La variable a apunta a la direccion de memoria: %p\n",a);//se imprime la direccion de b
	printf("La direccion de memoria de b es: %p\n",&b);//se imprime la direccion de b
	printf("La variable c tiene el valor: %d\n",c);//se imprime el valor de c
	return 0;
}
