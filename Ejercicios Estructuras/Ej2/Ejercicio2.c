#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct viajecito    //Estructura con las variables de informacion global
{
    char *alfa;
    char *origen;
    char *destino;
};

int main () {

    printf("-- Programa encargado de conocer el paradero de los vuelos de una ciudad especificada por el usuario --\n\n\n");    //Objetivo del programa

    struct viajecito a[4];    //declaro las variables locales
    int flagV = 0;
    char soli[20];

    a[0].alfa = "AR1500";
	a[0].origen = "Tucuman";
	a[0].destino = "Jujuy";
	
	a[1].alfa = "FR1089";
	a[1].origen = "Paris";
	a[1].destino = "Monaco";
	
	a[2].alfa = "BR1523";
	a[2].origen = "Brasilia";
	a[2].destino = "Paris";

	a[3].alfa = "US1357";
	a[3].origen = "Washington";
	a[3].destino = "Tucuman";

    printf("Ingrese la ciudad de la cual solicita informacion: ");  //Se solicita la ciudad a buscar
    scanf("%s", soli);  //Se guarda la ciudad

    for(int i=0; i<4; i++){  //For que se repite segun la cantidad de espacios en array viajecito
        if(strcmp(a[i].origen, soli) == 0){  //Pregunto si el nombre de la ciudad de origen de X viaje es igual al nombre de la ciudad dicho x el usuario
        printf("\n==> |Vuelo %s||Parte: %s| <==\n\n", a[i].alfa, soli);  //Si es asi imprimo en pantalla el mensaje
        flagV = 1;  //Si la ciudad que se consulto se encuentra en la lista el flag es 1
        }
    }

    for(int i=0; i<4; i++){  //For que se repite segun la cantidad de espacios en array viajecito
        if(strcmp(a[i].destino, soli) == 0){  //Pregunto si el nombre de la ciudad de destino de X viaje es igual al nombre de la ciudad dicho x el usuario
        printf("\n==> |Vuelo %s||Arriba: %s| <==\n\n", a[i].alfa, soli);  //Si es asi imprimo en pantalla el mensaje
        flagV = 1;  //Si la ciudad que se consulto se encuentra en la lista el flag es 1
        }
    }

    if(flagV == 0)  printf("\nNo se encontro ningun vuelo con informacion acerca de esa ciudad\n\n");   //Si el flag es 0 imprimo en pantalla q no se encontro ninguna ciudad en ningun pasaje

    system("pause");

    return 0;
}