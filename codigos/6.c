//sexto codigo
//se introduce la variable tipo char, el ciclo do while, las funciones getchar y putchar, los operadores && y '!' 
#include <stdio.h>

int main()
{
	char ch;//se declara una variable de tipo caracter
	do//se inicia un ciclo do que se ejecuta mientras se cumpla la sentencia dentro del while, el ciclo do while permite que se ejecute por lo menos una vez el ciclo
	{
		ch=getchar();//se asigna a la variable de tipo char un caracter con la funcion de entrada getchar
		putchar(ch);//se imprime en pantalla la variable ch mediante la funcion putchar
	}
	while(ch!='e'&&ch!='E');//se establece la condicion que ejecutara el ciclo do while mientras esta se cumpla en este caso el ciclo se ejecutara mientras el valor de la variable ch sea diferente a 'e' y a 'E', se hace uso de && que indica el operador logico 'y', este operador unicamente es verdadero si ambas condiciones son verdaderas, tambien se hace uso del operador '!', que indica una negacion
	printf("\n");
	return 0;
}
