#include <stdio.h>

typedef struct {
    char estado;
    int cidade;
    double populacao;
    double area;
    double pib;
    int numPontosTuristicos;
    double densidadePopulacional;
    double pibPerCapita;
    double superPoder;
} Carta;

void calculaPropriedades(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
    c->superPoder = c->populacao + c->area + c->pib + c->numPontosTuristicos;
}

int main() {
    Carta cartas[32];
    int numCartas;

    printf("Bem vindo ao SUPER TRUNFO\n");
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &numCartas);

    for (int i = 0; i < numCartas; i++) {
        printf("\nInsira os Dados da Carta %d\n", i+1);
        
        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Cidade (1-4): ");
        scanf("%d", &cartas[i].cidade);

        printf("População: ");
        scanf("%lf", &cartas[i].populacao);

        printf("Área: ");
        scanf("%lf", &cartas[i].area);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].numPontosTuristicos);

        printf("PIB: ");
        scanf("%lf", &cartas[i].pib);

        calculaPropriedades(&cartas[i]);
    }

    printf("\nDados das Cartas:\n");
    for (int i = 0; i < numCartas; i++) {
        printf("\nCarta %d:\n", i+1);
        printf("Estado: %c, Cidade: %d\n", cartas[i].estado, cartas[i].cidade);
        printf("População: %.2f\n", cartas[i].populacao);
        printf("Área: %.2f\n", cartas[i].area);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].numPontosTuristicos);
        printf("Densidade Populacional: %.2f\n", cartas[i].densidadePopulacional);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("PIB per Capita: %.2f\n", cartas[i].pibPerCapita);
        printf("Super Poder: %.2f\n", cartas[i].superPoder);
    }

    int carta1, carta2;
    printf("\nEscolha duas cartas para comparar (0 a %d): ", numCartas-1);
    scanf("%d %d", &carta1, &carta2);

    printf("\nComparando cartas %d e %d:\n", carta1+1, carta2+1);

    printf("\nDensidade Populacional: \n");
    if (cartas[carta1].densidadePopulacional < cartas[carta2].densidadePopulacional)
        printf("Carta %d venceu!\n", carta1+1);
    else if (cartas[carta1].densidadePopulacional > cartas[carta2].densidadePopulacional)
        printf("Carta %d venceu!\n", carta2+1);
    else
        printf("Empate!\n");

    printf("\nPopulação: \n");
    if (cartas[carta1].populacao > cartas[carta2].populacao)
        printf("Carta %d venceu!\n", carta1+1);
    else if (cartas[carta1].populacao < cartas[carta2].populacao)
        printf("Carta %d venceu!\n", carta2+1);
    else
        printf("Empate!\n");

    printf("\nÁrea: \n");
    if (cartas[carta1].area > cartas[carta2].area)
        printf("Carta %d venceu!\n", carta1+1);
    else if (cartas[carta1].area < cartas[carta2].area)
        printf("Carta %d venceu!\n", carta2+1);
    else
        printf("Empate!\n");

    printf("\nNúmero de Pontos Turísticos: \n");
    if (cartas[carta1].numPontosTuristicos > cartas[carta2].numPontosTuristicos)
        printf("Carta %d venceu!\n", carta1+1);
    else if (cartas[carta1].numPontosTuristicos < cartas[carta2].numPontosTuristicos)
        printf("Carta %d venceu!\n", carta2+1);
    else
        printf("Empate!\n");

    printf("\nPIB: \n");
    if (cartas[carta1].pib > cartas[carta2].pib)
        printf("Carta %d venceu!\n", carta1+1);
    else if (cartas[carta1].pib < cartas[carta2].pib)
        printf("Carta %d venceu!\n", carta2+1);
    else
        printf("Empate!\n");

    printf("\nPIB per Capita: \n");
    if (cartas[carta1].pibPerCapita > cartas[carta2].pibPerCapita)
        printf("Carta %d venceu!\n", carta1+1);
    else if (cartas[carta1].pibPerCapita < cartas[carta2].pibPerCapita)
        printf("Carta %d venceu!\n", carta2+1);
    else
        printf("Empate!\n");

    printf("\nSuper Poder: \n");
    if (cartas[carta1].superPoder > cartas[carta2].superPoder)
        printf("Carta %d venceu!\n", carta1+1);
    else if (cartas[carta1].superPoder < cartas[carta2].superPoder)
        printf("Carta %d venceu!\n", carta2+1);
    else
        printf("Empate!\n");

    return 0;
}
