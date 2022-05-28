#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de analizar 5 microprocesadores y determinar si el microprocesador más caro es también el más rápido, o no --\n\n\n");

    printf("-> Introducir solo numeros positivos\n\n");

    system("cls");

    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define RESET   "\x1b[0m"

    int precio[5];
    float frecuencia[5];

    float pre = 0;
    float fre = 0;

    int precioMas = 0;
    float frecuenciaMas = 0;

    int prn = 0;
    int frn = 0;

    size_t e = sizeof(precio)/sizeof(precio[0]);
    size_t s = sizeof(frecuencia)/sizeof(frecuencia[0]);

    int error = 0;
    char buf[10];

    for(int i = 1; i<=5; i++){

        do {
            printf("Ingresar el precio del %d microprocesador: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%f", &pre);

            if(error != 1 || pre < 0) {
            printf("Entrada Invalida\n");
            }

            printf("Ingresar la frecuencia correspondiente al %d microprocesador: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%f", &fre);

            if(error != 1 || fre < 0) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);



    precio[i] = pre;
    frecuencia[i] = fre;
    
    }

    for(int i = 1; i <= e; ++i){

    if (precio[i] > precioMas) precioMas = precio[i];
    if (frecuencia[i] > frecuenciaMas) frecuenciaMas = frecuencia[i];

    }

    for(int i = 1; i <= e; ++i){

        if(precio[i] == precioMas) prn = i;
        if(frecuencia[i] == frecuenciaMas) frn = i;

    }

    if(prn == frn) printf("\nEl Microprocesador mas caro es tambien el mas rapido\n");
    else printf("\nEl Microprocesador mas caro no es el mas rapido\n");

    system("pause");

    return 0;
}