//codigo 14,ejemplo de uso de un break en C
#include <stdio.h>

int main()
{
	int x;
	for(x=0;x<10;x++)//ciclo que inicializa a x en 0, y mientras x sea menor a 10 ejecutara el bloque de codigo, una vez este se ejecute x tendra un incremento
	{
		for(;;)//bucle infinito
		{
			if(getc(stdin)=='\x1B')//si el usuario presiona ESC se ejecutara el codigo dentro de los corchetes
			{
				break;//esta linea de codigo sirve para salir de un ciclo
			}
		}
		printf("Sali del bucle infinito, el valor de x es: %d\n",x);
	}
	return 0;
}
