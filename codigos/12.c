//codigo 12, ejemplo de uso de la libreria math.h y de un ciclo for sin poner el valor de inicio de manera directa y llegar al final con otra operacion que no sea el incremento y decremento de la variable
#include <stdio.h>
#include <math.h>//se incluye la libreria math.h, el proposito de esta libreria es hacer uso de funciones matematicas, esta libreria se agrega con -lm a la hora de compilar

int main()
{
	float a=81;
	for(;a>2;a=sqrt(a))//ciclo for que mientras el valor de 'a' va a ejecutar el codigo dentro de los corchetes y al final del bloque le asignara a 'a' el valor de la raiz cuadrada del valor actual de 'a'
	{
		printf("%f\n",a);
	}
	return 0;
}
