/*
    Exercício 6 - Lab.1 - Fatorial

    Marcus Vinícius Almeida Florêncio, 12021BCC016, 2022
*/

#include <stdio.h>

int main()
{
    int t = 1;          //fatorial do valor
    int n1 = 1;         //inicio do intervalo
    int n2 = 10;        //fim do intervalo
    int i;

    printf("<< Fatorial >>\n");
    printf("%d %d\n", n1, n2);

    for(i=1; i<=n2; i++)
    {
        t = i * t;
        if(i>=n1)
        {
             printf("%d! = %d\n", i, t);
        }
    }

    return 0;
}
