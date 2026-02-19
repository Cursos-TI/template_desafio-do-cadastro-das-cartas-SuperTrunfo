// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
#include <stdio.h>

// Definições
#define NUM_ESTADOS 8
#define NUM_CIDADES 4

typedef struct {
  char codigo[4]; // Ex: A01\0
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;
} CartaCidade;

int main() {
  CartaCidade cartas[NUM_ESTADOS][NUM_CIDADES];
  char estados[NUM_ESTADOS] = {'A','B','C','D','E','F','G','H'};
  int i, j;

  printf("=== Cadastro das Cartas Super Trunfo - Países ===\n");
  for (i = 0; i < NUM_ESTADOS; i++) {
    for (j = 0; j < NUM_CIDADES; j++) {
      // Gerar código da carta
      snprintf(cartas[i][j].codigo, 4, "%c%02d", estados[i], j+1);
      printf("\nCadastro da carta %s\n", cartas[i][j].codigo);
      printf("População: ");
      scanf("%d", &cartas[i][j].populacao);
      printf("Área (km2): ");
      scanf("%f", &cartas[i][j].area);
      printf("PIB (em bilhões): ");
      scanf("%f", &cartas[i][j].pib);
      printf("Número de pontos turísticos: ");
      scanf("%d", &cartas[i][j].pontos_turisticos);
    }
  }

  printf("\n=== Cartas Cadastradas ===\n");
  for (i = 0; i < NUM_ESTADOS; i++) {
    for (j = 0; j < NUM_CIDADES; j++) {
      printf("\nCarta: %s\n", cartas[i][j].codigo);
      printf("População: %d\n", cartas[i][j].populacao);
      printf("Área: %.2f km2\n", cartas[i][j].area);
      printf("PIB: %.2f bilhões\n", cartas[i][j].pib);
      printf("Pontos turísticos: %d\n", cartas[i][j].pontos_turisticos);
    }
  }

  return 0;
}
