#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema: Comparação de Cartas (Nível Novato)
// Este programa cadastra duas cartas (cidades) e compara um único atributo numérico
// para determinar a carta vencedora.

int main() {
    // ----------- Declaração das variáveis -----------
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    char codigo1[5], codigo2[5];
    char estado1[25], estado2[25];
    char cidade1[50], cidade2[50];
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // ----------- Cadastro da Carta 1 -----------
    printf("---------- Cadastro da Carta 1 ----------\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população (em habitantes): ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // ----------- Cadastro da Carta 2 -----------
    printf("\n---------- Cadastro da Carta 2 ----------\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população (em habitantes): ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ----------- Escolha do atributo para comparação -----------
    // Escolha DIRETAMENTE no código o atributo a ser comparado.
    // Exemplo: população, área, PIB, densidade populacional ou PIB per capita.
    // Vamos comparar o atributo "PIB per capita" neste exemplo.
    
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: PIB per capita\n\n");

    printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%s): %.2f reais\n\n", cidade2, estado2, pib_per_capita2);

    // ----------- Comparação usando if / else -----------
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm o mesmo PIB per capita.\n");
    }

    return 0;
}
