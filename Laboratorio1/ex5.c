/*
    Exerc�cio 5 - Lab.1 - Tri�ngulo de Floyd

    Marcus Vin�cius Almeida Flor�ncio, 12021BCC016, 2022
*/

#include <stdio.h>

int main()
{
    int n = 0;      //N� de linhas
    int i, j = 0;   //Controlar a quantidade de linhas e colunas
    int c = 0;      //Controlar o n�mero de elementos por linha

    printf("<< Triangulo de Floyd >>\n");
    printf("Digite quantas linhas que voce quer: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            c++;
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}
