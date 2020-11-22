//Codigo 11, ejemplo de conversion forzada de tipo de datos y de conversion de datos de acuerda al tamano de los datos dentro de una misma expresion
#include <stdio.h>

int main()
{
	int a=3,b=2;//se declaran 2 variables tipo entero
	float c;//se declara una variable tipo float
	c=(float)a/b;//la variable 'a' que era una variable tipo entero se convierte a flotante con la funciion "(float)", esto hace que en automatico la variable 'b' se convierta tambien a float, ya que en C cuando en una misma expresion aparecen dos o mas tipos de datos C los convierte a todos al tipo del mas grande de la expresion
	printf("El valor de c es: %f\n",c);
	return 0;
}
