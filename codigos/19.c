//codigo 19, ejemplo de uso de funciones y de la sentencia return
#include <stdio.h>

int Comparacion(int a,int b)//se declara la funcion comparacion tipo entero, la cual recibe dos parametros de tipo entero
{
	if(a>b)
	{
		return 1;//si se cumple la condicion del if la funcion regresa el valor 1 y acaba
	}
	if(a<b)
	{
		return -1;
	}
	return 0;
}

int main()
{
	int a=3,b=2;
	printf("%d\n",Comparacion(a,b));//se imprime el valor que devuelve la funcion comparacion
	return 0;
}
