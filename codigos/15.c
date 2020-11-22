//codigo 15, ejemplo de uso del continue, este codigo imprime unicamente los numeros pares
#include <stdio.h>
int main()
{
	int x;
	for(x=1;x<=100;x++)
	{
		if(x%2)//si x modulo 2 es diferente de 0 se evalua como verdadera la condicion y se ejecuta el bloque de codigo
		{
			continue;//continua con el siguiente ciclo ignorando el codigo que sigue
		}
		printf("%d\n",x);
	}
	return 0;
}
