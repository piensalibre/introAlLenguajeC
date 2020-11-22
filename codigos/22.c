//codigo 22, ejemplo de paso de arrays a funciones
#include <stdio.h>//ejemplo que en C no se pasan los arrays por valor a las funciones, sino por referencia, ya que en la llamada lo que se pasa es la direccion del primer elemento(el nombre de un array es un puntero al primer elemento, y de ahi se opera con aritmetica de puntero),por valor solo es posible pasar elementos individuales del array

void PasoValorReferencia(int *array,int valor)//se recibe un puntero a un array(se recibe la direccion de memoria del primer elemento del array), y un valor de tipo entero, en este caso el elemento array[3]
{
	array[5]=-8;
	valor=4;
}

int main()
{
	int array[10]={0,0,0,0,0,0,0,0,0,0};
	PasoValorReferencia(array,array[3]);//se pasa por referencia el array completo y por valor el elemento array[3]
	printf("Array[5] vale %d y array[3] vale %d.\n",array[5],array[3]);
	return 0;
}
