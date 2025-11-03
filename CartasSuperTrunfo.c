#include <stdio.h>

int main() {
    // Carta 1: Fortaleza, Ceará
    char estado1 = 'C';
    char codigoCarta1[4] = "c01";
    char nomeCidade1[50] = "fortaleza";
    int populacao1 = 2687000;
    float area1 = 313.14;
    float pib1 = 110000.50;
    int pontosTuristicos1 = 15;

    // Carta 2: São Paulo
    char estado2 = 'B';
    char codigoCarta2[4] = "B02";
    char nomeCidade2[50] = "São Paulo";
    int populacao2 = 12300000;
    float area2 = 1521.11;
    float pib2 = 700000.50;
    int pontosTuristicos2 = 20;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: C01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

     float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibe Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta : ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); 

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n---Resultado da batalha---\n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

   
    printf("\n--- Informacoes adicionais ---\n");
    printf("%s - Densidade: %.2f hab/km² | PIB total: %.2f\n", nomeCidade1, densidade1, pib1);
    printf("%s - Densidade: %.2f hab/km² | PIB total: %.2f\n", nomeCidade2, densidade2, pib2);


    return 0;
}