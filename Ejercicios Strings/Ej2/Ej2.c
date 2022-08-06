//2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés. Por ejemplo, para "CASA" se debe mostrar "ASAC".

#include <stdio.h>
#include <string.h>
#define Longitud 21
 
char *invertir(char cadena[]);
 
int main(void) {
  char cadena[Longitud];
  printf("Escribe una palabra (cuya longitud sea menor a %d): ", Longitud-1);   //Se colicita la cadena (si es mayor a 20 esta se recortara)
 
  fgets(cadena, Longitud, stdin);  //Se lee la cadena

  cadena[strcspn(cadena, "\r\n")] = 0;  //Se remueve el salto de linea
 
  printf("\nLa palabra invertida es: %s\n\n", invertir(cadena));   //Se imprime el contenido de la funcion segun el argumento
  
system("pause");

return 0;

}

char *invertir(char cadena[]) {
  int longitud = strlen(cadena);  //Leo el argumento de la cadena donde se guarda valor por valor la cadena
  char temporal;  //Declaro char temporal para intercambiar los caracteres
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2); izquierda++, derecha--) {   //Se van intercambiando constantemente los caracteres de la cadena teniendo en cuenta su ubicaion dada por la longitud
    temporal = cadena[izquierda];
    cadena[izquierda] = cadena[derecha];
    cadena[derecha] = temporal;
  }
  return cadena; //Devuelve la cadena del argumento
  
}
