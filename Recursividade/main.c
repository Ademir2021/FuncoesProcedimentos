#include <stdio.h>
#include <stdlib.h>

int fatorial (int x)
{
    if (x == 0)
        return 1;
    else
    return x *fatorial(x-1);
}

int main()
{
    int num, resposta;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    resposta = fatorial(num);
    printf("O fatorial é %d\n", resposta);
}
