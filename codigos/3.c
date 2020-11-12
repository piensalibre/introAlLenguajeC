//tercer codigo que ejemplifica la suma de dos enteros introducidos por teclado e imprime en pantalla su resultado
#include <stdio.h>

int main()
{
	int a,b,suma;
	printf("Dame un valor:\n");
	scanf("%d",&a);
	printf("Dame el otro valor:\n");
	scanf("%d",&b);
	suma=a+b;
	printf("La suma es: %d\n",suma);
	return 0;
}
