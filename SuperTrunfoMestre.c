#include <stdio.h>

int main() {
    printf("Super Trunfo\nObjetivo: tenha a carta mais forte.\nAss: André Ribeiro\n\n");

    // Variáveis da primeira carta
    char Estado1[20], Codigo1[4], Cidade1[30];
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float Area1, PIB1, Densidade1, PIBPerCapita1, SuperPoder1;

    // Variáveis da segunda carta
    char Estado2[20], Codigo2[4], Cidade2[30];
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float Area2, PIB2, Densidade2, PIBPerCapita2, SuperPoder2;

    // Entrada da primeira carta
    printf("Primeira Carta\n");
    printf("Estado (A-H): "); scanf("%s", Estado1);
    printf("Código (ex: A01): "); scanf("%s", Codigo1);
    printf("Nome da cidade: "); scanf(" %[^\n]s", Cidade1);
    printf("População: "); scanf("%lu", &Populacao1);
    printf("Área: "); scanf("%f", &Area1);
    printf("PIB: "); scanf("%f", &PIB1);
    printf("Pontos turísticos: "); scanf("%d", &PontosTuristicos1);

    // Cálculos da primeira carta
    Densidade1 = Populacao1 / Area1;
    PIBPerCapita1 = PIB1 / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBPerCapita1 + (1.0f / Densidade1);

    // Entrada da segunda carta
    printf("\nSegunda Carta\n");
    printf("Estado (A-H): "); scanf("%s", Estado2);
    printf("Código (ex: A01): "); scanf("%s", Codigo2);
    printf("Nome da cidade: "); scanf(" %[^\n]s", Cidade2);
    printf("População: "); scanf("%lu", &Populacao2);
    printf("Área: "); scanf("%f", &Area2);
    printf("PIB: "); scanf("%f", &PIB2);
    printf("Pontos turísticos: "); scanf("%d", &PontosTuristicos2);

    // Cálculos da segunda carta
    Densidade2 = Populacao2 / Area2;
    PIBPerCapita2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBPerCapita2 + (1.0f / Densidade2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (Populacao1 > Populacao2 ? 1 : 2), (Populacao1 > Populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2 ? 1 : 2), (Area1 > Area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2 ? 1 : 2), (PIB1 > PIB2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2 ? 1 : 2), (PontosTuristicos1 > PontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (Densidade1 < Densidade2 ? 1 : 2), (Densidade1 < Densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBPerCapita1 > PIBPerCapita2 ? 1 : 2), (PIBPerCapita1 > PIBPerCapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2 ? 1 : 2), (SuperPoder1 > SuperPoder2 ? 1 : 0));

    return 0;
}
