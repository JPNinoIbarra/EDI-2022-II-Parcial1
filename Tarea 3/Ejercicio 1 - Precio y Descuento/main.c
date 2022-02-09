#include <stdio.h>

int main()
{
    float precio, descuento, total;
    printf("Favor de introducir el precio ");
    scanf("%f", &precio);
    printf("Favor de introducir el descuento ");
    scanf("%f", &descuento);
    total = precio-(precio*(descuento/100));

    printf("el precio total es de %.2f", total);
    return 0;
}
