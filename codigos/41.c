//codigo 41, ejemplo de uso de matrices, el programa lee matrices, las escribe y calcula el producto, lo hace mediante el uso de funciones que reciben como parametros arreglos bidimensionales
#include <stdio.h>
#include <stdlib.h>

void lectA(double a[][25],int m,int n,char c);
void escrA(double a[][25],int m,int n);
int prodAB(double a[][25],int m,int n,double b[][25],int p,int q,double c[][25]);

int main()
{
	double a[25][25],b[25][25],c[25][25];
	int m,n,p,q;
	printf("\nProducto de los elementos uno a uno de dos matrices de maximo 25 elementos.\n\n");
	printf("Numero de filas de A : ");
	scanf("%d",&m);
	printf("Numero de columnas de A : ");
	scanf("%d",&n);
	printf("Numero de filas de B : ");
	scanf("%d",&p);
	printf("Numero de columnas de B : ");
	scanf("%d",&q);
	if(n!=p)
	{
		printf("Producto imposible\n");
		exit(1);
	}
	if (m < 0 || n < 0 || p < 0 || q < 0 ||  m > 25 || n > 25 || p > 25 || q > 25 )
	{
		printf("ERROR EN LA ASIGNACION DE FILAS Y COLUMNAS\n");
		return 0;
	}
	printf("Por favor ingrese los valores de las matrices\n");
	lectA(a,m,n,'A');
	printf("A :\n");
	escrA(a,m,n);
	lectA(b,n,q,'B');
	printf("B :\n");
	escrA(b,n,q);
	if(prodAB(a,m,n,b,p,q,c))
	{
		printf("El resultado obtenido se muestra en la siguiente matriz C\n");
		printf("C :\n");
		escrA(c,m,q);
	}
	else
	{
		printf("ERROR\n");
	}
	return 0;
}

void escrA(double a[][25],int m,int n)
{
	int i,j;
	int nElemLinea = 5;
	for (i=0;i<m;i++)
	{
		for (j = 0;j < n;j++)
		{
			printf("%7.2lf",a[i][j]);
			if((j+1)%nElemLinea == 0 || j == n-1)
			{
				printf("\n");
			}
		}
	}
}

void lectA(double a[][25], int m, int n, char c)
{
	int i,j;
	for(i = 0;i < m;i++)
	{
		for(j = 0;j < n;j++)
		{
			printf("%c[%d][%d] = ",c,i+1,j+1);
			scanf("%lf",&a[i][j]);
		}
	}
}

int prodAB(double a[][25],int m, int n, double b[][25],int p,int q,double c[][25])
{
	int i,j,k;
	double s;
	for (i=0; i < m; i++)
	{
		for (j=0; j < q;j++)
		{
			s=0.0;
			for (k=0;k<n;k++)
			{
				s+=a[i][k]*b[k][j];
			}
			c[i][j]=s;
		}
	}
	return 1;
}
