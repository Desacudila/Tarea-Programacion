#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-> Introducir solo numeros enteros positivos\n\n");

    system("cls");

    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define YELLOW  "\x1B[33m"
    #define RESET   "\x1b[0m"

    int equipoA[5];
    int equipoB[5];

    int eda = 0;
    int sue = 0;
    int partidos = 0;

    int edadMas = 0;
    int sueldoMas = 0;

    int edn = 0;
    int sun = 0;

    size_t e = sizeof(equipoA)/sizeof(equipoA[0]);
    size_t s = sizeof(equipoB)/sizeof(equipoB[0]);

    int error = 0;
    char buf[10];

    printf("Ingresar la cantidad de partidos jugados: ");
    scanf("%s", buf);
    error = sscanf(buf, "%d", &partidos);

    if(error != 1 || partidos < 0) {
    printf("Entrada Invalida\n");
    }

    for(int i = 1; i<=partidos; i++){

        do {
            printf("Ingresar los goles del EquipoA equipo en el %d partido: ", i, i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &eda);

            if(error != 1 || eda < 0) {
            printf("Entrada Invalida\n");
            }

            printf("Ingresar los goles del EquipoB equipo en el %d partido: ", i, i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &sue);

            if(error != 1 || sue < 0) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);



    equipoA[i] = eda;
    equipoB[i] = sue;
    
    }

    printf("\nA continuacion se mostrara la informacion correspondiente a cada partido\n");
    printf("la informacion sera expresada de la siguiente forma ==> Numero de partido: [EquipoA Goles || EquipoB Goles] <==\n");
    printf("el equipo ganador del partido se mostrara de color "GREEN"VERDE"RESET", el perdedor de color "RED"ROJO"RESET"\n");
    printf("y en caso de empate ambos se mostraran de color "YELLOW"AMARILLO"RESET"\n\n");

    for(int i = 1; i <= partidos; ++i){

    if (equipoA[i] > equipoB[i]) edadMas = edadMas+1;
    else if(equipoA[i] < equipoB[i])sueldoMas = sueldoMas+1;

    }

    for(int i = 1; i <= partidos; ++i){
        if(equipoA[i] > equipoB[i]) printf("\nPartido %d: ["GREEN"%d"RESET" || "RED"%d"RESET"]", i, equipoA[i], equipoB[i]);
        else if(equipoA[i] < equipoB[i]) printf("\nPartido %d: ["RED"%d"RESET" || "GREEN"%d"RESET"]", i, equipoA[i], equipoB[i]);
        else if(equipoA[i] == equipoB[i]) printf("\nPartido %d: ["YELLOW"%d"RESET" || "YELLOW"%d"RESET"]", i, equipoA[i], equipoB[i]);
    }

    if(edadMas > sueldoMas) printf("\nEl equipo ganador es el EquipoA\n");
    else if(sueldoMas > edadMas) printf("\nEl equipo ganador es el EquipoB\n");
    else if(edadMas == sueldoMas)printf("\nAmbos equipos se encuentran empatados\n");


    system("pause");

    return 0;
}