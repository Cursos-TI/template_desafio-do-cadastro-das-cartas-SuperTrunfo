#include <stdio.h>

int main() {

    printf("--------------------\n");
    printf("### Nivel Mestre ###\n");
    printf("-----***********---\n");

    // ===== CARTA 1 =====
    char estado;
    char codigo[4];
    char cidade[50];
    unsigned long int populacao;
    float area_km;
    float pib;
    int pontos;

    printf("\n=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Codigo: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("Populacao: ");
    scanf("%lu", &populacao);

    printf("Area (km): ");
    scanf("%f", &area_km);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos);

    // ===== CÁLCULOS CARTA 1 =====
    float densidade = (area_km != 0) ? populacao / area_km : 0;
    float pib_per_capita = (populacao != 0) ? pib / populacao : 0;
    float super_poder = populacao + area_km + pib + pontos + pib_per_capita;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area_km2;
    float pib2;
    int pontos2;

    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km): ");
    scanf("%f", &area_km2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULOS CARTA 2 =====
    float densidade2 = (area_km2 != 0) ? populacao2 / area_km2 : 0;
    float pib_per_capita2 = (populacao2 != 0) ? pib2 / populacao2 : 0;
    float super_poder2 = populacao2 + area_km2 + pib2 + pontos2 + pib_per_capita2;

    // ===== EXIBIÇÃO =====
    printf("\n=== DADOS CARTA 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos);
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    printf("\n=== DADOS CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // ===== COMPARAÇÕES =====
    printf("\n=== RESULTADO DAS COMPARACOES ===\n");

    printf("Populacao: %s venceu\n", (populacao > populacao2) ? cidade : cidade2);
    printf("Area: %s venceu\n", (area_km > area_km2) ? cidade : cidade2);
    printf("PIB: %s venceu\n", (pib > pib2) ? cidade : cidade2);
    printf("Pontos Turisticos: %s venceu\n", (pontos > pontos2) ? cidade : cidade2);

    // regra especial
    printf("Densidade: %s venceu\n", (densidade < densidade2) ? cidade : cidade2);

    printf("PIB per capita: %s venceu\n", (pib_per_capita > pib_per_capita2) ? cidade : cidade2);

    printf("Super Poder: %s venceu\n", (super_poder > super_poder2) ? cidade : cidade2);

    return 0;
}