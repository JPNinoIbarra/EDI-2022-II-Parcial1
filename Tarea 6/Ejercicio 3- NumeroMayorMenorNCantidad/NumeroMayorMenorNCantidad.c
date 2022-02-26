#include<stdio.h>
int main()
{
    int Mayor, Menor;
    Mayor=funcionMayor(&Menor);
    printf ("El numero mayor es %d y el menor es %d \n", Mayor, Menor);
    return 0;
}

int funcionMayor(int *Menor)
{
    int Cont, Num, Mayor, Cant;
    printf ("Introduzca N \n");
    scanf("%d", &Cant);
    scanf("%d", &Num);
    Mayor=Num;
    *Menor=Num;
    for (Cont=1; Cont<= Cant-1; Cont++)
    {
        scanf ("%d",&Num);
        if (Num>Mayor)
        Mayor=Num;
        if (Num<*Menor)
        *Menor=Num;
    }
    return Mayor;
}
