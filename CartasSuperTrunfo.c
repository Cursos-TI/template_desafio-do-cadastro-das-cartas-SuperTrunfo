#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado1[50];
  char codCarta1[50];
  char nomeCidade1[50];
  int populacao1;
  float areaKm1;
  float pib1;
  int numPontosTuristicos1;

  char estado2[50];
  char codCarta2[50];
  char nomeCidade2[50];
  int populacao2;
  float areaKm2;
  float pib2;
  int numPontosTuristicos2;

  printf("Desafio Cartas Super Trunfo\n");
  printf("\n");
  printf("Carta 1\n");
  printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados)[carta 1]: \n");
  scanf("%s", &estado1);
  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)[carta 1]: \n");
  scanf("%s", &codCarta1);
  printf("Digite o nome da cidade [carta 1]: \n");
  scanf("%s", &nomeCidade1);
  printf("Digite o número de habitantes da cidade [carta 1]: \n");
  scanf("%d", &populacao1);
  printf("Digite a área da cidade em quilômetros quadrados [carta 1]: \n");
  scanf("%f", &areaKm1);
  printf("Digite o Produto Interno Bruto da cidade [carta 1]: \n");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turísticos na cidade [carta 1]: \n");
  scanf("%d", &numPontosTuristicos1);

  printf("\n");
  printf("Carta 2\n");
  printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados) [carta 2]: \n");
  scanf("%s", &estado2);
  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) [carta 2]: \n");
  scanf("%s", &codCarta2);
  printf("Digite o nome da cidade [carta 2]: \n");
  scanf("%s", &nomeCidade2);
  printf("Digite o número de habitantes da cidade [carta 2]: \n");
  scanf("%d", &populacao2);
  printf("Digite a área da cidade em quilômetros quadrados [carta 2]: \n");
  scanf("%f", &areaKm2);
  printf("Digite o Produto Interno Bruto da cidade [carta 2]: \n");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turísticos na cidade [carta 2]: \n");
  scanf("%d", &numPontosTuristicos2);


  printf("\n");
  printf("Carta 1:\n");
  printf("Estado: %s \n", estado1);
  printf("Código: %s \n", codCarta1);
  printf("Nome da Cidade: %s \n", nomeCidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %f km² \n", areaKm1);
  printf("PIB: %f bilhões de reais \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos1);

  printf("\n");
  printf("Carta 2:\n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codCarta2);
  printf("Nome da Cidade: %s \n", nomeCidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km² \n", areaKm2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos2);

return 0;
}
