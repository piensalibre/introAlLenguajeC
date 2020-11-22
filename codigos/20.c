//codigo 20, ejemplo de funciones
#include <stdio.h>

int EstaEn(char *cad,char c)//se define la funcion y dentro de los parentesis se declaran las variables que acepten los argumentos de la funcion
{
	while(*cad!='\0')//mientras el valor al que apunta el puntero sea diferente de '\0' se ejecutara el bucle
	{
		if(*cad==c)//si el valor al que apunta el puntero es igual al valor de c se ejecuta la siguiente linea
		{
			return 1;//si se cumple la condicion, en este caso que el caracter ingresado en c se encuentre en la cadena la funcion devuelve el valor de 1
		}
		cad++;
	}
	return 0;
}

int main()
{
	char cadena[]="Esta es una cadena de prueba.\n";
	if(EstaEn(cadena,'a'))
	{
		printf("Esta.\n");
	}
	else
	{
		printf("No esta.\n");
	}
	return 0;
}
