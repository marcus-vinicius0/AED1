/*
    Exercício 2 - Lab.1

    Marcus Vinícius Almeida Florêncio, 12021BCC016, 2022
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x = 0;        // coordenada x
    float y = 0;        // coordenada y
    float d = 0;        //distancia

    printf("<< Distancia >>\n");
    printf("Entre com a coordenada x: ");
    scanf("%f", &x);
    printf("Entre com a coordenada y: ");
    scanf("%f", &y);

    d = sqrt(x*x + y*y);
    printf("A distancia entre os pontos (%.0f,%.0f) e (0,0) eh %.1f\n", x, y, d);

    return 0;
}
