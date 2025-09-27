#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;
  char codigoCarta1[4], codigoCarta2[4];
  char nomeCidade1[50], nomeCidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidade1, densidade2, pibpercapta1, pibpercapta2;
  float inversodensidade1, inversodensidade2;
  float superpoder1, superpoder2;
  int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPIBperCapita, resultadoSuperPoder;

  // Área para entrada de dados
  printf("Digite os dados da primeira cidade:\n");
  printf("Estado (Uma letra de A até H): ");
  scanf(" %c", &estado1);
  printf("Código da Carta (Ex: A01 ou B02): ");
  scanf("%s", codigoCarta1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);
  printf("População: ");
  scanf("%ld", &populacao1);
  printf("Área (em km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\nDigite os dados da segunda cidade:\n");
  printf("Estado (Uma letra de A até H [Não repetir a anterior]): ");
  scanf(" %c", &estado2);
  printf("Código da Carta [Diferente do anterior] (Ex: A01 ou B02): ");
  scanf("%s", codigoCarta2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);
  printf("População: ");
  scanf("%ld", &populacao2);
  printf("Área (em km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  //Área dos cálculos
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;
  pibpercapta1 = (float) pib1 / populacao1;
  pibpercapta2 = (float) pib2 / populacao2;
  inversodensidade1 = 1 / densidade1;
  inversodensidade2 = 1 / densidade2;

  //Superpoder (população, área, PIB, número de pontos turísticos, 
  //PIB per capita e o inverso da densidade populacional – 
  //quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float.

  superpoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapta1 + inversodensidade1;
  superpoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapta2 + inversodensidade2;


  // Área para exibição dos dados da cidade
  printf("\nAqui estão os dados cadastrados nas duas cartas:\n\n");
  printf("Carta 1 - Dados da primeira cidade:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %ld\n", populacao1);
  printf("Área (em km²): %.2fkm²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade populacional: %.2fhab/km²\n", densidade1);
  printf("PIB Percapta: %.2f reais\n", pibpercapta1);

  printf("\nCarta 2 - Dados da segunda cidade:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %ld\n", populacao2);
  printf("Área (em km²): %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB Percapta: %.2f reais\n", pibpercapta2);
  printf(" \n");

  //Area para comparar as cartas

  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPIB = pib1 > pib2;
  resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  resultadoDensidadePopulacional = inversodensidade1 < inversodensidade2;
  resultadoPIBperCapita = pibpercapta1 > pibpercapta2;
  resultadoSuperPoder = superpoder1 > superpoder2;
  
  
    // Impressão dos resultados (Pesquisei sobre operadores ternários para ter uma melhor visão, já que não estudamos estruturas condicionais)
    printf("Comparacao de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
    printf("Area: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", resultadoPIB ? 1 : 2, resultadoPIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidadePopulacional ? 1 : 2, resultadoDensidadePopulacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);
  
return 0;
}
