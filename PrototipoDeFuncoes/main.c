#include <stdio.h>
#include <stdlib.h>

int calcQuadrado(int x);

int main()
{
    int num, resposta;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    resposta = calcQuadrado(num);
    printf("O quadrado do numero %d é %d\n", num, resposta);
}

int calcQuadrado(int x)
{
    x = x*x;
    return x;
}
