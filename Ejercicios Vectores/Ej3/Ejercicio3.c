#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de mostrar 5 numeros ingresados por el usuario y luego remostrarlos multiplicados por 1.65 --\n\n\n");

    printf("-> Introducir solo numeros\n\n");

    float cadenaay[4];
    float num = 0;
    float nMul = 0;

    int error = 0;
    char buf[10];

    size_t n = sizeof(cadenaay)/sizeof(cadenaay[0]);

    for(int i = 1; i<=5; i++){

        do {
            printf("Ingresar el %d valor: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%f", &num);

            if(error != 1) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);

        cadenaay[i-1] = num;

    }

    for(int i = 0; i<=4; i++){

        printf("%0.2f " , cadenaay[i]);

    }

    printf("\n");

    for(int i = 0; i<=4; i++){

        nMul = cadenaay[i] * 1.65;

        printf("%0.2f " , nMul);

    }

    printf("\n\n");

    system("pause");

    return 0;
}