#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("--- Programa encargado de mostrar todas las combinaciones posibles del ejercicio anterior ---\n\n");

    system("cls");

    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define YELLOW  "\x1B[33m"
    #define RESET   "\x1b[0m"

    int vectorA[10];
    int vectorB[3];

    int vct1 = 0;
    int vct2 = 0;
    int vct3 = 0;

    int eda = 0;
    int sue = 0;

    int edadMas = 0;
    int sueldoMas = 0;

    int edn = 0;
    int sun = 0;

    size_t vA = sizeof(vectorA)/sizeof(vectorA[0]);
    size_t vB = sizeof(vectorB)/sizeof(vectorB[0]);

    int error = 0;
    char buf[10];

    for(int i = 1; i<=vA; i++){

        do {
            printf("Ingresar el %d numero entero: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &eda);

            if(error != 1) {
            printf("Entrada Invalida\n");
            }
        } while (error != 1);
        
    vectorA[i] = eda;

    }

    printf("\n");

    for(int i = 1; i<=vB; i++){

        do {
            printf("Ingresar el %d numero entero a encontrar en el vector: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &sue);

            if(error != 1) {
            printf("Entrada Invalida\n");
            }
        } while (error != 1);
        
    vectorB[i] = sue;


    }

    printf("\n");

    for(int i = 1; i <= vA; i++){
        for(int j = 1; j <= vB; j++){
            printf("[VectorA %d Numero: %d || VectorB %d Numero: %d]\n", i, vectorA[i], j, vectorB[j]);
        }
    }

    printf("\n");

    system("pause");

    return 0;
}