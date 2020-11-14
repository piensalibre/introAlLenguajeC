//Decimo codigo donde se hace otro ejemplo del operador ternario
#include <stdio.h>

int main()
{
	int x,y;
	y=(x>0)?100:200;//El operador ternario evalua a si x es mayor a 0, si ese es el caso le asigna el valor de 100 a y, si no le asigna el valor de 200
	printf("Y vale:%d\n",y);
	printf("X vale:%d\n",x);
	x=1;
	y=(x>0)?100:200;
	printf("Y vale:%d\n",y);
	printf("X vale:%d\n",x);
	return 0;
}
