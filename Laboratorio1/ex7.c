/*
    Exercício 7 - Lab.1 - Fatorial ERRO

    Marcus Vinícius Almeida Florêncio, 12021BCC016, 2022

    RESPOSTA:

    O erro ocorre pois a variável do tipo int só armazena números que vão até 2,147,483,647;
    Quando o programa vai mostrar o resultado do 13! em diante, os resultados estarão errados
    pois na verdade eles são maiores que 2,147,483,647. Assim, para resolver o problema basta
    substituir as variáveis do tipo int pelo tipo float que consegue armazenar números bem maiores.

    Obs: No final do programa fiz o código que conseguiria resolver o problema.
*/

#include <stdio.h>

int main()
{
    int t = 1;          //fatorial do N°
    int n1 = 10;        //inicio do intervalo
    int n2 = 15;        //fim do intervalo
    int i;

    printf("<< Fatorial >>\n");

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

/*
#include <stdio.h>

int main()
{

    float t = 1;
    float n1 = 10;
    float n2 = 15;
    float i;

    printf("<< Fatorial >>\n");
    printf("%f %f\n", n1, n2);

    for(i=1; i<=n2; i++)
    {
        t = i * t;
        if(i>=n1)
        {
             printf("%0.f! = %0.f\n", i, t);
        }
    }

    return 0;
}
*/
