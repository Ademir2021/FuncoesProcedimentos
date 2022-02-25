#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	//Declaração Variaveis//
    int eleitores = 5, menu;
    int indicador = 1, contador = 0, indice;
    int votos[eleitores], votos_computados[7] = {0, 0, 0, 0, 0, 0, 0};
    char candidatos[7][25] = {
        "Vereador João do Frete",
        "Vereadora M. da Pamonha",
        "Vereador Ze da Farmacia",
        "Votos Nulos Vereador",
        "Prefeito Dr. Zureta",
		"Prefeito Senhor Gomes",
		"Voto Nulo Prefeito"
    };
	
	//Menu de Opçoes//
	printf("Escolha uma Opção do Menu:\n1 - Votar\n2 - Apurar os Votos\n3 - Sair.\n");
	scanf("%d", &menu);

	//Menus de Votação//
	if(menu == 1)
	{
    printf("Eleições 2019\n\n");
    printf(
            "Escolha seu Vereadores:\n111 - %s\n"
            "222 - %s\n"
            "333 - %s\n"
            "444 - %s\n\n"
            "Escolha o seu Prefeitos\n11 - %s\n"
			"22 - %s\n"
			"44 - %s\n\n",
            candidatos[0],
            candidatos[1],
            candidatos[2],
            candidatos[3],
            candidatos[4],
			candidatos[5],
			candidatos[6]
    );

    do{
        printf("Eleitor %dº: ", indicador++);
        scanf("%d", &votos[contador]);

        if(votos[contador] == -1)
            eleitores = 0;
        else
            contador++;
    }while(contador < eleitores);

    for(indice = 0; indice < contador; indice++){
        if(votos[indice] == 111)
            votos_computados[0] += 1;

        else if(votos[indice] == 222)
            votos_computados[1] += 1;

        else if(votos[indice] == 333)
            votos_computados[2] += 1;

        else if(votos[indice] == 444)
            votos_computados[3] += 1;

        else if(votos[indice] == 11)
            votos_computados[4] += 1;

		else if(votos[indice]== 22)
			votos_computados[5] +=1;

		else if(votos[indice]== 44)
			votos_computados[6] +=1;
    }
	}

	//Menu de Opçoes//

	printf("\nDigite:\n2 - Apurar votos.?\n3 - Sair.?\n");
	scanf("%d", &menu);

	//Apuração do Votos//
	if(menu==2)
	{
    printf("%-25s............... %d\n", candidatos[0], votos_computados[0]);
    printf("%-25s............... %d\n", candidatos[1], votos_computados[1]);
    printf("%-25s............... %d\n", candidatos[2], votos_computados[2]);
    printf("%-25s............... %d\n", candidatos[3], votos_computados[3]);
    printf("%-25s............... %d\n", candidatos[4], votos_computados[4]);
	printf("%-25s............... %d\n", candidatos[5], votos_computados[5]);
	printf("%-25s............... %d\n", candidatos[6], votos_computados[6]);
	}
	//Eleição Encerrada//
	printf("Eleição Encerrada.\n");
    return 0;
}
