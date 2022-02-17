#include <stdio.h>

int main()
{
    float Kilos, PrecioDeKilo, Descuento, PrecioFinal;

    printf("Favor de introducir cuantos kilos \n");
    scanf("%f", &Kilos);

    printf("Favor de introducir el precio del kilo \n");
    scanf("%f", &PrecioDeKilo);

    if ((Kilos >= 0) && (Kilos <= 2))
    {
    PrecioFinal=PrecioDeKilo*Kilos;
    printf ("%f", PrecioFinal);
    }

    else if ((Kilos>2) && (Kilos <= 5))
    {
    Descuento=0.10;
    PrecioFinal=(PrecioDeKilo+(PrecioDeKilo*Descuento))*Kilos;
    printf ("%f", PrecioFinal);
    }

    else if ((Kilos>5) && (Kilos <= 10))
    {
    Descuento=0.15;
    PrecioFinal=(PrecioDeKilo+(PrecioDeKilo*Descuento))*Kilos;
    printf ("%f", PrecioFinal);
    }

    else if (Kilos < 10)
    {
    Descuento=0.20;
    PrecioFinal=(PrecioDeKilo+(PrecioDeKilo*Descuento))*Kilos;
    printf ("%f", PrecioFinal);
    }

    else
    {
    printf("Introduccion no valida \n");
    }

    return 0;
}
