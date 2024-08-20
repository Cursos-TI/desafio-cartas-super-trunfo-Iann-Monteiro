#include <stdio.h>

int main() {
    typedef struct {
        char nome[50];
        unsigned long int populacao;
        float area;
        unsigned int numPontosTuristicos;
    } Carta;

    Carta cartas[];

    printf("Bem vindo ao SUPER TRUNFO\n\n")

    for(int i = 1; i <= 2; i++){

        Carta c;

        printf("Insira os Dados da Carta %d", i);
        
        printf("Nome: ");
        scanf("%[^\n]s", c.nome);
        getchar();

        printf("População: ");
        scanf("%lu", &c.populacao);

        printf("Área: ");
        scanf("%f", &c.area);

        printf("Número de Pontos Turísticos: ");
        scanf("%u", &c.numPontosTuristicos);

        cartas[i] = c;

        printf("\nDados da Carta:\n");
        printf("Nome: %s\n", c.nome);
        printf("População: %lu\n", c.populacao);
        printf("Área: %.2f\n", c.area);
        printf("Número de Pontos Turísticos: %u\n", c.numPontosTuristicos);
    }

    return 0;
}