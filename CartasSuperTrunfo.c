#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado[5];
    char codigo[5];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float DensidadePopulacional; 
    float PIBperCapita;

  // Área para entrada de dados
  printf("Carta 1\n");

  printf("Estado: "); 
  scanf("%s", &estado);

  printf("Código: ");
  scanf("%s", &codigo);

  printf("Nome da cidade: ");
  scanf("%s", &cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf(" %f", &pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosturisticos);

  DensidadePopulacional = populacao / area;
  PIBperCapita = pib / populacao;

  printf("Densidade Populacional: %f\n", DensidadePopulacional);
  printf("PIB per Capita: %f\n", PIBperCapita);
  
  printf ("\n");

  printf("Carta 2\n");

  printf("Estado: ");
  scanf("%s", &estado);

  printf("Código: ");
  scanf("%s", &codigo);

  printf("Nome da cidade: ");
  scanf("%s", &cidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf(" %f", &pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosturisticos);

  DensidadePopulacional = populacao / area;
  PIBperCapita = pib / populacao;

  printf("Densidade Populacional: %f\n", DensidadePopulacional);
  printf("PIB per Capita: %f\n", PIBperCapita);

  printf ("\n\n");

  // Área para exibição dos dados da cidade
  printf("Carta 1\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %f\n", DensidadePopulacional);
  printf("PIB per Capita: %f\n", PIBperCapita);

  printf ("\n");

  printf("Carta 2\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %f\n", DensidadePopulacional);
  printf("PIB per Capita: %f\n", PIBperCapita);

  return 0;

} 