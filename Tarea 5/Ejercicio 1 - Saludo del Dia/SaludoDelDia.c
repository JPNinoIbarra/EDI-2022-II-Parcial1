#include <stdio.h>

int main()
{
    float Hora;

    printf("Favor de introducir la hora sin los dos puntos \n");
    scanf("%f", &Hora);

    if ((Hora >=0000) && (Hora < 1200))
    {
    printf ("Buenos Dias \n");
    }

    else if ((Hora >1159) && (Hora < 1751))
    {
    printf("Buenas Tardes \n");
    }

    else if ((Hora > 1759) && (Hora < 2400))
    {
    printf("Buenas Noches \n");
    }

    else
    {
    printf("La hora no es valida \n");
    }

    return 0;
}
