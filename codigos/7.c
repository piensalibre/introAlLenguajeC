//septimo codigo
//se agregan las constantes que con la instruccion del preprocesador define, se usan las cadenas de caracteres y se hace uso de las funciones gets y puts, se recomienda ya no hacer uso de la funcion gets y hacer uso de la funcion fgets
#include <stdio.h>

#define TAM 100//se crea una constante llamada TAM con valor 100

int main()
{
	char cadena[TAM];//se declara una cadena de caracteres de tamano 100
	puts("Introduce tu nombre");//se imprime en pantalla una cadena con la funcion puts
	gets(cadena);//se recibe una cadena con la funcion gets
	puts("Gracias");
	puts(cadena);
	return 0;
}
