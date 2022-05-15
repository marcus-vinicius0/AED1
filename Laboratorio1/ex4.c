/*
    Exercício 4 - Lab.1 - IMC

    Marcus Vinícius Almeida Florêncio, 12021BCC016, 2022
*/

#include <stdio.h>

int main()
{
    float altura = 0;
    float massa = 0;
    float imc = 0;

    printf("Digite sua altura(em metros): ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &massa);


    imc = massa / (altura * altura);
    printf("O valor do seu imc eh: %.1f\n", imc);
    printf("Sua classificacao eh: ");

    if(imc < 18.5)
        printf("Magreza\n");
    else if(18.5 <= imc && imc <= 24.9)
        printf("Saudavel\n");
    else if(25 <= imc && imc <= 29.9)
        printf("Sobrepeso\n");
    else if(30 <= imc && imc <= 34.9)
        printf("Obesidade Grau I\n");
    else if(35 <= imc && imc <= 39.9)
        printf("Obesidade Grau II (severa)\n");
    else
        printf("Obesidade Grau III(morbida)\n");


    return 0;
}
