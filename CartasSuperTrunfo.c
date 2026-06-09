#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  /* CARTA 1 */
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  /* CARTA 2 */
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  /* Cálculos */
  float densidade1;
  float densidade2;

  float pibPerCapita1;
  float pibPerCapita2;

  float superPoder1;
  float superPoder2;

  printf("=== CARTA 1 ===\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Codigo: ");
  scanf("%s", codigo1);

  printf("Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  printf("\n=== CARTA 2 ===\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Codigo: ");
  scanf("%s", codigo2);

  printf("Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  /* Cálculos */
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  pibPerCapita1 = pib1 / populacao1;
  pibPerCapita2 = pib2 / populacao2;

  superPoder1 =
      populacao1 +
      area1 +
      pib1 +
      pontos1 +
      pibPerCapita1 +
      (1.0 / densidade1);

  superPoder2 =
      populacao2 +
      area2 +
      pib2 +
      pontos2 +
      pibPerCapita2 +
      (1.0 / densidade2);

  printf("\n============================\n");
  printf("RESULTADO DAS COMPARACOES\n");
  printf("============================\n");

  printf("\nPopulacao: ");
  if (populacao1 > populacao2)
    printf("Carta 1 venceu");
  else
    printf("Carta 2 venceu");

  printf("\nArea: ");
  if (area1 > area2)
    printf("Carta 1 venceu");
  else
    printf("Carta 2 venceu");

  printf("\nPIB: ");
  if (pib1 > pib2)
    printf("Carta 1 venceu");
  else
    printf("Carta 2 venceu");

  printf("\nPontos Turisticos: ");
  if (pontos1 > pontos2)
    printf("Carta 1 venceu");
  else
    printf("Carta 2 venceu");

  printf("\nDensidade Populacional: ");
  if (densidade1 < densidade2)
    printf("Carta 1 venceu");
  else
    printf("Carta 2 venceu");

  printf("\nPIB per Capita: ");
  if (pibPerCapita1 > pibPerCapita2)
    printf("Carta 1 venceu");
  else
    printf("Carta 2 venceu");

  printf("\nSuper Poder: ");
  if (superPoder1 > superPoder2)
    printf("Carta 1 venceu");
  else
    printf("Carta 2 venceu");

  printf("\n");

  return 0;
}
