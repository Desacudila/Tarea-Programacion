#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de mostrar alternativamente 0 y 1 en un vector --\n\n\n");


    int numero[10];

    size_t n = sizeof(numero)/sizeof(numero[0]);

    for(int i = 1; i<=n; i++){

        if(i%2) numero[i] = 0;
        else numero[i] = 1;

        printf("%d\n", numero[i]);

    }

    printf("\n");

    system("pause");

    return 0;
}