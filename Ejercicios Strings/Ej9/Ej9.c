#include <stdio.h>
#include <string.h>
int main (){

    char cadena[30] = {0}; //Variable donde almaceno la palabra

    printf("Ingrese una palabra (Hasta 20 letras en MATUSCULA): "); //Se solicita la palabra
    scanf("%s", cadena); //Se guarda la palabra en la variable "cadena"

    for (int i = 0; i < strlen(cadena); i++){ //Se recorre el array

        cadena[i] = (cadena[i] + 3); //Se cambia cada letra por sus siguientes 3 letras en la tabla assci
        if (cadena[i] + 3 > 90) cadena[i] = cadena[i] - 26; //Se cambia cada letra por sus siguientes 3 letras en la tabla assci volviendo a empezar el abecedario

    }
    printf("\nPalabra codificada: %s\n", cadena); //Imprime palabra codificada final

    system("pause");
	return 0;

}
