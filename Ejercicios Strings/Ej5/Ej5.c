//5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.

#include <stdio.h>
#include <ctype.h>

int contarLetraA(char *cadena);  //Funcion para contar las vocales

int main(int argc, char const *argv[])
{
	
	char entrada[1000];
	printf("Ingresee una palabra:\n"); //Solicito la cadena
	gets(entrada); //Ingreso la cadena a la variable entrada (Lo mismo que un scanf)
	int a = contarLetraA(entrada); //Asigno a la variable a la funcion que las cuenta (enlazando tambien nuestra cadena al argumento)
	printf("El numero de vocales que tiene la cadena es: %d\n", a); //Imprimo la cantidad de vocales de la cadena

	system("pause");
	return 0;
}

int contarLetraA(char *cadena){
	int a = 0;

	for (int indice = 0; cadena[indice] != '\0'; ++indice){ //Recorrer la cadena para contar las vocales

		char letraActual = tolower(cadena[indice]);	//Recorro la cadena letra por letra buscando con el indice del for

		if (
			letraActual == 'a' || 
			letraActual == 'e' || 
			letraActual == 'i' || 
			letraActual == 'o' || 
			letraActual == 'u'
			)
        {
            a++; //Si se encuentra una a se suma al contador de la varialbe del inicio
        }	 
	
	}
	return a;
}