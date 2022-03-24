#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char inicio[20];
    int cantidad = 0;
    int error = 0;
    char buf[10];

    printf("-- Programa encargado de mostrar los pares de una cadena del 1 al 30 inclusive --\n\n\n");

    printf("?? FulC ??\n\n\n");

do {

    printf("-> Escribir [Inicio] para mostrar los pares de la cadena de valores: ");
    scanf("%s", inicio);

    if(strcmp(inicio, "Inicio") == 0){

    for(int i = 1; i<=30; i++){

        if(i%2 == 0){

        printf("Numero par: %d \n", i);

        }
    }

    }else if(strcmp(inicio, "FulC") == 0){

    printf("\nFelicidades desbloqueaste una mejora en el codigo!!\n\n\n");

    printf("-- Programa encargado de mostrar los pares de una cadena del 1 al valor indicado inclusive --\n\n");
    
    printf("- Solo se pueden ingresar valores enteros positivos para analizar la matriz\n\n\n");


        do {
        printf("-> Indique la cantidad de valores a evaluar: ");
        scanf("%s", buf);
        error = sscanf(buf, "%d", &cantidad);

        if(error != 1 || cantidad < 0) {
        printf("Entrada Invalida\n");
        }

    } while (error != 1 || cantidad < 0);

        for(int i = 1; i<=cantidad; i++){

        if(i%2 == 0){

            printf("Numero par: %d \n", i);

            }
        }
    }
    
    }while(strcmp(inicio, "Inicio") != 0 && strcmp(inicio, "FulC") != 0);

    system("pause");

    return 0;
}