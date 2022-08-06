//3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.

#include <stdio.h>
#include <string.h>

int main(void) {

    char texto1[20]; //Variable de almacenamiento de palabra ingresada
    char texto2[20];

    printf("Ingrese la primera palabra: ");  //Se solicita la primera palabra a contar
    scanf("%s", texto1); //Leo la palabra ingresada

    printf("Ingrese la segunda palabra: ");  //Se solicita las egunda palabra a contar
    scanf("%s", texto2); //Leo la palabra ingresada

  if (strcmp(texto1, texto2) == 0) {    //Comparo las cadenas
    printf("Las cadenas son iguales");  //Indicar que son iguales si lo son
  } else {
    printf("Las cadenas NO son iguales");   //Indicar que no son iguales
  }

  system("pause");
  
  return 0;
}