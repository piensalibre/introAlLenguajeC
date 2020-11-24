//codigo 29, ejemplo de fgets, se usa en lugar de gets
#include <stdio.h>
#define TAM 100

int main()
{
	char cadena[TAM];
	puts("Introduce una cadena:");
	fgets(cadena,TAM,stdin);//se usa en lugar de gets, recibe como argumentos la cadena, el tamano de ella y el metodo de entrada, al final de la cadena no convierte el salto de linea en '\0'
	puts("La cadena es:");
	printf("%s",cadena);
	return 0;
}
