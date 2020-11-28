//codigo 35, programa que calcula el producto de los elementos de dos matrices
#include <stdio.h>

//definimos el tamano de la matriz
#define TAM 10

//definimos los codigos de error
#define OK 0
#define ERROR 1

//definimos la estructura de datos
struct MATRIZ
{
	unsigned fila,columna;
	float matriz[TAM][TAM];
};

//rutina que muestra un menu y pide una opcion del menu, esta funcion regresa el valor de 'd', el cual es un caracter que se corresponde a una opcion del menu
char Menu()
{
	char d;
	printf("Elige una opcion:\n");
	printf("\t0 --Salir del programa.\n");
	printf("\t1 --Introduzca la matriz A.\n");
	printf("\t2 --Introduzca la matriz B.\n");
	printf("\t3 --Calcular A*B.\n");
	printf("\t4 --Calcular B*A.\n");
	while((d=getchar())<'0'||d>'4');
	return d;
}

//rutina que pide el numero de filas o de columnas de una matriz, pide como parametro un puntero a la cadena a mostrar y devuelve un numero de filas o de columnas
unsigned PedirTamano(const char *cadena)
{
	unsigned valor;
	do
	{
		printf("%s",cadena);
		scanf("%u",&valor);
	}
	while (valor==0||valor>TAM);
	return valor;
}

//rutina que cambia una matriz, recibe como argumento un puntero a la matriz que vamos a cambiar
void PedirMatriz(struct MATRIZ *a)
{
	unsigned i,j;
	float valor;
	a->fila=PedirTamano("Numero de filas de la matriz: \n");
	a->columna=PedirTamano("Numero de columnas de la matriz: \n");
	for(i=0;i<a->fila;i++)
	{
		for(j=0;j<a->fila;j++)
		{
			printf("M[%u][%u]: ",i,j);
			scanf("%f",&valor);
			a->matriz[i][j]=valor;
		}
	}
}

//rutina que multiplica los elementos de dos matrices, las matrices se pasan por puntero pues ello es mas rapido, aunque se modifican en toda la funcion, se reciben como argumentos las dos matrices, y se devuelve un codigo de error
int Multiplicar(const struct MATRIZ *a, const struct MATRIZ *b, struct MATRIZ *res)
{
	unsigned i,j,k;
	if(a->columna!=b->fila)
	{
		return ERROR;
	}
	res->fila=a->fila;
	res->columna=b->columna;
	for(i=0;i<a->fila;i++)
	{
		for(j=0;j<b->columna;j++)
		{
			res->matriz[i][j]=0;
			for(k=0;k<a->fila;k++)
			{
				res->matriz[i][j]+=a->matriz[i][k]*b->matriz[k][j];
			}
		}
	}
	return OK;
}

//rutina que muestra en pantalla el resultado de la operacion,recibe como parametro un puntero a la matriz res
void Mostrar(const struct MATRIZ *res)
{
	unsigned i,j;
	for(i=0;i<res->fila;i++)
	{
		for(j=0;j<res->fila;j++)
		{
			printf("Res[%u][%u]= %f\n",i,j,res->matriz[i][j]);
		}
	}
	printf("\n");
	//getchar();
}

//funcion main
int main()
{
	struct MATRIZ a,b,res;
	char d;
	a.fila=a.columna=b.fila=b.columna=1;
	a.matriz[0][0]=b.matriz[0][0]=1.0;
	do
	{
		switch(d=Menu())
		{
			case '0':
				break;
			case '1':
				PedirMatriz(&a);
				break;
			case '2':
				PedirMatriz(&b);
				break;
			case '3':
				if(Multiplicar(&a,&b,&res)==ERROR)
				{
					printf("\nNo es posible multiplicar A*B\n");
				}
				else
				{
					Mostrar(&res);
				}
				break;
			case '4':
				if(Multiplicar(&b,&a,&res)==ERROR)
				{
					printf("\nNo es posible multiplicar B*A\n");
				}
				else
				{
					Mostrar(&res);
				}
				break;
		}
	}
	while(d!='0');
	return 0;
}
