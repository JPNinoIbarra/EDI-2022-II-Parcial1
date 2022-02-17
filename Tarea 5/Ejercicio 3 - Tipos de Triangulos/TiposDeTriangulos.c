#include <stdio.h>

int main()
{
    float LadoA, LadoB, LadoC;

    printf("Favor de introducir el lado A\n");
    scanf("%f", &LadoA);
    printf("Favor de introducir el lado B\n");
    scanf("%f", &LadoB);
    printf("Favor de introducir el lado C\n");
    scanf("%f", &LadoC);

    if ((LadoA == LadoB)&&(LadoB == LadoC))
    {
    printf ("\n Es un triangulo equilatero \n");
    }
    else if ((LadoA != LadoB)&&(LadoA != LadoC)&&(LadoB != LadoC))
    {
    printf("\n Es un triangulo escaleno \n");
    }
    else if (((LadoA == LadoB) && (LadoB != LadoC)) || ((LadoB == LadoC) && (LadoC != LadoA)) || ((LadoC == LadoA) && (LadoC != LadoB)))
    {
    printf("\n Es un triangulo isoceles\n  ");
    }
    else
    {
    printf("\n No es un triangulo");
    }

    return 0;
}
