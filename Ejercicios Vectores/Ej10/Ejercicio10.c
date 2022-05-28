#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-> Introducir solo numeros enteros positivos\n\n");

    system("cls");

    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define YELLOW  "\x1B[33m"
    #define RESET   "\x1b[0m"

    int tenis1[8];
    int tenis2[9];

    int eda = 0;
    int sue = 0;

    int edadMas = 0;
    int sueldoMas = 0;

    int edn = 0;
    int sun = 0;

    size_t t1 = sizeof(tenis1)/sizeof(tenis1[0]);
    size_t t2 = sizeof(tenis2)/sizeof(tenis2[0]);

    int error = 0;
    char buf[10];

    for(int i = 1; i<=t1; i++){

        do {
            printf("Ingresar el %d DNI del jugador de la primera planilla: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &eda);

            if(error != 1 || eda < 0) {
            printf("Entrada Invalida\n");
            }

            printf("Ingresar el %d DNI del jugador de la segunda planilla: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &sue);

            if(error != 1 || sue < 0) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);



    tenis1[i] = eda;
    tenis2[i] = sue;
    
    }

    printf("\nLa distribucion de las parejas sera mostrada de la siguiente manera: [DNI intergrante planilla 1 || DNI intergrante planilla 2]\n\n");


    for(int i = 1; i <=t1; ++i){



        printf("[%d || %d]\n", tenis1[i], tenis2[t2-i]);

    }

    printf("\n");

    system("pause");

    return 0;
}