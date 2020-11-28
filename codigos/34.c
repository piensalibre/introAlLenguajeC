//codigo 34, programa que determina si una cadena se lee igual de derecha a izquerda que de izquierda a derecha
#include <stdio.h>
#include <string.h>

#define TAM 100

//La siguiente funcion determina si una palabra se lee igual de derecha a izquierda que de izquierda a derecha, recibe como argumentos un puntero a la cadena y devuelve 0 si no se lee igual, sin embargo si se lee igual devuelve un numero distinto a 0
int Palindromo(char *cadena)
{
	int i,j;
	i=0;
	j=strlen(cadena)-1;
	while(i<j && cadena[i]==cadena[j])
	{
		i++;
		j--;
	}
	return (i>=j);
}

int main()
{
	char cadena[TAM];

	printf("Introduce una palabra\n");
	gets(cadena);
	printf("La cadena: %s %s palindroma.\n",cadena,(Palindromo(cadena))?"es":"no es");
	return 0;
}
