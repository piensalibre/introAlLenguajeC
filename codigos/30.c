//codigo 30, ejemplo de usa de scanf y printf
#include <stdio.h>

int main()
{
	int a,b;
	printf("Introduce el valor de a: ");//imprime lo que esta dentro de los parentesis
	scanf("%d",&a);//recibe desde teclado y manda a la direccion de memoria que apunte con el operador '&' con el formato que indique al operador '%'
	printf("Introduce el valor de b: ");
	scanf("%d",&b);
	if(b!=0)
		printf("El valor de %d dividido entre %d es: %f\n",a,b,(float)a/b);//imprime lo que esta dentro de los parentesis y puede anadir valores de las variables a las cadenas  mediante el operador '%', el cual indica el formato de dicho valor, despues de las comillas se indican las valores, si son mas de uno se separan por comas
	else
		printf("Error,b vale 0.\n");
	return 0;
}
