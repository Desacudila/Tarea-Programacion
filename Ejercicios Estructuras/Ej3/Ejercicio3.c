//Utilice el ejercicio 1, modificándolo para que las notas del estudiante estén en un vector de notas dentro de la estructura. 
//Este vector de notas puede almacenar hasta 10 notas del alumno. Los lugares no utilizados se escriben con un valor -1 para indicar que ese lugar está vacío.

//De esta manera, un estudiante puede haber rendido 2 exámenes, otro 4 y otro 10, para citar algunos ejemplos. 

//Se pide conservar la funcionalidad del programa teniendo en cuenta esta nueva organización de la información. 
//Por lo tanto, para mostrar el promedio del estudiante, 
//habrá que considerar las notas que tiene en este vector de notas, teniendo cuidado en utilizar solamente las notas que existan y omitiendo los -1 que pueda haber.

#include <stdio.h>
struct ESTUDIANTES {
    int DNI;
    int NOTAS[10];
};
//creamos la estructura para los datos de los estudiantes.
int main()
{
    struct ESTUDIANTES a[2]; //definimos un vector de 2 posiciones con el tipo de la estructura.
    int i, j;//estas son las variables que utilizaremos para los loops.
    int x[2]={0,0};//este vector es para saber cuántas notas tiene cada alumno.
    int y;//esta variable es para guardar las notas.
    float prom[2]={0,0};//este vector es para guardar los promedios. Es del tipo float porque el promedio puede no ser exacto.
    
    for(i=0;i<=1;i++)//con este loop solicitamos los datos al usuario.
    {
        printf("\nIngrese DNI del estudiante:");
        scanf("%d",&a[i].DNI);
        printf("\nIngrese notas del estudiante (para finalizar ingrese 0):\n");
        for(j=0;j<=9;j++)
        {
            scanf("%d",&y);
            if(y!=0)//si la variable "y" es distinta a "0",...
            {
                a[i].NOTAS[j]=y;//la guardaremos en el vector de notas...
                x[i]=x[i]+1;//y sumaremos uno al contador de notas "x[i]".
            }
            else break;//si la variable "y" es igual a "0" romperemos el loop.
        }
        for(j=x[i]+1;j<=9;j++)
        {
            a[i].NOTAS[j]=-1;//con este loop igualaremos todas las posiciones que no tengan una nota asignada (porque rompimos el loop) a "-1".
        }
    }
    
    for(i=0;i<=1;i++)//con este loop mostraremos el DNI del alumno y su promedio.
    {
        if(x[i]==0)//si el alumno no tiene notas (x[i]=0), se mostrará en pantalla que el alumno no tiene notas asignadas.
        {
            printf("\nEl alumno %d no tiene notas.",a[i].DNI);
        }
        else
        {
            for(j=0;j<x[i];j++)//con este loop... 
            {
                prom[i]=prom[i]+a[i].NOTAS[j];//guardaremos la suma de todas las notas...
            }
            prom[i]=prom[i]/x[i];//para despues dividirla por la cantidad de notas (promedio).
            printf("\nDNI: %d",a[i].DNI);//mostramos el DNI del alumno.
            printf("\nPROMEDIO: %f\n",prom[i]);//mostramos el promedio del alumno.
        }
    }

    system("pause");

    return 0;

}
