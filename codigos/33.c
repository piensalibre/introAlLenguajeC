//codigo 33, ejemplo basico de liberacion dinamica de memoria
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float *a;
	a=(float *)malloc(sizeof(float));
	if(a==NULL)
	{
		exit(0);
	}
	free(a);//la memoria se libera al terminar el programa, sin embargo a veces es necesario liberar la memoria reservada durante la ejecucion del programa, esto puede realizarse mediante el uso de la funcion free(), esta linea libera la memoria de 'a', un aspecto a tomar en cuenta es que el puntero a liberar no debe apuntar a NULL, ya que eso produciria un fallo en el programa, es por eso que debe comprobarse que la asignacion se llevo a cabo de manera correcta
 	printf("Este es un mensaje que solo se puede escribir si hubo una asignacion y liberacion correcta de memoria\n");
	return 0;
}
