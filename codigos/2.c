//segundo programa, se agrega la funcion scanf, el indicador hacia posiciones en la memoria, la declaracion de variables de tipo entero y los operadores de asignacion, division y modulo
#include <stdio.h>

int main()
{
	int x,horas,minutos;//se declaran 3 variables de tipo entero, la variable x, la variable horas y la variable minutos
	printf("Cuantos minutos?\n");
	scanf("%d",&x);//se llama a la funcion scanf que ingresa los valores de tipo decimal (por eso el indicador %d de decimal) a la posicion de memoria asignada a la variable x (por eso se usa el indicador & antes de la variable x, este indicador apunta a una direccion en memoria)
	horas=x/60;//se asigna a la variable horas el resultado de la operacion x/60, en este caso el operador / indica una division entre dos enteros
	minutos=x%60;//se asigna a la variable minutos el resultado de la operacion x%60, en este caso el operador % indica el residuo de la division de dos enteros
	printf("%d minutos son %d hora(s) y %d minuto(s)\n",x,horas,minutos);
	return 0;
}
