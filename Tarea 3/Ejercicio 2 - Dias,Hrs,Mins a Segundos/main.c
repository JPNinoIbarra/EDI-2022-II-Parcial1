#include <stdio.h>

int main()
{
    int dias, horas, minutos, total;
    printf("Favor de introducir la cantidad de dias ");
    scanf("%d", &dias);
    printf("Favor de introducir la cantidad de horas ");
    scanf("%d", &horas);
    printf("Favor de introducir la cantidad de minutos ");
    scanf("%d", &minutos);
    total = (dias*86400)+(horas*3600)+(minutos*60);


    printf("la cantidad de segundos es de %d", total);
    return 0;
}
