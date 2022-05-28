#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("--- Programa encargado de indicar si un vector de 5 numeros es creicente o decreciente o nulo ---\n\n");

    system("cls");

    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define YELLOW  "\x1B[33m"
    #define RESET   "\x1b[0m"

    float vectorA[8];
    int eda = 0;

    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int flag4 = 0;

    size_t vA = sizeof(vectorA)/sizeof(vectorA[0]);

    int error = 0;
    char buf[10];

    for(int i = 1; i<=vA; i++){

        do {
            printf("Ingresar el %d numero entero: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%f", &eda);

            if(error != 1) {
            printf("Entrada Invalida\n");
            }
        } while (error != 1);
 
    vectorA[i] = eda;

    }

    for(int i = 1; i<vA ; i++){
        if(vectorA[i] > vectorA[i+1]) flag1 = 1;
        if(vectorA[i] < vectorA[i+1]) flag2 = 1;
    }

    if(flag1 == 0 && flag2 == 0) printf("Todos los elementos en el Vector son identicos\n");
    else printf("Los elementos en el Vector no son identicos\n");

    system("pause");

    return 0;
}