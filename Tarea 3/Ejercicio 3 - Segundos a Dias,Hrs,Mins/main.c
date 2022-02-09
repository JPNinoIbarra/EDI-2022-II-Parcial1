#include <stdio.h>

int main()
{
    int cantidad, ndias, nhoras, nminutos, nsegundos;
    printf("Favor de introducir la cantidad deseada\n");
    scanf("%d", &cantidad);
    ndias = cantidad/86400;
    cantidad = cantidad%86400;
    nhoras = cantidad/3600;
    cantidad = cantidad%3600;
    nminutos = cantidad/60;
    cantidad = cantidad%60;
    nsegundos = cantidad/1;
    cantidad = cantidad%1;

    printf("\n dias %d", ndias);
    printf("\n horas %d", nhoras);
    printf("\n minutos %d", nminutos);
    printf("\n segundos %d", nsegundos);
    return 0;
}
