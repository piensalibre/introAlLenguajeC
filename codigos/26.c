//codigo 26, ejemplo de uso de la directiva #define del preprocesador
#include<stdio.h>
#define MIN(a,b) (a<b) ? a : b//#define se usa para definir un identificador y una cadena, la cual sustituira al identificador cada vez que se encuentre en el codigo, el uso mas comun es el de definir valores constantes, en este ejemplo se muestra que el identificador puede recibir argumentos

int main()
{
    printf("El valor minimo es: %d\n",MIN(10,7));
    return 0;
}