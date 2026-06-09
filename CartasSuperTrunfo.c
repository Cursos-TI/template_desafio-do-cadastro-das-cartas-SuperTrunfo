#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade


    char estado;
    char codigo[4];
    char cidade[50];

    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== Cadastro de Carta ===\n\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Codigo da carta: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km²): ");
    scanf("%f", &area);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n=== Dados da Carta ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

return 0;
} 
