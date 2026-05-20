#include <stdio.h>

int main() {

    // =======================
    // Carta 1
    // =======================

    char estado1[3];
    char codigo1[10];
    char cidade1[50];

    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos;

    float densidade1;
    float pibPerCapita1;

    // =======================
    // Carta 2 
    // =======================

    char estado2[3];
    char codigo2[10];
    char cidade2[50];

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;

    // =======================
    // Carta 1
    // =======================

    printf("=== CADASTRO DA CARTA 1 ===\n");

    
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // =======================
    // CADASTRO DA CARTA 2
    // =======================

    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =======================
    // CALCULOS
    // =======================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // =======================
    // EXIBICAO DOS DADOS
    // =======================

    printf("\n=== DADOS DAS CARTAS ===\n");

    printf("\nCarta 1:\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Demografica: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // =======================
    // COMPARACAO DAS CARTA 
    // ATRIBUTO ESCOLHIDO: POPULACAO
    // =======================

    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("Atributo usado: Populacao\n\n");

    printf("%s: %d habitantes\n", cidade1, populacao1);
    printf("%s: %d habitantes\n\n", cidade2, populacao2);

    // =======================
    // LOGICA DE COMPARACAO
    // =======================

    if (populacao1 > populacao2) {

        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    } else if (populacao2 > populacao1) {

        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {

        printf("Resultado: Empate!\n");
    
    }

    return 0;
}