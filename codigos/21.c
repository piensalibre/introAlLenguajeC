//codigo 21, ejemplo de simulacion de paso por referencia mediante el uso de punteros
#include <stdio.h>

void Alfa(int *val, float pos)//alfa recibe un puntero y un valor
{
	*val=7;//se le asigna el valor de 7 a la direccion de memoria a la que apunta *val
	pos=7.7;
	return;
}

void Beta(int val, float *pos)//beta recibe el valor de a y la direccion de memoria de b
{
	val=9;
	*pos=9.9;//se le asigna el valor de 9.9 a la direccion a la que apunta *pos
}

int main()
{
	int a=8;
	float b=8.8;
	printf("Al principio a vale %d y b vale %f.\n",a,b);
	Alfa(&a,b);//se pasa la direccion de memoria de a y el valor de b
	printf("Despues de Alfa a vale %d y b vale %f.\n",a,b);
	Beta(a,&b);//se pasa el valor de a y la direccion de memoria de b
	printf("Despues de Beta a vale %d y b vale %f.\n",a,b);
	return 0;
}
