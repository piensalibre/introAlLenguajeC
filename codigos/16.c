//codigo 16, ejemplo de array
#include <stdio.h>

int main()
{
	int x[10],i,suma;//se declaran las variables tipo entero, la variable x que precede un par de corchetes con el numero 10 indica un vector de tipo entero de tamano 10.
	for(i=0;i<10;i++)//este ciclo for se usa para llenar el vector, los indices del vector empiezan desde 0
	{
		printf("Introducir un numero %d: \n",i);
		scanf("%d",&x[i]);//se empieza a rellenar el vector en el indice indicado por el valor de la  variable i
	}
	for(suma=0,i=0;i<10;i++)
	{
		suma=suma+x[i];
	}
	printf("La suma es: %d\n",suma);
	return 0;
}
