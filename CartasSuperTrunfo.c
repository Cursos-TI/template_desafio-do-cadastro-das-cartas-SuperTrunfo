#include <stdio.h>  

int main() {  
    
    // Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];

    unsigned long populacao1;
    double area1;
    double pib1;
    int pontos1;

    double densidade1;
    double pibPerCapita1;

    
    // Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];

    unsigned long populacao2;
    double area2;
    double pib2;
    int pontos2;  

    double densidade2;
    double pibPerCapita2;
    
    // ====================================
    // LEITURA CARTA 1
    //=====================================

    printf("==== CARTA 1 ====\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);


    // calculadora carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // ====================================
    // LEITURA CARTA 2
    //=====================================

    printf("\n==== CARTA 2 ====\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // calculadora carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // ====================================
    // EXIBIÇÃO 
    //=====================================

    printf("\n==== CARTA 1 ====\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);

    printf("\n==== CARTA 2 ====\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);

    return 0;
}

































