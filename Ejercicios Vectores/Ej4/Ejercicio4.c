#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de mostrar 10 numeros ingresados por el usuario en los cuales los pares deberan ser reemplazados por 0 --\n\n\n");

    printf("-> Introducir solo numeros enteros positivos\n\n");

    int numero[9];
    int num = 0;
    int error = 0;
    char buf[10];

    for(int i = 1; i<=10; i++){

        do {
            printf("Ingresar el %d valor: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &num);

            if(error != 1 || num < 0) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);

    numero[i-1] = num;

    }

    printf("\n\n");

    for(int i = 0; i<=9; i++){
        if(numero[i]%2){
            numero[i] = numero[i];
        }else{
            numero[i] = 0;
        }

    printf("%d ", numero[i]);

    }

    printf("\n\n");

    system("pause");

    return 0;
}