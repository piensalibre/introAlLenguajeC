//codigo 27, ejemplo de uso de getchar y putchar
#include <stdio.h>
int main()
{
	char ch;
	do
	{
		ch=getchar();//getchar lee caracteres desde teclado
		putchar(ch);//escribe en pantalla caracteres
	}
	while (ch!='s' && ch!='S');
	return 0;
}
