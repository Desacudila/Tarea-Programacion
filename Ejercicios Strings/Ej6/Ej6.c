//6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con mayúsculas.

#include <stdio.h>
#include <ctype.h>

#define Tamaño 256 // Variable comun de maximo de tamaño

int main () {

    char text[Tamaño * 4], // Asigno variable con limite de byte
        most_freq[Tamaño + 1] = "";
    int freq[Tamaño] = {0},
        max = 0, // Frecuencia de caracter
        mf_ndx = 0; // Indexar el caracter mas frecuente
    
    fputs ("Ingresar una palabra: ", stdout); //Solicito palabra
    if (!fgets (text, Tamaño, stdin)) { //Verifica que el valor es correcto segun parametro de tamaño de caracteres (256)
        puts ("Entrada Invalida");
        return 0;
    }
    
    for (int i = 0; text[i]; i++) // Bucle sobre cada carácter
        if (++freq[(unsigned char)text[i]] > max) //Incrementa y compara segun max
            max = freq[(unsigned char)text[i]];
    
    for (int i = '!'; i < Tamaño; i++) //Bucle segun el caracter mas frecuente
        if (freq[i] == max) //Si el caracter en freq es == al caracter max
            most_freq[mf_ndx++] = i; //Guardar en most_freq               
    most_freq[mf_ndx] = 0;
    
    printf ("\n%d caracter/es aparecen frecuentemente %d veces: %s\n", //Muestro datos en salida
            mf_ndx, max, most_freq);

    system("pause");
    return 0;
}