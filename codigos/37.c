//codigo 37,ejemplo de uso de vectores, este codigo resta dos vectores
#include <stdio.h>

int main()
{
	int n;
	int a[100],b[100],c[100];
	int i;
	printf("Numero de elementos a restar:");
	scanf("%d",&n);
	printf("Elementos del vector A\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elementos del vector B\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Resta de vectores\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]-b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
}
