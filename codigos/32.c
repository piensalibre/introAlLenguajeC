//codigo 32, ejemplo basico de asignacion de memoria dinamica
#include <stdio.h>
#include <stdlib.h>//se llama a esta libreria ya que todas las funciones que realizan manejo activo de la memoria del sistema estan en esta libreria
int main()
{
	float *a;
	a=(float *)malloc(sizeof(float));//la funcion malloc recibe como parametros el numero de bytes que se desean reservar, este numero lo devuelve la funcion sizeof que recibe como argumento el tipo de variable, la funcion malloc devuelve un puntero de tipo void, dicho puntero puede ser asignado a una variable puntero de cualquier tipo mediante una conversion forzada de tipo de datos, si la asignacion de memoria no puede realizarse la funcion malloc devuelve un puntero nulo(NULL), es por eso que es necesario comprobar que el puntero no es nulo
	if(a==NULL)//esta linea evalua que se llevo a cabo de manera correcta la asignacion de memoria
	{
		exit(0);//la funcion exit hace uso de la libreria "stdlib.h", el argumento 0 significa que no hay error
	}
 	printf("Este es un mensaje que solo se puede escribir si hubo una asignacion correcta de memoria\n");
	return 0;
}
