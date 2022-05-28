#include <stdio.h>

int main (void) {
        int vOriginal[10];
        int vAuxiliar [10];
        int vFinal [10];
        int cont,num,i,j=0,k,z=0;

        for (i=0; i<10; i++) {
                printf("Introducir el %d valor: ", i+1);
                scanf("%d",&vOriginal[i]);
        }


        for (i=0;i<10;i++) {
                cont=0;
                num=vOriginal[i];
                vAuxiliar[j]=num;
                j++;
                for (k=0;k<10;k++)
                    if ( vAuxiliar[k] == num )
                        cont++;

                if ( cont == 1 ) {
                    vFinal[z]=num;
                    z++;
                }
        }


        printf("\nEl array simplificado es: \n");
        for (i=0;i<z;i++)
                printf ("%d \n",vFinal[i]);

        system("pause");

        return 0;
}