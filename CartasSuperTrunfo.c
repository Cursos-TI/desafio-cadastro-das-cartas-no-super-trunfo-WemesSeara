#include <stdio.h>

int main(){
//declaração de variáveis.
char estado1, estado2;
char codigo1[5], codigo2[5];
char cidade1[50], cidade2[50];
unsigned long int populacao1, populacao2;
float area1, area2, pib1, pib2;
int pontos_turisticos1, pontos_turisticos2;
float densidade_populacional1, densidade_populacional2;
float pib_per_capita1, pib_per_capita2;
float SuperPoder1, SuperPoder2;
int opcao;

//Exibição do Titulo do jogo.
printf("*___Super Trunfo___*\n");
printf("**Bem-Vindo ao Jogo Super trunfo**\n");

//Entrada de dados das cartas.
printf("\nCarta1\n");
printf("Entrecom uma letra de A a H para registrar o estado da carta: ");
scanf(" %c", &estado1);
printf("Entre com um numero de 01 a 04 para registrar o código da carta: ");
scanf("%4s", codigo1);
printf("Informe o nome da cidade: ");
scanf(" %49[^\n]", cidade1);
printf("Informe a população: ");
scanf("%lu", &populacao1);
printf("Informe a Área da cidade(km²): ");
scanf("%f", &area1);
printf("Informe o PIB (em bilhões de reais): ");
scanf("%f", &pib1);
printf("Informe a quantidade de pontos turísticos: ");
scanf("%d", &pontos_turisticos1);

densidade_populacional1 = populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;

printf("\nCarta2\n");
printf("Entrecom uma letra de A a H para registrar o estado da carta: ");
scanf(" %c", &estado2);
printf("Entre com um numero de 01 a 04 para registrar o código da carta: ");
scanf("%4s", codigo2);
printf("Informe o nome da cidade: ");
scanf(" %49[^\n]", cidade2);
printf("Informe a população: ");
scanf("%lu", &populacao2);
printf("Informe a Área da cidade(km²): ");
scanf("%f", &area2);
printf("Informe o PIB (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Informe a quantidade de pontos turísticos: ");
scanf("%d", &pontos_turisticos2);

densidade_populacional2 = populacao2 / area2;
pib_per_capita1 = pib2 / populacao2;

SuperPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + ( 1 / densidade_populacional1);
SuperPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

//Batalha das cartas 
printf("**Batalha das Cartas**\n");

do {
//Menu interartivo
printf("\nEscolha uma categoria para a batalha:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - PIB Per Capita\n");
printf("6 - Densidade Populacional\n");
printf("7 - Super Poder\n");
printf("0 - Sair\n");
printf("Opçao: ");
scanf("%d", &opcao);

switch (opcao) {
case 1: 
    printf("\nCategoria População:\n");
    if (populacao1 > populacao2)
    printf("Carta 1 venceu!\n");
    else if (populacao1 < populacao2)
    printf("Carta 2 venceu!\n");
    else printf("Empate!\n");
    break;
case 2: 
    printf("\nCategoria Área:\n");
    if (area1 > area2)
printf("Carta 1 venceu\n");
    else if (area1 < area2)
    printf("Carta 2 venceu!\n");
    else printf("Empate\n");
    break;
case 3:
    printf("\nCategoria PIB:\n");
    if (pib1 > pib2)
    printf("Carta 1 venceu!\n");
    else if (pib1 < pib2)
    printf("Carta 2 venceu!\n");
    else printf("Empate!\n");
    break;
case 4:
    printf("\nCategoria Turismo:\n");
    if (pontos_turisticos1 > pontos_turisticos2)
    printf("Carta 1 venceu!\n");
    else if (pontos_turisticos1 < pontos_turisticos2)
    printf("Carta 2 venceu!\n");
    else printf("Empate!\n");
    break;
case 5:
    printf("\nCategoria PIB per Capita\n");
    if (pib_per_capita1 > pib_per_capita2)
    printf("Carta 1 venceu\n!");
    else if (pib_per_capita1 < pib_per_capita2)
    printf("Carta 2 venceu!\n");
    else printf("Empate!\n");
    break;
case 6:
    printf("\nCategoria Densidade Populacional\n");
    if ( densidade_populacional1 < densidade_populacional2)
    printf("Carta 1 venceu!\n");
    else if (densidade_populacional1 > densidade_populacional2)
    printf("Carta 2 venceu!\n");
    else printf("Empate!\n");
    break;
case 7:
    printf("\nCategoria Super Poder\n");
    if (SuperPoder1 > SuperPoder2)
    printf("Carta 1 venceu!\n");
    else if (SuperPoder1 < SuperPoder2)
    printf("Carta 2 venceu!\n");
    else printf("Empate\n");
    break;
case 0:
    printf("Saindo do jogo...\n");
    break;
default:
printf("Opção invalida! Tente novamente.\n");
}
} while (opcao !=0);

return 0;
}