/*
    Exercício 3 - Lab.1 - Conversor de um N° Binário

    Marcus Vinícius Almeida Florêncio, 12021BCC016, 2022
*/

#include <stdio.h>
#include <math.h>

int
main()
{
    int bit1 = 0;
    int bit2 = 0;
    int bit3 = 0;
    int bit4 = 0;
    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;
    int valor4 = 0;
    int total = 0;

    printf("== Conversor de numeros binarios ==\n");

    printf("Digite o 1o. bit: ");
    scanf("%d", &bit1);
    printf("Digite o 2o. bit: ");
    scanf("%d", &bit2);
    printf("Digite o 3o. bit: ");
    scanf("%d", &bit3);
    printf("Digite o 4o. bit: ");
    scanf("%d", &bit4);

    if(bit1 == 1)
        valor1 = pow(2,3);
    else
        valor1 = 0;
    if(bit2 == 1)
        valor2 = pow(2,2);
    else
        valor2 = 0;
    if(bit3 == 1)
        valor3 = pow(2,1);
    else
        valor3 = 0;
    if(bit4 == 1)
        valor4 = pow(2,0);
    else
        valor4 = 0;

    total = valor1 + valor2 + valor3 + valor4;

    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d\n", bit1, bit2, bit3, bit4, total);


    return 0;
}
