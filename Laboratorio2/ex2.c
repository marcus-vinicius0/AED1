#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char nome[] = "Jose Augusto";

    char *p;

    p = &nome;

    for(int i=0; i < strlen(nome); i++)
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    return 0;
}
