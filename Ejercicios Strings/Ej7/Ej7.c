//7) El usuario ingresará 5 nombres de personas y sus edades (número entero). Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven. El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc... Nota: no hay que almacenar todos los nombres y todas las notas.*/

#include <stdio.h>
#include<string.h>


int main()
{
    
    int añosJoven; //Variable para almacenar los años del mas joven
    int añosAux; //Variable para comparar los años del mas joven
    char nombreJoven[200]; //Variable para almacenar el nombre del mas joven
    char aux[200]; //Variable para comparar el nombre del mas joven
    
    
    for(int i=0; i<=4; i++) //Preguntar cada nombre y compararlo 5 veces
    {
        printf("\nIngrese el nombre de la %d persona:",i+1); //Consultar nombre
        scanf("%s",aux);
        
        printf("\nIngrese la edad de la %d persona:",i+1); //Consultar edad
        scanf("%d",&añosAux);

        
        if(i == 0) añosJoven = añosAux; //En el primer caso no se compara nada se asgina años joven a añosaux directamente ya que no hay nada para comparar
        
        if(añosAux < añosJoven) //Si se encuentra una nueva persona menor se le asigna el nombre a la variable del nombreJoven
        {
            añosJoven = añosAux;
            strcpy(nombreJoven,aux); //Copio lo que esta guardado en aux en la variable nombreJoven
        }
    }
    
    printf("\nLa persona mas joven se llama: %s. Con %d anos\n\n",nombreJoven, añosJoven); 

    system("pause");
	return 0;
    
}
