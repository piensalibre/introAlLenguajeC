//codigo 24, ejemplo de recursividad
#include <stdio.h>

unsigned Factorial(unsigned num)//ejemplo de una funcion que calcula el factorial de un numero
{
	if(num==0)
	{
		return 1;
	}
	return num*Factorial(num-1);//una funcion en C puede llamarse a si misma
}

int main()
{
	int num;
	printf("Ingresa una numero:\n");
	scanf("%d",&num);
	printf("%d\n",Factorial(num));
	return 0;
}
