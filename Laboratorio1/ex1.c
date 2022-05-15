/*
    Exercício 1 - Lab.1

    Marcus Vinícius Almeida Florêncio, 12021BCC016, 2022
*/
#include <stdio.h>

int
main()
{
    float j1 = 0;        //jogador 1
    float j2 = 0;        //jogador 2
    float j3 = 0;        //jogador 3
    float premio = 0;
    float total = 0;
    float p1 = 0;       //premio jogador 1
    float p2 = 0;       //premio jogador 2
    float p3 = 0;       //premio jogador 3

    printf("<< Loteria >>\n");

    printf("Bolao jogador 1 R$: ");
    scanf("%f", &j1);
    printf("Bolao jogador 2 R$: ");
    scanf("%f", &j2);
    printf("Bolao jogador 3 R$: ");
    scanf("%f", &j3);
    printf("Informe o valor do premio: ");
    scanf("%f", &premio);

    total = j1 + j2 + j3;
    p1 = (j1 / total) * premio;
    p2 = (j2 / total) * premio;
    p3 = (j3 / total) * premio;

    printf("Jogador 1 recebera R$: %.1f\n", p1);
    printf("Jogador 2 recebera R$: %.1f\n", p2);
    printf("Jogador 3 recebera R$: %.1f\n", p3);

    return 0;
}

