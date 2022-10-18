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

