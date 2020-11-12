//cuarto codigo que ejemplifica el alcance de las variables, y del uso del ciclo for
#include <stdio.h>

int sum;//variable de tipo entero que puede ser accedida desde cualqueir lugar del programa

void suma(int x)//funcion de tipo void que recibe un entero y lo suma
{
	sum=sum+x;
}

void intercambio(int *a, int *b)//funcion de tipo void que recibe dos punteros y cambia el valor de las variables ubicadas en dichas direcciones de memoria
{
	if(*a>*b)
	{
		int inter;//variable que solo existe dentro de la funcion intercambio
		inter=*a;//la variable recibe el valor de la variable ubicada en dicha direccion
		*a=*b;//se asigna el valor de dicha variable al puntero
		*b=inter;;//se asigna el valor de dicha variable al puntero
	}
}

int main()
{
	int contador,a=9,b=0;
	sum=0;
	intercambio(&a,&b);//se pasan dos direcciones de memoria a la funcion intercambio por medio del indicador &
	for(contador=a;contador<=b;contador++)
	{
		suma(contador);
	}
	printf("%d\n",sum);
	return 0;
}
