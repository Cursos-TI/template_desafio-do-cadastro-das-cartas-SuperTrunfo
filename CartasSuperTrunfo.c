#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()  {
  // carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;


  // ======= Entrada carta 1 ======
  printf("=== carta 1 ===\n");

  printf("estado (A-H): ");
  scanf(" %c", &estado1);

  printf("codigo (ex: A01): ");
  scanf("%s", codigo1);
  
  printf("nome da cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("populacao: ");
  scanf(" %d", &populacao1);

  printf("area (km2): ");
  scanf(" %f", &area1);

  printf("pib: ");
  scanf(" %f", &pib1);

  printf("pontos turisticos: ");
  scanf("%d", &pontos1);
  
  // ===== Entrada carta 2 ======

  printf("\nj=== carta 2 ===\n");

  printf("estado (A-H): ");
  scanf(" %c", &estado2);

  printf("codigo (ex: B02): ");
  scanf("%s", codigo2);

  printf("nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("populacao: ");
  scanf(" %d", &populacao2);

  printf("area (km2): ");
  scanf(" %f", &area2);
  
  printf("pib: ");
  scanf(" %f", &pib2);

  printf("pontos turisticos: ");
  scanf(" %d", &pontos2);

  // ======= Saida ========

  printf("\n=== carta 1 ===\n");
  printf("estado: %c\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("cidade: %s\n", cidade1);
  printf("populacao: %d\n", populacao1);
  printf("area: %.2f km2\n", area1);
  printf("pib: %.2f\n", pib1);
  printf("pontos turisticos: %d\n", pontos1);

  printf("\n=== carta 2 ===\n");
  printf("estado: %c\n",  estado2);
  printf("codigo: %s\n", codigo2);
  printf("cidade: %s\n", cidade2);
  printf("populacao: %d\n", populacao2);
  printf("area: %.2f km2\n", area2);
  printf("pib: %.2f\n", pib2);
  printf("pontos turisticos: %d\n", pontos2);


  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  return 0;
  } 
