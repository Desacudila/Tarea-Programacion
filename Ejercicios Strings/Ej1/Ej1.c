//1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada. Por ejemplo "CASA" debe indicar 4 letras.

#include <stdio.h> 
#include <string.h>

main()
{
    char texto[20]; //Variable de almacenamiento de palabra ingresada
    int longitud;   //Variable para leer la cantidad de caracteres de la cadena

do{

    printf("Ingrese una palabra: ");  //Se solicita la palabra a contar
    scanf("%s", texto); //Leo la palabra ingresada

	longitud = strlen(texto);   //Guardo la cantidad de caracteres de la cadena en la variable longitud mediante la funcion strlen

    if(longitud > 20){  //Se verifica que la cadena no sea mayor a 20
        printf("\nLa palabra ingresada debe tener maximo 20 caracteres. Por favor vuelva a intentarlo\n\n");
    }

}while (longitud > 20); //Si la cadena es mayor a 20 se vuelve a preguntar por una

printf( "\nLa cadena \"%s\" tiene %i caracteres.\n\n", texto, longitud );  //Si la cadena no es mayor a 20 se sale del while y se imprime en pantalla

system("pause");

return 0;

}