#include <stdio.h>

int main() {
    // Declaração de variáveis da carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade_populacional1, pib_per_capita1;
    float SuperPoder1;

    // Declaração de variáveis da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade_populacional2, pib_per_capita2;
    float SuperPoder2;

    // Exibição do título do Jogo.
    printf("____Super Trunfo____\n");
    printf("**Bem-Vindo ao Jogo Super Trunfo**\n");

    // Entrada de dados da carta 1.
    printf("\nCarta 1\n");
    printf("Entre uma letra de A a H para registrar o estado da carta: ");
    scanf(" %c", &estado1);

    printf("Entre um número de 01 a 04 para registrar o código da carta: ");
    scanf("%4s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Informe a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a Área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita da carta 1.
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;

    // Entrada de dados da carta 2.
    printf("\nCarta 2\n");
    printf("Entre uma letra de A a H para registrar o estado da carta: ");
    scanf(" %c", &estado2);

    printf("Entre um número de 01 a 04 para registrar o código da carta: ");
    scanf("%4s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Informe a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a Área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita da carta 2.
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibição dos dados da primeira carta.
    printf("\nDADOS CADASTRADOS DA PRIMEIRA CARTA\n");
    printf("Código: %c%s \n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta.
    printf("\nDADOS CADASTRADOS DA SEGUNDA CARTA\n");
    printf("Código: %c%s \n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    // Batalha de cartas
    printf("**BATALHA DE CARTAS**\n");

    // Comparação dos valores de população
    printf("\nCategoria População:\n");
    printf("A população de %s é: %lu\n", cidade1, populacao1);
    printf("A população de %s é: %lu\n", cidade2, populacao2);
    printf("A população de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade1, cidade2, populacao1 > populacao2);

    // Comparação de área
    printf("\nCategoria Área:\n");
    printf("A Área de %s vale %.2f km²\n", cidade1, area1);
    printf("A Área de %s vale %.2f km²\n", cidade2, area2);
    printf("A Área de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade1, cidade2, area1 > area2);

    // Comparação de PIB
    printf("\nCategoria PIB:\n");
    printf("O PIB de %s vale %.2f bilhões de reais\n", cidade1, pib1);
    printf("O PIB de %s vale %.2f bilhões de reais\n", cidade2, pib2);
    printf("O PIB de %s é maior que o de %s? = %d (0=Nao | 1=Sim)\n", cidade1, cidade2, pib1 > pib2);

    // Comparação de pontos turísticos
    printf("\nCategoria Turismo:\n");
    printf("Os pontos turísticos de %s valem %d\n", cidade1, pontos_turisticos1);
    printf("Os pontos turísticos de %s valem %d\n", cidade2, pontos_turisticos2);
    printf("Os pontos turísticos de %s são maiores que os de %s? = %d (0=Nao | 1=Sim)\n", cidade1, cidade2, pontos_turisticos1 > pontos_turisticos2);

    // Comparação de PIB per capita
    printf("\nCategoria Per Capita:\n");
    printf("O PIB per capita de %s vale %.2f\n", cidade1, pib_per_capita1);
    printf("O PIB per capita de %s vale %.2f\n", cidade2, pib_per_capita2);
    printf("O PIB per capita de %s é maior que o de %s? = %d (0=Nao | 1=Sim)\n", cidade1, cidade2, pib_per_capita1 > pib_per_capita2);

    // Comparação de densidade populacional inversa
    printf("\nCategoria Densidade Inversa:\n");
    printf("A densidade populacional de %s vale %.2f\n", cidade1, (1 / densidade_populacional1));
    printf("A densidade populacional de %s vale %.2f\n", cidade2, (1 / densidade_populacional2));
    printf("A densidade populacional de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade1, cidade2, (1 / densidade_populacional1) > (1 / densidade_populacional2));

    //Calculos do SuperPower
    
    SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1/densidade_populacional1);
    printf("O Super Poder de %s é %f\n",cidade1, SuperPoder1);
    SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);
    printf("O Super Poder de %s é %f\n", cidade2, SuperPoder2);
    printf("O Super Poder de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade1, cidade2, SuperPoder1 > SuperPoder2);
    return 0;
}
