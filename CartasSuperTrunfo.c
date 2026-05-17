#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
  float area, pib, area2, pib2;
  char nomeCidade[50], nomeCidade2[50];
  char estado[3], estado2[3];
  char codigoCarta[2] = "1";
  char codigoCarta2[2] = "2";

  // Área para entrada de dados
  printf("Carta: %s\n", codigoCarta);
  printf("Digite o Estado (UF): ");
  scanf("%s", &estado);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade);

  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a Área (km²): ");
  scanf("%f", &area);

  printf("Digite o PIB (R$): ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos);


  printf("Carta: %s\n", codigoCarta2);
  printf("Digite o Estado (UF): ");
  scanf("%s", &estado2);

  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a Área (km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (R$): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("Carta: %s\n", codigoCarta);
  printf("Estado: %s\n", estado);
  printf("Código da Carta: %s%s\n", estado, codigoCarta);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d habitantes\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Pontos Turísticos: %d\n", pontosTuristicos);

  printf("Carta: %s\n", codigoCarta2);
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s%s\n", estado2, codigoCarta2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
}
