//codigo 39, programa que lee el tamano de un vector, lee los elementos, los escribe y halla el promedio
#include <stdio.h>
#include <stdlib.h>

void lectX(double *x, int n,char c);
void escrX(double *x, int n);
double promX(double *x, int n);

int main()
{
	double v[40];
	int n;
	printf("\nPromedio de elementos de un vector\n\n");
	printf("Numero de elementos:");
	scanf("%d",&n);
	if(n>40)
	{
		printf("\nNumero demasiado grande\n\n");
		exit(1);
	}
	lectX(v,n,'v');
	printf(" v : \n");
	escrX(v,n);
	printf("Promedio = %.2lf\n",promX(v,n));
	return 0;
}

void lectX(double *x, int n, char c)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c(%d)= ",c,i+1);
		scanf("%lf",&x[i]);
	}
}

void escrX(double *x,int n)
{
	int i;
	int elementosporlinea = 5;
	for(i=0;i<n;i++)
	{
		printf("%7.2lf", x[i]);
		if((i+1)%elementosporlinea==0||i==n-1)
		{
			printf("\n");
		}
	}
}

double promX(double *x, int n)
{
	int i;
	double s=0.0;
	if(n<=0)
	{
		printf("promX:n=%d inadecuado\n",n);
		return 0.0;
	}
	for(i=0;i<n;i++)
	{
		s+=x[i];
	}
	return s/n;
}
