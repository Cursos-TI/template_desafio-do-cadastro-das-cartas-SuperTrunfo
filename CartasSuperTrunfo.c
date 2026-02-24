#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[5];   
    char nomec1[50];   
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nomec2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ====== ENTRADA CARTA 1 ======
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite uma letra de A a H para representar o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Digite o nome da cidade (sem espacos, ex: SaoPaulo): ");
    scanf("%49s", nomec1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km^2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // ====== ENTRADA CARTA 2 ======
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite uma letra de A a H para representar o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade (sem espacos, ex: RioDeJaneiro): ");
    scanf("%49s", nomec2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km^2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ====== SAIDA ======
    printf("\n=============================\n");
    printf("        CARTAS CADASTRADAS\n");
    printf("=============================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomec1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomec2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}

