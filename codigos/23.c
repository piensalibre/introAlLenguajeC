//codigo 23,ejemplo de paso de argumentos de la funcion main
#include <stdio.h>

int main(int argc, char *argv[],char *env[])//la funcion main acepta argumentos como toda funcion, estos son el entero "int argc"(este parametro contiene el numero de argumentos en la linea de ordenes de la llamada al programa), el array de punteros a strings "char *argv[]"(este parametro contiene un puntero a cada argumento) y el array de punteros a strings "char *env[]"(contiene un puntero a cada una de las variables de ambiente del sistema operativo), el nombre de los argumentos no tiene por que ser ese pero en toda la literatura de C por convencion se usan estos.
{
	int i;
	printf("El valor de argc es: %d.\n",argc);
	for(i=0;i<argc;i++)//mientras la variable i sea menor al numero de argumentos dados en la linea de comandos se ejecutara el bloque de codigo
	{
		printf("El argumento %d es: %s.\n",i,argv[i]);//imprime la cadena en el array argv en la posicion de i
	}
	for(i=0;env[i]!=NULL;i++)//mientras la posicion del array env[i] sea diferente a NULL se ejecutara el codigo
	{
		printf("La variable de ambiente %d es: %s.\n",i,env[i]);//imprime la cadena en el array env en la posicion de i
	}
	return 0;
}
