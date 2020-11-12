//primer programa en c
//imprime en pantalla el famoso hola mundo
#include <stdio.h>//llama la libreria stdio.h por medio de la instruccion del preprocesador include, que incluye las funciones basicas de entrada y salida en C

int main()//funcion principal, de tipo entero, regresa un entero
{
	printf("Hola mundo\n");//funcion printf imprime en la pantalla lo que contiene dentro del parentesis, en este caso una cadena (delimitada por comillas, se agrega \n que corresponde a un salto de linea
	return 0;//indica el final del programa, este devuelve un valor de tipo entero, ya que la funcion es de tipo int
}
