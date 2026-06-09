#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
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

  float densidadePopulacional;
  float pibPerCapita;

  printf("=== CADASTRO DA CARTA ===\n\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado);

  printf("Codigo da carta: ");
  scanf("%s", codigo);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade);

  printf("Populacao: ");
  scanf("%d", &populacao);

  printf("Area (km2): ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Pontos turisticos: ");
  scanf("%d", &pontosTuristicos);

  densidadePopulacional = populacao / area;
  pibPerCapita = pib / populacao;

  printf("\n=== DADOS DA CARTA ===\n");

  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f km2\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turisticos: %d\n", pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km2\n",
         densidadePopulacional);
  printf("PIB per Capita: %.2f\n",
         pibPerCapita);

  return 0;
}
