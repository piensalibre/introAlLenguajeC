//quinto codigo que ejemplifica un uso basico de los tipo enum
#include <stdio.h>

int main()
{
	enum mesesAno{enero,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre};//se declara el enum
	printf("El mes de enero vale %d\n",enero);//se imprime en pantalla el valor del indice de la constante enero tipo enum
	return 0;
}
