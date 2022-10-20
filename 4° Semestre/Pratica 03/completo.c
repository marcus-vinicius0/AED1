/*
    a) Escreva uma função que receba como parâmetro um número inteiro positivo N e retorne a soma de todos os números
    inteiros de 1 a N.

    b) Faça uma função que calcule X elevado à Y (XY), sem utilizar a função pow. No programa principal, leia 2 valores de X
e Y e exiba o resultado da chamada da sub-ro
*/


#include <stdio.h>
#include <stdlib.h>

int soma(int x)
{
    int r = 0;
    for(int i=0; i<=x; i++)
    {
        r = r + i++;
        i--;
    }


    return r;
}

int pot(int x, int y)
{
    int r = 1;
    for(int i = 0; i<y; i++)
    {
        r = r*x;
    }

    return r;
}

int fat(int z)
{
    int r = 1;
    int s = z;
    for(int i = 0; i<z; i++)
    {
        s = i+1;
        r = r*s;
    }

    return r;
}

float taylor(int n, int x)
{
    float r = 0;
    int b, c;
    for(int i=0; i<=n; i++)
    {
        c = pot(x, i);
        b = fat(i);
        r = r + (c*1.0)/b;
    }
    return r;
}

int main()
{
    /* Exercicio A
    int a;

    printf("Soma de N termos\n");
    printf("Digite um numero: ");
    scanf("%d", &a);

    int s = soma(a);
    printf("A soma de todos os valores de 1 ate %d eh %d\n", a, s);
    */

    // Exercicio B
    /*
    int x = 0;
    int y = 0;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    int p = pot(x, y);
    printf("%d elevado a %d eh %d\n", x, y, p);
    */

    // Exercicio C
    /*
    int a = 0;
    scanf("%d", &a);
    int f = fat(a);
    printf("Fatorial de %d eh %d\n", a, f);
    */

    // Exercicio D
    int d = 0; // n
    int e = 0; // x
    scanf("%d %d", &d, &e);
    float t = taylor(d ,e);
    printf("Taylor: %f\n", t);


    return 0;
}

