#include <stdio.h>

int main() {
    // Título / Assinatura
    printf("Super Trunfo\n");
    printf("Objetivo: tenha a carta mais forte.\n");
    printf("Ass: André Ribeiro\n\n");

    // Variáveis da primeira carta
    char Estado1[20], Codigo1[4], Cidade1[30];
    int Populacao1, PontosTuristicos1;
    float Area1, PIB1, Densidade1, PIBPerCapita1;

    // Variáveis da segunda carta
    char Estado2[20], Codigo2[4], Cidade2[30];
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2, Densidade2, PIBPerCapita2;

    // Entrada da primeira carta
    printf("Primeira Carta\n");
    printf("Digite o Estado (A-H): ");
    scanf("%s", Estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade1); // Lê até o fim da linha (com espaços)

    printf("Digite a população: ");
    scanf("%d", &Populacao1);

    printf("Digite a área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculos da primeira carta
    Densidade1 = Populacao1 / Area1;
    PIBPerCapita1 = PIB1 / Populacao1;

    // Entrada da segunda carta
    printf("\nSegunda Carta\n");
    printf("Digite o Estado (A-H): ");
    scanf("%s", Estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade2); // Lê até o fim da linha (com espaços)

    printf("Digite a população: ");
    scanf("%d", &Populacao2);

    printf("Digite a área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos da segunda carta
    Densidade2 = Populacao2 / Area2;
    PIBPerCapita2 = PIB2 / Populacao2;

    // Exibindo a primeira carta
    printf("\n=== Carta 01 ===\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f\n", PIBPerCapita1);

    // Exibindo a segunda carta
    printf("\n=== Carta 02 ===\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f\n", PIBPerCapita2);

    return 0;
}
