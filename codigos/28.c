//codigo 28, ejemplo de gets y puts
//NOTA:SE RECOMIENDA NO USAR LA FUNCION GETS POR RAZONES DE SEGURIDAD
#include <stdio.h>
#define TAM 100

int main()
{
	char cadena[TAM];
	puts("Introduce una cadena:");//puts imprime en pantalla una cadena y le agrega un salto de linea
	gets(cadena);//lee una cadena desde el teclado, si se ejecuta de manera correcta devuelve un puntero, esta funcion permite corregir errores de teclado usando la tecla de retroceso antes de pulsar el retorno de carro, al recibir el retorno de carro lo reemplaza con un caracter de final de String ('\0')
	puts("La cadena es:");
	puts(cadena);
	return 0;
}
