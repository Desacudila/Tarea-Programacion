#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de mostrar 5 numeros ingresados por el usuario --\n\n\n");

    printf("-> Introducir solo numeros enteros\n\n");

    int numero[4];
    int num = 0;
    int error = 0;
    char buf[10];

    for(int i = 1; i<=5; i++){

        do {
            printf("Ingresar el %d valor: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &num);

            if(error != 1) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);

    numero[i-1] = num;

    }

    printf("%d %d %d %d %d ", numero[0], numero[1], numero[2], numero[3], numero[4]);

    system("pause");

    return 0;
}