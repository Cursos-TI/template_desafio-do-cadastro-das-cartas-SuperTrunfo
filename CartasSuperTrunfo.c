#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2, nomeCidade1[50], nomeCidade2[50], codigoCarta1[50], codigoCarta2[50];
  int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  printf("Digite, de A a H, a letra que define o estado de sua primeira carta: \n");
  scanf(" %c", &estado1);
  printf("Digite o codigo de sua primeira carta: \n");
  scanf(" %s", &codigoCarta1);
  printf("Digite o nome da cidade: \n");
  scanf(" %s", &nomeCidade1);
  printf("Digite a populacao total da cidade: \n");
  scanf(" %d", &populacao1);
  printf("Digite a area total da cidade em km2: \n");
  scanf(" %f", &area1);
  printf("Digite o pib da cidade: \n");
  scanf(" %f", &pib1);
  printf("Digite quantos pontos turisticos tem a cidade: \n");
  scanf(" %d", &pontoTuristico1);

  // Área para exibição dos dados da cidade
  printf("===========================\n");
  printf("Carta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %c%s\n", estado1, codigoCarta1);
  printf("Nome da cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area(em km2): %.2f\n", area1);
  printf("Pib: %.2f km2\n", pib1);
  printf("Numero de pontos turisticos: %d\n", pontoTuristico1);
  printf("===========================\n");

  // Área para entrada de dados carta 2
  printf("Digite, de A a H, a letra que define o estado de sua segunda carta:\n");
  scanf(" %c", &estado2);
  printf("Digite o codigo de sua primeira carta:\n");
  scanf(" %s", &codigoCarta2);
  printf("Digite o nome da cidade:\n");
  scanf(" %s", &nomeCidade2);
  printf("Digite a populacao total da cidade:\n");
  scanf(" %d", &populacao2);
  printf("Digite a area total da cidade em km2:\n");
  scanf(" %f", &area2);
  printf("Digite o pib da cidade:\n");
  scanf(" %f", &pib2);
  printf("Digite quantos pontos turisticos tem a cidade:\n");
  scanf(" %d", &pontoTuristico2);

  // Área para exibição dos dados da cidade 2
  printf("===========================\n");
  printf("Carta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c%s\n", estado2, codigoCarta2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area(em km2): %.2f\n", area2);
  printf("Pib: %.2f km2\n", pib2);
  printf("Numero de pontos turisticos: %d\n", pontoTuristico2);
  printf("===========================\n");

return 0;
} 