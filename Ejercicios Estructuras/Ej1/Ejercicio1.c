//Declare una estructura para almacenar datos de estudiantes (DNI y dos notas correspondientes a los dos cuatrimestres del año).
//Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
//Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus exámenes.

#include <stdio.h>
struct ESTUDIANTES {
    int DNI;
    int NOTA1;
    int NOTA2;
};
//creamos la estructura con los datos de los estudiantes.
int main()
{
    struct ESTUDIANTES a[2]; //definimos un vector de 2 posiciones con el tipo de la estructura.
    int i;
    float prom;//variable para guardar los promedios. Es del tipo float porque el promedio puede dar con coma.
    for(i=0;i<=1;i++)
    {
        printf("\nIngrese DNI del estudiante:");
        scanf("%d",&a[i].DNI);
        printf("\nIngrese calificación del primer cuatrimestre:");
        scanf("%d",&a[i].NOTA1);
        printf("\nIngrese calificación del segundo cuatrimestre:");
        scanf("%d",&a[i].NOTA2);
    }//solicitamos los datos al usuario.
    
    for(i=0;i<=1;i++)//con este loop mostraremos el DNI del alumno y su promedio.
    {
        prom=a[i].NOTA1+a[i].NOTA2;//guardaremos la suma de todas las notas en la variable "prom".
        prom=prom/2;//la dividimos por la cantidad de notas (2) para obtener el promedio.
        printf("\nDNI: %d",a[i].DNI);//mostramos el DNI del alumno.
        printf("\nPROMEDIO: %f\n",prom);//mostramos el promedio del alumno.
    }

    system("pause");

    return 0;

}

