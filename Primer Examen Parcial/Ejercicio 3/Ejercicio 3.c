#include <stdio.h>
main()
{
    int i, j, m, n;
    printf("Ingrese la dimension N de la matriz \n");
    scanf("%d", &n);
    printf("Ingrese la dimension M de la matriz \n");
    scanf("%d", &m);
    int matriz1[n][m];

	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
		    printf("Ingrese el numero para la posicion %d %d \n", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}

    printf("\n");

	for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d   ", matriz1[i][j]);
        }
        printf("\n");
    }

    int matriz2[n][m];
    /* copying one array to another */
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            matriz2[i][j] = matriz1[i][j];
            if(i-1>=0)
            {
            matriz2[i][j] = matriz2[i][j] + matriz1[i-1][j];
            }

            if(i+1<n)
            {
            matriz2[i][j] = matriz2[i][j] + matriz1[i+1][j];
            }

            if(j-1>=0)
            {
            matriz2[i][j] = matriz2[i][j] + matriz1[i][j-1];
            }

            if(j+1<m)
            {
            matriz2[i][j] = matriz2[i][j] + matriz1[i][j+1];
            }
        }
    }

    printf("\n");

    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d   ", matriz2[i][j]);
        }
        printf("\n");
    }
}
