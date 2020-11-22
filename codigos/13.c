//codigo 13 que ejemplifica el uso de getc y de el valor de verdad del operador !=, recordad que en C lo que no es 0 es verdad
#include <stdio.h>

int main()
{
	printf("Presione ESC para salir del programa.\n");
	while(getc(stdin)!='\x1B');//este ciclo no finalizara hasta que el usuario no presione la tecla ESC
	return 0;
}
