#include <stdio.h>

int main() {

    printf("--------------------\n");
    printf("### Nivel Aventureiro ###\n");
    printf("-----***********---\n");

    // CARTA 1
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area_km;
    float pib;
    int numero_de_pontos_turisticos;
    
    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite seu codigo: ");
    scanf("%s", codigo);

    printf("Digite sua cidade: ");
    scanf("%s", cidade);

    printf("Quantas pessoas: ");
    scanf("%d", &populacao);

    printf("Tamanho da area km: ");
    scanf("%f", &area_km);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    //  CÁLCULOS CARTA 1
    float densidade = populacao / area_km;
    float pib_per_capita = pib / populacao;

    printf("----carta2----\n");

    // CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area_km2;
    float pib2;
    int numero_de_pontos_turisticos2;

    printf("Digite seu estado: ");
    scanf(" %c", &estado2);

    printf("Digite seu codigo: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Quantas pessoas: ");
    scanf("%d", &populacao2);

    printf("Tamanho da area km: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    //  CÁLCULOS CARTA 2
    float densidade2 = populacao2 / area_km2;
    float pib_per_capita2 = pib2 / populacao2;

    //  SAÍDA (mesmo estilo simples)
    printf("\nCarta 1:\n");
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    printf("\nCarta 2:\n");
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}