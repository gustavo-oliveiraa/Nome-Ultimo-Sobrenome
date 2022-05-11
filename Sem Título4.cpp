#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main ()
{
    int x,tam;
    char nome[100];
    printf ("digite um nome\n");
    gets(nome);
    tam=strlen(nome);
    for(x=0; x=0;x++)
    {
        printf("%c ",nome [x]);
    }
    for (x=tam-1; x>=0; x--)
    {
        printf(" %c ",nome [x]);
    }
    printf("\n\n");
    system ("pause");
    return 0;
}
