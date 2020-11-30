//codigo 43, ejemplo de paso de punteros a una funcion
#include <stdio.h>

void f(int *pv1, int *pv2)
{
	int tmp;
	tmp = *pv1; 
	*pv1 = *pv2;   
	*pv2 = tmp;
}

int main()  
{   
	int x=10;   
	int *p;   
	int y=15;   
	p=&y;   
	f(&x,p);   
	printf("\n X = %d Y = %d",x,y);   
	return 0;  
}
