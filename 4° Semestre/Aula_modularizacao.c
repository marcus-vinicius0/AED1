#include <stdio.h>

/*
int soma(int a, int b)
{
    int r = a + b;
    return r;
}

int main()
{
    int x = soma(4, 2);
    printf("x = %d\n", x);

    return 0;
}
*/

/*
void imprime(int n)
{
    printf("Numero %d\n", n);
}

int main()
{
    imprime(2);
}
*/

char MenuPrincipal () {
    char op;
    printf("Escolha uma opção: \n\n");
    printf("1 - Novo Jogo\n");
    printf("2 - Carregar Jogo\n");
    printf("3 - Sair\n");
    scanf("%c");
    scanf("%c",&op);
    return op;
}

int main() {
    char escolha;
    escolha = MenuPrincipal ();
    printf("Opcao escolhida: %c.", escolha);
    return 0;
}

