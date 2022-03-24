#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero = 0;
    int flag = 0;
    int error = 0;
    char buf[10];

    printf("-- Programa encargado de analizar una cadena de valores con el fin de encontrar el numero 23 --\n\n\n");

    printf("-> Introducir solo numeros enteros\n");
    printf("-> Determinar el final del ingreso de valores con el numero 235\n\n");

    while(numero != 235){

        do {
            printf("Ingresar valor: ");
            scanf("%s", buf);
            error = sscanf(buf, "%d", &numero);

            if(numero == 23 && flag == 0){
                flag = 1;
            }

            if(error != 1) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);

    }

    if(flag == 0){
        printf("No se encontro el numero 23 en la cadena de valores\n");
    }

    if(flag == 1){
        printf("Se encontro el numero 23 en la cadena de valores\n");
    }

    system("pause");

    return 0;
}