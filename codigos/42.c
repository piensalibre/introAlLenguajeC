//codigo 42, ejemplo de uso de arreglo de caracteres, y de como al incluir el caracter especial '\0' el arreglo puede ser utilizado como una cadena
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char aviso[30];
	int i;
	aviso[0]='H';
	aviso[1]='o';
	aviso[2]='l';
	aviso[3]='a';
	aviso[4]=' ';
	aviso[5]='m';
	aviso[6]='u';
	aviso[7]='n';
	aviso[8]='d';
	aviso[9]='o';
	aviso[10]='!';
	for(i = 0;i <=10;i++)
	{
		printf("%c",aviso[i]);//imprime en pantalla un arreglo de caracteres
	}
	printf("\n");
	aviso[0]='H';
	aviso[1]='o';
	aviso[2]='l';
	aviso[3]='a';
	aviso[4]=' ';
	aviso[5]='m';
	aviso[6]='u';
	aviso[7]='n';
	aviso[8]='d';
	aviso[9]='o';
	aviso[10]='!';
	aviso[11]='\0';
	printf("%s",aviso);//imprime en pantalla una cadena hasta donde encuentra el '\0'
	printf("\n");
	aviso[0]='H';
	aviso[1]='o';
	aviso[2]='l';
	aviso[3]='a';
	aviso[4]='\0';
	aviso[5]='m';
	aviso[6]='u';
	aviso[7]='n';
	aviso[8]='d';
	aviso[9]='o';
	aviso[10]='!';
	aviso[11]='\0';
	printf("%s",aviso);//imprime en pantalla una cadena hasta donde encuentra el '\0'
	printf("\n");
	return 0;
}
