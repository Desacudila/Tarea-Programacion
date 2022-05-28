#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de mostrar el estado academico de 10 estudiantes identificados por su DNI --\n\n\n");

    printf("-> Introducir solo numeros enteros positivos para los DNI y numeros positivos para las calificaiones\n\n");

    system("cls");

    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define RESET   "\x1b[0m"

    int dni[10];
    float calificacion[10];
    int dn = 0;
    float cal = 0;
    int edadMas = 0;
    float sueldoMas = 0;
    int edn = 0;
    int sun = 0;

    size_t d = sizeof(dni)/sizeof(dni[0]);
    size_t c = sizeof(calificacion)/sizeof(calificacion[0]);

    int error = 0;
    char buf[10];

    for(int i = 1; i<=d; i++){

        do {
            printf("Ingresar el DNI correspondiente a la %d persona: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &dn);

            if(error != 1 || dn < 0) {
            printf("Entrada Invalida\n");
            }

            printf("Ingresar la calificaion correspondiente %d persona: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%f", &cal);

            if(error != 1 || cal < 0 || cal > 10) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);



    dni[i] = dn;
    calificacion[i] = cal;
    
    }


    printf("\nA continuacion se mostraran las calificaciones de los estudiantes identificados por su DNI\n");
    printf("se mostraran de la siguiente forma ==> [DNI || Calificacion] <==\n");
    printf("Si el estado del alumno es aprobado se vera en "GREEN"VERDE"RESET" en caso contrario se vera en "RED"ROJO"RESET"\n\n");

    for(int i = 1; i <= d; ++i){

        if(calificacion[i] >= 6) printf(""GREEN"[%d || %f]"RESET"\n", dni[i], calificacion[i]);
        else printf(""RED"[%d || %f]"RESET"\n", dni[i], calificacion[i]);

    }

    printf("\n");

    system("pause");

    return 0;
}