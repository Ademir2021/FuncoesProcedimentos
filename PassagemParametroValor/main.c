#include <stdio.h>
#include <stdlib.h>

int calcQuadrado(int x)
{
    x = x*x;
    return x;
}

int main()
{
    int num, resposta;
    printf("Digite um número inteiro");
    scanf("%d", &num);
    resposta = calcQuadrado(num);
    printf("O quadrdado do numero %d é %d\n", num, resposta);
}
