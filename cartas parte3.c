#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[3], codigo1[5], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int numPontos1;

    // Variáveis da Carta 2
    char estado2[3], codigo2[5], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int numPontos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontos2);

    // Cálculos da Carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 / (float)populacao1;

    // Cálculos da Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / (float)populacao2;

    // Cálculo do Super Poder (convertendo todos para float)
    float superPoder1 = (float)populacao1 + area1 + pib1 + numPontos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + numPontos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações e exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numPontos1 > numPontos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0); // menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}