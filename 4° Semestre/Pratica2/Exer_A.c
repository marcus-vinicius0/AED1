/*
    Escrever um programa que lê um vetor de inteiros (número de elementos definido pelo usuário),
    remove valores consecutivos repetidos
    e mostra o vetor atualizado.
    O programa deve alocar memória dinamicamente para utilizar o vetor,
    e o vetor deve ter ao final da operação sempre o tamanho exato dos elementos presentes nele.
    Permita ao usuário informar mais conjuntos de números,
    e defina uma condição para o usuário parar a criação de novos vetores.
    O programa deve, ao final de cada operação, mostrar o seu tamanho final.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 0;
    int *v;
    int i;
    int comp = 0;   // comparar valores
    int j;
    int k;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    v = (int*)malloc(tamanho *sizeof(int));

    for(i = 0; i<tamanho; i++)
        scanf("%d", &v[i]);
    for(i = 0; i<tamanho; i++)
        printf("%d, ", v[i]);

    int *pon = &v[0];    // ponteiro para percorrer o vetor

    for(i=0; i<tamanho; i++)
    {
        comp = v[i];
        for(k=i; k<tamanho; k++)
        {
                pon = &v[k];
                pon++;
                if((comp == *pon))
                {
                    for(j=k; j<tamanho; j++)
                    {
                        pon++;
                        j++;
                        v[j] = *pon;
                        j--;
                        printf("\nv[%d] = %d, \n", j, v[j]);
                        if(j == tamanho-1)
                        {
                            v[j] = NULL;
                            printf("v[%d] = %d\n", j, v[j]);
                        }
                    }
                }
        }


    }

    printf("VETOR FINAL: \n");
    for(i=0; i<tamanho; i++)
    {
        printf("%d, ", v[i]);
    }


    return 0;
}

/*

d) Escreva um programa em C que crie um vetor de n números inteiros (n informado pelo usuário).
Faça a leitura dos elementos desse vetor.

Depois, exclua os elementos ímpares desse vetor,
e redimensione-o, utilizando alocação
dinâmica de memória, para que não haja buracos no resultado final.

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    int tamanho = 0;
    int i;
    int n = 0; // numero de vezes q o ponteiro andou
    int par = 0; // numero de pares


    printf("Digite o a qtdade de nums: ");
    scanf("%d", &tamanho);
    v = (int*)malloc(tamanho *sizeof(int));

    for(i=0; i<tamanho; i++)
        scanf("%d", &v[i]);
    for(i=0; i<tamanho; i++)
        printf("%d, ", v[i]);

    int *pon = &v[0];     // ponteiro p/ percorrer o vetor

    // realloc

    printf("\nDigite o a qtdade de nums: ");
    scanf("%d", &tamanho);
    v = realloc(v, tamanho);
    for(i=0; i<tamanho; i++)
        printf("%d, ", v[i]);


    for(i=0; i<tamanho; i++)
    {
        if(*pon %2 != 0) // se é impar
        {
            while(*pon % 2 != 0)
            {
                pon++;
                n++;

            }
            v[i] = *pon;

            i = i + n + 1;
            pon = &v[i];
            i = i - n - 1;
            n = 0;


            printf("v[%d] = %d\n", i, v[i]);
        }
        else        // se é par

            printf("v[%d] = %d\n", i, v[i]);

    }

    printf("Numero de pares: %d", par);

    return 0;
}

*/

/*

// teste impar

#include <stdio.h>

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int resto;
    int *pon = &vet[0];


    printf("%d", *pon);
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", *pon);
        pon++;
    }



    for(int i=0; i<5; i++)
    {
        printf("%d, ", vet[i]);
        resto = vet[i]%2;

        if(resto != 0)
            printf("%d eh impar\n", vet[i]);
        else
            printf("%d eh par\n", vet[i]);

    }


    int i =0;
    pon++;
    vet[i] = *pon;


    printf("v[0] = %d\n", vet[0]);



    printf("v[0] = %d\n", vet[0]);
    printf("v[1] = %d\n", vet[1]);




    while(*pon % 2 != 0)
    {
        pon++;
    }
    vet[0] = *pon;
    printf("v[0] = %d\n", vet[0]);


    return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    int tamanho = 0;
    int i=0;
    int j;
    int n=0;
    int u=0; //quantas vezes o vetor correu
    int par; // num pares


    printf("Digite o a qtdade de nums: ");
    scanf("%d", &tamanho);
    v = (int*)malloc(tamanho *sizeof(int));

    for(i=0; i<tamanho; i++)
        scanf("%d", &v[i]);
    for(i=0; i<tamanho; i++)
        printf("%d, ", v[i]);

    int *pon = &v[0];     // ponteiro p/ percorrer o vetor
    */

    // realloc

    /*
    printf("\nDigite o a qtdade de nums: ");
    scanf("%d", &tamanho);
    v = realloc(v, tamanho);
    for(i=0; i<tamanho; i++)
        printf("%d, ", v[i]);
    */

    //while(u <= tamanho*5)
/*
    for(i=0; i<=tamanho; i++)
    {
        if((*pon % 2 != 0) && (pon != NULL))
            {
                for(j=n; j<tamanho; j++)
                {
                    // u=1;
                    pon++;
                    v[j] = *pon;
                    printf("\nv[%d] = %d, \n", j, v[j]);
                    if(j == tamanho-1)
                    {
                        v[j] = NULL;
                        printf("v[%d] = %d\n", j, v[j]);
                    }

                }
                n=0;
            }
        else
        {
            n++;
            par++;
        }


        pon = &v[n];
        u++;*/
        /*
        if(u == tamanho-1)
        {
            break;
        }
        *//*
    }

    printf("\n");
    for(i=0; i<tamanho; i++)
        printf("v[%d] = %d\n", i, v[i]);
*/
     // realloc
    /*
    printf("\nDigite o a qtdade de nums: ");
    scanf("%d", &tamanho);
    */

/*
    printf("\nValor de par: %d\n", par-1
           );

    tamanho = par;
    v = realloc(v, tamanho);
    for(i=0; i<tamanho; i++)
        printf("%d, ", v[i]);

    *//*


    return 0;
}
*/

/*
    for(i=0; i<tamanho; i++)
    {
        comp = v[i];
        for(k=i; k<tamanho; k++)
        {
                pon = &v[k];
                pon++;
                if((comp == *pon))
                {
                    v[k] = v[k+1];
                    realloc(v, tamanho-1);
                }
        }


    }
*/

