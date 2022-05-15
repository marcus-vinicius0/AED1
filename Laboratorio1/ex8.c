/*
    Exercício 8 - Lab.1 - Média e Desvio-Padrão

    Marcus Vinícius Almeida Florêncio, 12021BCC016, 2022
*/

#include <stdio.h>
#include <math.h>


int main ()
{
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float n4 = 0;
    float n5 = 0;
    float media = 0;
    float desvio = 0;

    printf("<< Media e desvio-padrao >>\n");
    printf("Digite o valor 1: ");
    scanf("%f", &n1);
    printf("Digite o valor 2: ");
    scanf("%f", &n2);
    printf("Digite o valor 3: ");
    scanf("%f", &n3);
    printf("Digite o valor 4: ");
    scanf("%f", &n4);
    printf("Digite o valor 5: ");
    scanf("%f", &n5);

    media = (n1+n2+n3+n4+n5)/5;
    desvio = sqrt((pow(n1-media,2) + pow(n2-media,2) + pow(n3-media,2) + pow(n4-media,2) + pow(n5-media,2))/4) ;

    printf("A media e %.3f e o desvio-padrao eh %f\n", media, desvio);

    return 0;
}
