#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de mostrar en pantalla 4 numeros enteros [100, 200, 300, 400] --\n\n\n");

    printf("-> Introducir solo numeros enteros\n\n");

    int numero[4] = { 100, 200, 300, 400 };

    size_t n = sizeof(numero)/sizeof(numero[0]);

    for(int i = 0; i<=(n-1); i++){

        printf("%d\n", numero[i]);

    }

    printf("\n");

    system("pause");

    return 0;
}