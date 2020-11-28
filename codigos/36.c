//codigo 36, programa que ordena un fichero de cualquier tamano mediante el algoritmo QuickSort, el fichero contiene como primer elemento un unsigned con el numero de elementos del fichero y a continuacion figuran todos los elementos a ordenar
#include <stdio.h>
#include <stdlib.h>

//rutina que lee el fichero de datos y devuelve un puntero al array de la memoria reservada, recibe como parametros un puntero de tipo caracter con el nombre de ficheros a leer, un puntero de tipo unsigned que contendra el numero de elementos del array, regresa un puntero de tipo float hacia el array o el valor de NULL si sucede un error
float *LeerFichero(const char *nombre, unsigned *num)
{
	FILE *fp;
	float *p;
	unsigned i;
	if ((fp=fopen(nombre,"r"))==NULL)
	{
		printf("\nError, no puedo abrir el fichero: %s\n",nombre);
		return NULL;
	}
	fscanf(fp,"%u\n",num);
	if((p=(float *)calloc(*num,sizeof(float)))==NULL)
	{
		printf("\nError, memoria insuficiente.\n");
		fclose(fp);
		return NULL;
	}
	for(i=0;i<*num;i++)
	{
		fscanf(fp,"%f\n",&p[i]);
	}
	fclose(fp);
	return p;
}

//rutina que escribe un fichero de datos ordenados recibe como argumentos un puntero de tipo cadena con el nombre del fichero donde se van a guardar los datos, un entero con los numeros de elementos del array y un puntero de tipo flotante al array ordenado
void GuardarFichero(const char *nombre,const unsigned num,const float *p)
{
	FILE *fp;
	unsigned i;
	if ((fp=fopen(nombre,"w"))==NULL)
	{
		printf("\nError, no puedo crear el fichero: %s\n",nombre);
		return ;
	}
	fprintf(fp,"%u\n",num);
	for(i=0;i<num;i++)
	{
		fprintf(fp,"%f\n",p[i]);
	}
	fclose(fp);
}

//rutina que ordena un array segun el algoritmo Quick-Sort, recibe como parametros un puntero de tipo float al array a ordenar, dos enteros, una hacia el elemento de la izquierda y otro hacia el elemento de la derecha a ordenar
void QuickSort(float *p, unsigned izq, unsigned der)
{
	unsigned i=izq,j=der;
	float val,inter;
	val=p[(i+j)/2];
	do
	{
		while(p[i]<val) i++;
		while(p[j]>val) j--;
		if(i<=j)
		{
			inter=p[i];
			p[i]=p[j];
			p[j]=inter;
			i++;
			j--;
		}
	}while(i<=j);
	if (izq<j)
	{
		QuickSort(p,izq,j);
	}
	if (i<der)
	{
		QuickSort(p,i,der);
	}
	return;
}

int main(int argc, char *argv[])
{
	float *p;
	unsigned num;
	if(argc!=3)
	{
		printf("\nModo de uso: %s <fichero1> <fichero2>\n",argv[0]);
		 return (1);
	}
	if ((p=LeerFichero(argv[1],&num))==NULL)
	{
		return (1);
	}
	QuickSort(p,0,num-1);
	GuardarFichero(argv[2],num,p);
	free(p);
	return 0;
}
