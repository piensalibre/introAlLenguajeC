//codigo 38, ejemplo de uso de arreglos, programa que lee y muestra un arreglo
#include <stdio.h>

#define MAX 20

int main()
{
	int a[MAX];
	int i,n;
	printf("Da el tamano del arreglo:");
	scanf("%d",&n);
	printf("Introduce el arreglo:\n");
	for(i=0;i<n;i++)
	{
		printf("Introduce el dato de la posicion %d:\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("El dato introducido en la posicion %d es:\n",i);
		printf("%d\n",a[i]);
	}
	return 0;
}
