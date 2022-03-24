#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char inicio[20];
    int cantidad = 0;
    int numero = 0;
    int error = 0;
    char buf[10];

    printf("-- Programa encargado de mostrar los pares de una matriz indicada por el usuario --\n\n\n");

    printf("-> Introducir solo numeros enteros positivos\n");
    printf("-> Determinar el final del ingreso de valores con el numero -1\n\n");

    while(numero != -1){

        do {
            printf("Ingresar valor: ");
            scanf("%s", buf);
            error = sscanf(buf, "%d", &numero);

            if(numero%2 == 0){
                cantidad = cantidad + 1;
            }

            if(error != 1) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);
    }

    printf("La cantidad de numeros pares encontdados es: %d\n", cantidad);

    system("pause");

    return 0;
}