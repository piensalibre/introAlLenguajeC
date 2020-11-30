//codigo 44, ejemplo de manejo de cadenas
#include <stdio.h>
#include <string.h>
int main()
{
	char aviso[30];
	strcpy(aviso, "Hola mundo");
	printf("%s", aviso);
	printf("\nLongitud = %lu\n", strlen(aviso));
	return 0;
}
