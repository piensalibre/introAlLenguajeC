//codigo 17, ejemplo de matriz
#include <stdio.h>

int main()
{
	float matriz[3][3];//declaracion de una matriz bidimensional de tamano "3x3"
	int i,j;
	for (i=0;i<3;i++)//se utilizan 2 for para rellenar el arreglo, este for itera las filas
	{
		for(j=0;j<3;j++)//este for itera las columnas
		{
			printf("Ingrese el numero de la posicion M[%d][%d]:\n",i,j);
			scanf("%f",&matriz[i][j]);//esta linea rellena la matriz en los indices que indican las variables i,j
		}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("El numero de la posicion M[%d][%d] es: %f.\n",i,j,matriz[i][j]);
		}
	}
	return 0;
}
