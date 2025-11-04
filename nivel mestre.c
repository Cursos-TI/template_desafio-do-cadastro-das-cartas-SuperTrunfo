#include <stdio.h>

int main() {
    // -------- Carta 1 --------
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;
    int pontos1;
    int carta1;
    char codigo1[5], estado1[25], cidade1[50];

    printf("---------- Cadastro da Carta 1 ----------\n");
    printf("Digite o número da carta: ");
    scanf("%d", &carta1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população (em habitantes): ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Super Poder da carta 1
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pib_per_capita1 + (1.0 / densidade1);

    // Exibição da carta 1
    printf("\n===== CARTA 1 =====\n");
    printf("Carta: %d\nCódigo: %s\nEstado: %s\nCidade: %s\n", carta1, codigo1, estado1, cidade1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n", populacao1, area1, pib1, pontos1);
    printf("Densidade populacional: %.2f hab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n", densidade1, pib_per_capita1, super_poder1);


    // -------- Carta 2 --------
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    int pontos2;
    int carta2;
    char codigo2[5], estado2[25], cidade2[50];

    printf("\n---------- Cadastro da Carta 2 ----------\n");
    printf("Digite o número da carta: ");
    scanf("%d", &carta2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população (em habitantes): ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Super Poder da carta 2
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição da carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Carta: %d\nCódigo: %s\nEstado: %s\nCidade: %s\n", carta2, codigo2, estado2, cidade2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n", populacao2, area2, pib2, pontos2);
    printf("Densidade populacional: %.2f hab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n", densidade2, pib_per_capita2, super_poder2);


    // -------- Comparação --------
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
