#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de caluclar el promedio de 10 valores enteros positivos --\n\n\n");

    printf("-> Introducir solo numeros enteros positivos\n\n");

    float numero = 0;
    float suma = 0;
    int error = 0;
    char buf[10];

    for(int i = 1; i<=10; i++){

        do {
            printf("Ingresar el %d valor: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%f", &numero);

            if(error != 1 || numero < 0) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1 || numero < 0);

        suma = suma + numero;
    }

    numero = suma / 10;
    printf("El promedio es %.02f\n", numero);

    system("pause");

    return 0;
}