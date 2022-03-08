#include<stdio.h>

int Calculos(int *NumA, int *NumB, int *NumC);

int main()
{
    // El programa deberá solicitar los valores en el main.
    // Llamar a la función e imprimir el resultado final en el main.
    int NumA, NumB, NumC, b, c, band = 0;
    printf ("Introduzca el primer numero \n");
    scanf("%d", &NumA);
    printf ("Introduzca el segundo numero \n");
    scanf("%d", &NumB);
    printf ("Introduzca el tercer numero \n");
    scanf("%d", &NumC);
    b = NumB;
    c = NumC;
    band = Calculos(&NumA, &NumB, &NumC);
    switch(band) {
        case 0:  printf("Si a es mayor que b, duplique b.\n b:%d \n", NumB);
            break;
        case 1:  printf("Si a es menor que b, le reste a c el valor de a.\n c:%d \n", NumC);
            break;
        case 2: printf("Si c es menor a 0, lo multiplique por-1.\n c:%d \n", NumC);
            break;
        default: printf("No hubo cambios");
            break;
    }
    return 0;
}

int Calculos(int *NumA, int *NumB, int *NumC)
{
    int CambioB = 0, CambioC1 = 0, CambioC2 = 0, band = -1;
    // Si A es mayor que B, duplique B.

    if (*NumA > *NumB)
    {
        band = 0;
        CambioB = (*NumB * 2);
    }

// Si A es menor que B, le reste a C el valor de A.
    if (*NumA < *NumB)
    {
        band = 1;
        CambioC1 =((*NumC)-(*NumA));
    }

// Si C es menor a 0, lo multiplique por-1.
    if (*NumC < 0)
    {
        band = 2;
        CambioC2=(*NumC)*(-1);
    }

    *NumB = CambioB;

    switch(band){
        case 1: *NumC = CambioC1;
            break;
        case 2: *NumC = CambioC2;
            break;
    }

    return band;
}
