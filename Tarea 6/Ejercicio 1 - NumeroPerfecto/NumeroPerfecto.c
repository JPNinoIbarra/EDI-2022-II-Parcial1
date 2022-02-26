#include <stdio.h>

int num;

int main ()
{
    printf("Introduzca el numero que desea validar si es perfecto: ");
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
    int i, res, sum=0, tope;
    ;
    for(i=1, tope=num/2+1; i<tope; i++)
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
