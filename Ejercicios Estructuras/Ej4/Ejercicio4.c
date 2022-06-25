//Una ferretería tiene un listado de facturas emitidas en cierto año, con estos datos: número de factura,
//fecha de emisión (día y mes), nombre del cliente y monto total. Dado un vector de 10 facturas,
//se necesita mostrar en pantalla cuál fue el mejor mes (o sea, el de mayor dinero facturado). 
//Los datos se pueden ingresar por teclado o dejarlos fijos en el programa para no perder tiempo en tipear datos.
#include <stdio.h>

struct FACTURA
{
    int NUMERO;
    char NOMBRE[50];
    int DIA;
    int MES;
    int MONTO;
};//creamos la estructura con los datos de las facturas.

int main()
{
    struct FACTURA a[10];//definimos un vector de 10 posiciones con el tipo de la estructura.
    int b[12];//este vector es para guardar las ganancias de cada mes.
    int i;//esta es la variable que utilizaremos para los loops. 
    int flag_mayor_monto=0;//con esta variable vamos a identificar cual es el mayor monto.
    int flag_mayor_monto_mes=0;//con esta variable vamos a identificar cual fue el mejor mes.
    for(i=0;i<=9;i++)
    {
    printf("\nIngrese Numero de factura:\n");
    scanf("%d",&a[i].NUMERO);
    printf("\nIngrese el nombre del cliente:\n");
    scanf("%s",a[i].NOMBRE);
    printf("\nIngrese el dia:\n");
    scanf("%d",&a[i].DIA);
    printf("\nIngrese el mes:\n");
    scanf("%d",&a[i].MES);
    printf("\nIngrese el monto total:\n");
    scanf("%d",&a[i].MONTO);

    if(flag_mayor_monto<a[i].MONTO)//si el monto es mayor a la variable.
    {
        flag_mayor_monto=a[i].MONTO;//la variable tomará el valor del monto. 
        flag_mayor_monto_mes=a[i].MES;//la variable que identifica el mejor mes tomara el valor del mes al que corresponde el monto anterior.
    }
    }
    printf("El mejor mes fue: %d ",flag_mayor_monto_mes);//mostramos cuál fue el mejor mes.

    system("pause");

    return 0;

}
