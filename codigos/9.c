//Noveno codigo, ejemplo de uso del operador ternario
#include <stdio.h>

int main()
{
	int x;
	x=7;
	x? printf("Es true.\n") : printf("Es false.\n");//El operador ternario '?' evalua a la primera expresion, en este caso a x, si x es verdadera ejecuta la primer expresion, si es falso ejecuta el codigo que se encuentra despues de ':', recordar que en C cualquier valor distinto a nulo es verdadero
	return 0;
}
