#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Carta 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // Exibição das cartas
    printf("===== Carta 1 =====\n");
    printf("Estado: %c\n", São Paulo);
    printf("Código: %s\n", A01);
    printf("Nome da Cidade: %s\n", São Paulo);
    printf("População: %d habitantes\n", 12325000);
    printf("Área: %.2f km²\n", 1521.11);
    printf("PIB: %.2f bilhões de reais\n", 699.28);
    printf("Número de Pontos Turísticos: %d\n", 50);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", Rio de Janeiro);
    printf("Código: %s\n", B02);
    printf("Nome da Cidade: %s\n", Rio de Janeiro);
    printf("População: %d habitantes\n", 6748000);
    printf("Área: %.2f km²\n", 1200.25);
    printf("PIB: %.2f bilhões de reais\n", 300.50);
    printf("Número de Pontos Turísticos: %d\n", 30);

    return 0;
}
