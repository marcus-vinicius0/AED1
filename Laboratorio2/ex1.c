#include <stdio.h>

int main()
{
    int a = 40;
    int *p;
    p = &a;

    printf("Endereco de &a: %d\n", &a);
    printf("Endereco de p: %d\n", p);

    printf("Digite o novo valor de A: ");
    scanf("%d", p);
    printf("Novo valor de A: %d\n", a);

    return 0;
}
