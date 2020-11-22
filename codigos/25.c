//codigo 25, ejemplo de estructuras, por defecto C pasa las estructuras a funciones por valor, si es un array de estructuras lo pasa por referencia, los elementos de la estructura los pasa siguiendo las reglas del tipo del elemento, si dentro de la estructura hay un array este sera pasado como un puntero al primer elemento del array
#include <stdio.h>

struct ALFA//se declara la estructura ALFA
{
	int val;//se declara una variable perteneciente a la estructura
	char cadena[20];
};

void PasoDeElementos(int val, char *cadena)
{
	val=15;
	cadena[7]='a';
}

void PasoDeLaEstructuraPorValor(struct ALFA a)
{
	a.val=14;
	a.cadena[6]='b';
}

void PasoDeLaEstructuraPorReferencia(struct ALFA *a)
{
	a->val=13;//se usa "->" debido a que si no se usara este operador se tendria que usar la construccion "*(variableEstructura.nombreVariable)" ya que el '.' tiene menor prioridad que el '*' y por eso es necesario el uso de parentesis, resultando mas facil de usar el operador "->"
	a->cadena[5]='c';
}

void PasoDeUnArrayDeEstructuras(struct ALFA *b)
{
	b[4].val=12;
	b[5].cadena[4]='d';
}

int main()
{
	struct ALFA a,b[10];//se declaran una estructura a de tipo ALFA y un arreglo de estructuras de tipo ALFA
	PasoDeElementos(a.val,a.cadena);//se pasan los elementos de la estructura a
	PasoDeLaEstructuraPorValor(a);//se pasa la estructura por valor
	PasoDeLaEstructuraPorReferencia(&a);//se pasa de manera explicita la estructura por referencia
	PasoDeUnArrayDeEstructuras(b);//se pasa el array de estructuras
	return 0;
}
