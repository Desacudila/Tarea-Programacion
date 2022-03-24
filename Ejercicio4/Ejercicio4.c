#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char inicio[20];
    int cantidad = 0;
    int error = 0;
    int cantidad2 = 0;
    int error2 = 0;
    char buf[10];
    char buf2[10];

    printf("-- Programa encargado de mostrar los multiplos de 3 en una cadena del 10 al 48 inclusive --\n\n");

    printf("?? FulC ??\n\n\n");

do {

    printf("-> Escribir [Inicio] para mostrar los multiplos de 3 de la cadena de valores: ");
    scanf("%s", inicio);

    if(strcmp(inicio, "Inicio") == 0){

    for(int i = 10; i<=48; i++){

        if(i%3 == 0){

        printf("Numero multiplo de 3: %d \n", i);

        }
    }

    }else if(strcmp(inicio, "FulC") == 0){

    printf("\nFelicidades desbloqueaste una mejora en el codigo!!\n\n\n");

    printf("-- Programa encargado de mostrar los multiplos de 3 de una matriz (indicada por el usuario) --\n\n");
    
    printf("- Solo se pueden ingresar valores enteros para analizar la matriz\n\n\n");


        do {
        printf("-> Indique la minima cantidad de valores a evaluar: ");
        scanf("%s", buf);
        error = sscanf(buf, "%d", &cantidad);
        printf("-> Indique la maxima cantidad de valores a evaluar: ");
        scanf("%s", buf2);
        error2 = sscanf(buf2, "%d", &cantidad2);

        if(error != 1 || error2 != 1) {
        printf("Entrada Invalida\n");
        }

    } while (error != 1 || error2 != 1);

        for(int i = cantidad; i<=cantidad2; i++){

        if(i%3 == 0){

            printf("Numero multiplo de 3: %d \n", i);

            }
        }
    }
    
    }while(strcmp(inicio, "Inicio") != 0 && strcmp(inicio, "FulC") != 0);

    system("pause");

    return 0;
}