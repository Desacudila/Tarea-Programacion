//8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará. Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.

#include <stdio.h>
#include <string.h>

#define FIN "FIN"

int main(){


	char temporalNombre[100]; //Variable de guardado temporal para comparar
	char nombreFinal[100]; //Variable para comparar pesos donde se almacea la primera cadena alfabeticamente

	while(strcmp(temporalNombre, FIN) != 0){ // Si no es diferente de 0 es equivalente a FIN

		printf("\nIntroducir nombre: ");
		scanf("%s" ,temporalNombre);

		if(strcmp(temporalNombre, nombreFinal) < 0) strcpy(nombreFinal ,temporalNombre); //Comparacion por pesos de cadenas. Si se encuentra una variable mayor alfabeticamente o menos pesada se asigna a nombreFinal
	}

	printf("\n\nEl mayor nombre alfabeticamente es: %s\n" ,nombreFinal); //Imprimir en pantalla el primer nombre alfabeticamente

	system("pause");
	return 0;
}
