#include <stdio.h>

int num;

int main ()
{
    printf("Introduzca el numero que desea verificar si es perfecto: ");
    scanf("%d", &num);
    int res;
    res=perfecto(num);
    if(res==1)
    {
        printf("El numero %d es perfecto. \n", num );
	}
	else
	printf("El numero %d no es perfecto. \n", num );
    return num;
}

int perfecto(num)
{
    int i, res, sum=0, parada;
    ;
    for(i=1, parada=num/2+1; i<parada; i++)
    {
	    if(num%i==0)
	    {
		    sum+=i;
	    }
    }
    if(sum==num)
    {
		res=1;
	}
	else
        res=0;
    return res;
}
