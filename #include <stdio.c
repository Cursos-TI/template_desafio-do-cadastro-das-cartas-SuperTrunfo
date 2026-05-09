#include <stdio.h>

int main(){

    // =============
    // carta 1
    //==============

    char estado1;
    char codigo1[10];
    char cidade1[50];

    unsigned long int populacao1;

    float area1;
    float pib1;

    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // =============
    // carta 2
    //==============

    char estado2;
    char codigo2[10];
    char cidade2[50];

    unsigned long int populacao2;

    float area2;
    float pib2;

    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    //=====================================
    // ENTRADA CARTA 1
    //=====================================

    printf("===== CARTA 1 =====\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade; ");
    scanf(" %[^\n]", cidade1);

    printf("Populção: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ====================================
    // ENTRADA CARTA 2
    //=====================================

    printf("\n===== CARTA 2 =====\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade; ");
    scanf(" %[^\n]", cidade2);  

    printf("Populção: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    //=====================================
    // CALCULOS CARTA 1
    //=====================================

    densidade1 = populacao1 / area1;

    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    superPoder1 =
        populacao1 +
        area1 +
        (pib1 * 1000000000.0) +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1 / densidade1);

    //=====================================
    // CALCULOS CARTA 2
    //=====================================

    densidade2 = populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder2 =
        populacao2 +
        area2 +
        (pib2 * 1000000000.0) +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1 / densidade2);

    //=====================================
    // EXIBIR CARTA 1
    //=====================================

    printf("\n===== DADOS CARTA 1 =====\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    //=====================================
    // EXIBIR CARTA 2
    //=====================================

    printf("\n===== DADOS CARTA 2 =====\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    

    //=====================================
    // COMPARAÇÕES
    //=====================================

    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");

    printf("População: %d\n", populacao1 > populacao2);

    printf("Area: %d\n", area1 > area2);

    printf("PIB: %d\n", pib1 > pib2);

    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    
    printf("Densidade Populacional: %d\n", densidade1 > densidade2);

    // MENOR densidade vence

    printf("Desnsidae Populacional: %d\n", densidade1 < densidade2);

    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;

}
















































































































































}