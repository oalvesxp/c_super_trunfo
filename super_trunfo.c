#include <stdio.h>
#include <stdlib.h>

struct Card {
    char state;
    char code[4];
    char city[20];
    int population;
    float area;    // Km²
    float pib;
    int total_turism_points;
};

int main() {
    struct Card card01, card02;
    int timer = 1000;

    // Start program
    printf("Seja bem vindo ao Super trunfo!\n");
    _sleep(timer);

    printf("Cadastre a primeira carta (1 de 2):\n");
    _sleep(timer);

    // Scan Card01 data
    printf("Qual o estado?:\n");
    scanf("%c", &card01.state);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &card01.code);

    printf("Qual o nome da cidade?:\n");
    scanf("%s", &card01.city);

    printf("Qual a populacao da cidade?:\n");
    scanf("%i", &card01.population);

    printf("Qual a area da cidade (em Km²)?:\n");
    scanf("%f", &card01.area);

    printf("Qual o PIB da cidade?:\n");
    scanf("%f", &card01.pib);

    printf("Qual a quantidade total de pontos turisticos da cidade?:\n");
    scanf("%i", &card01.total_turism_points);


    // Print data
    printf("Processando informacoes...\n\n");
    _sleep(timer);

    // Print Card01 data
    printf("###### Carta 01 ######\n");
    printf("Estado: %c\n", card01.state);
    printf("Estado: %s\n", card01.code);
    printf("Cidade: %s\n", card01.city);
    printf("Populacao: %i\n", card01.population);
    printf("Area: %f Km²\n", card01.area);
    printf("PIB: R$ %f A\n", card01.pib);
    printf("Numero de Pontos Turisticos: %i\n", card01.total_turism_points);
}