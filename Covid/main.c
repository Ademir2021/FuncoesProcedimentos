#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

struct paciente
{
    int CPF;
    char Nome[50];
    char Sexo[1];
    int Idade;

};

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int pontos;
    int op;

    struct paciente ficha;

     FILE *arq;

    arq = fopen("paciente.txt", "a");
        if (arq == NULL)
        {
            printf("Erro");
        }
        else
        {

    printf("Digite o CPF:");
    scanf("%d", &ficha.CPF);
    fflush(stdin);
    system("clear");
    printf("Digite o nome do Paciente:");
    scanf("%s", ficha.Nome);
    fflush(stdin);
    system("clear");
    printf("Digite o Sexo M/F:");
    scanf("%s",ficha.Sexo);
    fflush(stdin);
    system("clear");
    printf("Digite a Idade:");
    scanf("%d",&ficha.Idade);
    fflush(stdin);
    system("clear");

    printf("CPF:%d \nNome:%s \nSexo:%s \nIdade:%d\n",ficha.CPF, ficha.Nome, ficha.Sexo, ficha.Idade);

        {
            fprintf(arq, "CPF do Paciente: %d", ficha.CPF);
            fprintf(arq, "\nNome do Paciente: %s", ficha.Nome);
            fprintf(arq, "\nSexo do Paciente: %s", ficha.Sexo);
            fprintf(arq, "\nIdade do Paciente: %d\n", ficha.Idade);

            fprintf(arq, "\nO Paciente Atingiu %d pontos", pontos);

        if(ferror(arq))
        {
        printf("Erro na Gravacao");
        }
        else
        {
            printf("\nDados do Paciente gravados com Sucesso.\n");
        }
        }
        fclose(arq);
        }

    pontos=0;
    printf("### FICHA DO PACIENTE ###\n\n");
    printf("Digite 1 para confirmar ou qualquer tecla para Continuar!!!\n\n");
    printf("Tem Febre:?\t");
    scanf("%d", &op);
    if (op == 1){
        pontos=pontos+5;}
    printf("Tem dor de cabeça:?");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Tem secreção nasal ou espirros:?");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Tem dor/irritação na garganta:? ");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Tem tosse seca:?");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Tem dificuldade respiratória:?");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Tem dores no corpo:?");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Tem diarréia:?");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19:?");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}
    printf("Esteve em locais com grande aglomeração:? ");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1){
        pontos=pontos+5;}

    printf("\n\nO Paciente acumulou %d pontos\n\n", pontos);

    if (pontos <10){
        printf("\nRisco baixo\n");
    }
    if ((pontos >=10)&&(pontos >20)){
        printf("\nRisco Médio\n");
    }
    if (pontos >20){
        printf("\nRisco Alto\n");

     fclose(arq);

    return(0);

}
}

