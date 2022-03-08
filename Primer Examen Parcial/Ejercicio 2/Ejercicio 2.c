#include<stdio.h>
#include<string.h>

int main()
{
        char str[20];
        int i;
        printf("Introduzca el texto: \n");
        gets(str);

        printf("\n");
        printf("El texto introducido es: %s \n", str);
        for(i=0;i<=strlen(str);i++)
            {
            switch (str[i]) {
                case 'A': str[i]='a';
                    break;
                case 'B': str[i]='b';
                    break;
                case 'C': str[i]='c';
                    break;
                case 'D': str[i]='d';
                    break;
                case 'E': str[i]='e';
                    break;
                case 'a': str[i]='A';
                    break;
                case 'b': str[i]='B';
                    break;
                case 'c': str[i]='C';
                    break;
                case 'd': str[i]='D';
                     break;
                case 'e': str[i]='E';
                break;
            }
        }
        printf("El texto resultante  es: %s \n", str);
        return 0;
}
