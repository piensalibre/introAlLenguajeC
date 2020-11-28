//codigo 31, ejemplo de apertura y cierre de un fichero mediante el uso de las funciones, fopen y fclose
#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;//se declara el puntero fp de tipo FILE, este tipo de punteros son estructuras que contienen el nombre del fichero y el modo de apertura
	if(argc!=2)//si la funcion main no recibe un segundo argumento se ejecuta el siguiente bloque
	{
		puts("Nombre del fichero no pasado");
		return 0;
	}
	if((fp=fopen(argv[1],"r"))==NULL)//si la funcion fopen que recibe el nombre del fichero(en este caso pasado como argumento a la funcion main), y el modo de apertura(en este caso pasado como solo lectura) no puede abrir el archivo devuelve el valor de NULL, este if evalua si se logro abrir el archivo o no, en caso de no lograrlo se ejecuta el siguiente bloque
	{
		printf("Error abriendo el fichero: %s\n",argv[1]);
		return 0;
	}
	if(fclose(fp))//si la funcion fclose logra cerrar el fichero con exito devuelve un 0, este if tomando en cuenta que en C cualquier valor distinto a 0 es verdadero evalua si no se logro cerrar el archivo con exito
	{
		puts("Error cerrando el fichero");
		return 1; 
	}
	return 0;
}
