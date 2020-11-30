//codigo 40, programa que busca los numeros primos de un numero,el numero debe estar en el rango de los numeros enteros soportados por el tipo int
#include <stdio.h>

int primerDiv(int n);
int factoresPrimos(int n,int *fp,int nfMax);

int main()
{
	int vFactPrim[25];
	int n;
	int nFact;
	int i;
	printf("\nFactores primos de un entero >=2.\n\n");
	printf("n = ");
	scanf("%d",&n);
	if(nFact=factoresPrimos(n,vFactPrim,25))
	{
		for(i=0;i<nFact;i++)
		{
			printf(" %d",vFactPrim[i]);
		}
		printf("\n");
	}
	else printf(" ERROR\n");
	return 0;
}

int primerDiv(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return i;
		}
	}
	return n;
}

int factoresPrimos(int n,int *fp,int nfMax)
{
	int d,nf;
	if(n<2)
	{
		printf("%d es menor a 2.\n",n);
		return 0;
	}
	nf = 0;
	do
	{
		if(nf>=nfMax)
		{
			printf("El programa fue disenado para solo dar los primeros 25 factores primos, este numero tiene mas de 25 factores primos.\n");
			return 0;
		}
		d = primerDiv(n);
		fp[nf] = d;
		nf++;
		n/=d;
	}while(n>1);
	return nf;
}
