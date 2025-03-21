#include <stdio.h>

int main() {
    // Declaração de variáveis da carta 1
    char estado1[3];
    char codigo1[5];
    char nome_da_cidade1[50];
    float populacao1, pib1, area1;
    int pontos_turisticos1;
    float densidade_populacional1, pib_per_capita1;

    // Declaração de variáveis da carta 2
    char estado2[3];
    char codigo2[5];
    char nome_da_cidade2[50];
    float populacao2, pib2, area2;
    int pontos_turisticos2;
    float densidade_populacional2, pib_per_capita2;

    // Exiba o título do Jogo
    printf("------Super Trunfo------\n");
    printf("**Bem-Vindo ao Jogo Super Trunfo**\n");

    // Entrada de dados da carta 1
    printf("\nCarta 1\n");
    printf("Informe a sigla do estado da carta 1: ");
    scanf("%2s", estado1);

    printf("Informe o codigo da carta 1: ");
    scanf("%4s", codigo1);

    printf("Informe o nome da cidade da carta 1: ");
    scanf(" %49[^\n]", nome_da_cidade1);

    printf("Informe a populacao da carta 1: ");
    scanf("%f", &populacao1);

    printf("Informe o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Informe a area da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Informe os pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita da carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Entrada de dados da carta 2
    printf("\nCarta 2\n");
    printf("Informe a sigla do estado da carta 2: ");
    scanf("%2s", estado2);

    printf("Informe o codigo da carta 2: ");
    scanf("%4s", codigo2);

    printf("Informe o nome da cidade da carta 2: ");
    scanf(" %49[^\n]", nome_da_cidade2);

    printf("Informe a populacao da carta 2: ");
    scanf("%f", &populacao2);

    printf("Informe o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Informe a area da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Informe os pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);
    

    // Cálculo da densidade populacional e PIB per capita da carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibir os dados da carta 1
    printf("\n-----Carta 1-----\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("Populacao: %.2f\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Area: %.2f km²\n", area1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f Hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    // Exibir os dados da carta 2
    printf("\n-----Carta 2-----\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %.2f\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Area: %.2f km²\n", area2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f Hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}
