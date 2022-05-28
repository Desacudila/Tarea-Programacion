#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("-- Programa encargado de mostrar las edades y sueldos de 5 personas a su vez resaltando quien gana mas y quien es mas grande --\n\n\n");

    printf("-> Introducir solo numeros enteros positivos para las edades y solo numeros positivos para los sueldos\n\n");

    system("cls");

    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define RESET   "\x1b[0m"

    int edad[5];
    float sueldo[5];
    int eda = 0;
    float sue = 0;
    int edadMas = 0;
    float sueldoMas = 0;
    int edn = 0;
    int sun = 0;

    size_t e = sizeof(edad)/sizeof(edad[0]);
    size_t s = sizeof(sueldo)/sizeof(sueldo[0]);

    int error = 0;
    char buf[10];

    for(int i = 1; i<=5; i++){

        do {
            printf("Ingresar la edad correspondiente a la %d persona: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%d", &eda);

            if(error != 1 || eda < 0) {
            printf("Entrada Invalida\n");
            }

            printf("Ingresar el sueldo correspondiente a la %d persona: ", i);
            scanf("%s", buf);
            error = sscanf(buf, "%f", &sue);

            if(error != 1 || sue < 0) {
            printf("Entrada Invalida\n");
            }

        } while (error != 1);



    edad[i] = eda;
    sueldo[i] = sue;
    
    }

/*

    for(int i = 1; i<=e; i++){
        printf("%d ", edad[i]);
    }

    printf("\n");

    for(int i = 1; i<=s; i++){
        printf("%0.2f ", sueldo[i]);
    }

    printf("\n");

*/

    printf("\nA continuacion se mostraran las edades y los sueldos correspondientes a cada persona determinadas por su numero\n");
    printf("se mostraran de la siguiente forma ==> Numero de persona: [Edad || Sueldo] <==\n");
    printf("La mayor edad y el mayor sueldo se veran reflejados en color verde\n\n");

    for(int i = 1; i <= e; ++i){

    if (edad[i] > edadMas) edadMas = edad[i];
    if (sueldo[i] > sueldoMas) sueldoMas = sueldo[i];

    }

    for(int i = 1; i <= e; ++i){
        if(edad[i] == edadMas && sueldo[i] == sueldoMas) printf("%d Persona: ["GREEN"%d"RESET" || "GREEN"%0.2f"RESET"]\n", i, edad[i], sueldo[i]);
        else if(edad[i] == edadMas) printf("%d Persona: ["GREEN"%d"RESET" || %0.2f]\n", i, edad[i], sueldo[i]);
        else if(sueldo[i] == sueldoMas) printf("%d Persona: [%d || "GREEN"%0.2f"RESET"]\n", i, edad[i], sueldo[i]);
        else printf("%d Persona: [%d || %0.2f]\n", i, edad[i], sueldo[i]);

        if(edad[i] == edadMas) edn = i;
        if(sueldo[i] == sueldoMas) sun = i;

    }

    if(sun == edn) printf("\nLa persona con la edad mas alta es tambien la que mas gana\n");
    else printf("\nLa persona con la edad mas alta no es la que mas gana\n");

    system("pause");

    return 0;
}