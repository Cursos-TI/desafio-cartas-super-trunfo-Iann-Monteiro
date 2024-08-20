#include <stdio.h>

 typedef struct {
        char nome[50];
        unsigned long int populacao;
        float area;
        unsigned int numPontosTuristicos;
        double densidadePopulacional;
        double pib;
        double pibPerC;
} Carta;

void calculaPropriedades(Carta *c){
    c->densidadePopulacional = (double)c->populacao / c->area;
    c->pibPerC = c->pib / c->populacao;
}

int main() {
   
    Carta cartas[3];

    printf("Bem vindo ao SUPER TRUNFO\n");

    for(int i = 1; i <= 2; i++){

        printf("\nInsira os Dados da Carta %d\n\n", i);
        
        printf("Nome: ");
        scanf(" %[^\n]s", cartas[i].nome);
        getchar();

        printf("\nPopulação: ");
        scanf("%lu", &cartas[i].populacao);

        printf("\nÁrea: ");
        scanf("%f", &cartas[i].area);

        printf("\nNúmero de Pontos Turísticos: ");
        scanf("%u", &cartas[i].numPontosTuristicos);
        getchar();

        printf("\nPIB: ");
        scanf("%lf", &cartas[i].pib);

        calculaPropriedades(&cartas[i]);
    }

    printf("\nDados das Cartas:\n");
    for(int i = 1; i <= 2; i++) {
        printf("\nCarta %d:\n", i);
        printf("Nome: %s\n", cartas[i].nome);
        printf("População: %lu\n", cartas[i].populacao);
        printf("Área: %.2f\n", cartas[i].area);
        printf("Número de Pontos Turísticos: %u\n", cartas[i].numPontosTuristicos);
        printf("Densidade Populacional: %.2f\n", cartas[i].densidadePopulacional);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("PIB per Capita: %.2f\n", cartas[i].pibPerC);
    }

    return 0;
}