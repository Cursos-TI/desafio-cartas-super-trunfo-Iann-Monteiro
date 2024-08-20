#include <stdio.h>

 typedef struct {
        char nome[50];
        double populacao;
        double area;
        double numPontosTuristicos;
        double densidadePopulacional;
        double pib;
        double pibPerC;
} Carta;

void calculaPropriedades(Carta *c){
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerC = c->pib / c->populacao;
}

int main() {
   
    Carta cartas[3];

    int contadorA = 0;
    int contadorB = 0;

    printf("Bem vindo ao SUPER TRUNFO\n");

    for(int i = 1; i <= 2; i++){

        printf("\nInsira os Dados da Carta %d\n\n", i);
        
        printf("Nome: ");
        scanf(" %[^\n]s", cartas[i].nome);
        getchar();

        printf("\nPopulação: ");
        scanf("%lf", &cartas[i].populacao);

        printf("\nÁrea: ");
        scanf("%lf", &cartas[i].area);

        printf("\nNúmero de Pontos Turísticos: ");
        scanf("%lf", &cartas[i].numPontosTuristicos);
        getchar();

        printf("\nPIB: ");
        scanf("%lf", &cartas[i].pib);

        calculaPropriedades(&cartas[i]);
    }

    printf("\nDados das Cartas:\n");
    for(int i = 1; i <= 2; i++) {
        printf("\nCarta %d:\n", i);
        printf("Nome: %s\n", cartas[i].nome);
        printf("População: %.2f\n", cartas[i].populacao);
        printf("Área: %.2f\n", cartas[i].area);
        printf("Número de Pontos Turísticos: %f\n", cartas[i].numPontosTuristicos);
        printf("Densidade Populacional: %.2f\n", cartas[i].densidadePopulacional);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("PIB per Capita: %.2f\n", cartas[i].pibPerC);
    }

    printf("\nQual carta é a mais forte?\n\n");
    printf("Densidade Populacional: \n");
    if(cartas[1].densidadePopulacional > cartas[2].densidadePopulacional){
        printf("Carta %s Venceu!\n", cartas[2].nome);
        contadorB++;
    }else if(cartas[1].densidadePopulacional < cartas[2].densidadePopulacional){
        printf("Carta %s Venceu!\n", cartas[1].nome);
        contadorA++;
    }else{
        printf("Empate!\n");
    }

    printf("\nOutras Propriedades: \n");
    printf("\nPopulação: \n");
    if(cartas[1].populacao > cartas[2].populacao){
        printf("Carta %s Venceu!\n", cartas[1].nome);
        contadorA++;
    }else if(cartas[1].populacao < cartas[2].populacao){
        printf("Carta %s Venceu!\n", cartas[2].nome);
        contadorB++;
    }else{
        printf("Empate!\n");
    }

    printf("\nÁrea: \n");
    if(cartas[1].area > cartas[2].area){
        printf("Carta %s Venceu!\n", cartas[1].nome);
        contadorA++;
    }else if(cartas[1].area < cartas[2].area){
        printf("Carta %s Venceu!\n", cartas[2].nome);
        contadorB++;
    }else{
        printf("Empate!\n");
    }

    printf("\nNúmero de Pontos Turísticos: \n");
    if(cartas[1].numPontosTuristicos > cartas[2].numPontosTuristicos){
        printf("Carta %s Venceu!\n", cartas[1].nome);
        contadorA++;
    }else if(cartas[1].numPontosTuristicos < cartas[2].numPontosTuristicos){
        printf("Carta %s Venceu!\n", cartas[2].nome);
        contadorB++;
    }else{
        printf("Empate!\n");
    }
    
    printf("\nPib: \n");
    if(cartas[1].pib > cartas[2].pib){
        printf("Carta %s Venceu!\n", cartas[1].nome);
        contadorA++;
    }else if(cartas[1].pib < cartas[2].pib){
        printf("Carta %s Venceu!\n", cartas[2].nome);
        contadorB++;
    }else{
        printf("Empate!\n");
    }

    printf("\nPib per Capita: \n");
    if(cartas[1].pibPerC > cartas[2].pibPerC){
        printf("Carta %s Venceu!\n", cartas[1].nome);
        contadorA++;
    }else if(cartas[1].pibPerC < cartas[2].pibPerC){
        printf("Carta %s Venceu!\n", cartas[2].nome);
        contadorB++;
    }else{
        printf("Empate!\n");
    }

    printf("\nPlacar Total: \n");
    if(contadorA > contadorB){
        printf("Carta %s Venceu! Resultado: %d a %d\n", cartas[1].nome, contadorA, contadorB);
    }else if(contadorA < contadorB){
        printf("Carta %s Venceu!Resultado: %d a %d\n", cartas[2].nome, contadorA, contadorB);
    }else{
        printf("Empate! Resultado: %d a %d\n", contadorA, contadorB);
    }

    return 0;
}