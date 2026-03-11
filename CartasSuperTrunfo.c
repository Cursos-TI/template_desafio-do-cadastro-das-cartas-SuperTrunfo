#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char cidade1[50], cidade2[50];
    char codigo1[4], codigo2[4];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Área para entrada de dados
    printf("Carta 1\n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("\nCarta 2\n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B03):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Área para exibição dos dados da cidade
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}