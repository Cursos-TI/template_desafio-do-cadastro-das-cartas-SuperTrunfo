#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

 //definicoes de variaveis da carta 1
  char estado1;
  char codigo1[4];
  char cidade1[30];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadep1;
  float pibpc1;
  float SPcarta1;

  //definicoes de variaveis da carta 2
  char estado2;
  char codigo2[4];
  char cidade2[30];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadep2;
  float pibpc2;
  float SPcarta2;
  
  // Área para entrada de dados
  
  //entrada de dados da carta 1
  printf("**Cadastro da carta 1**\n");
  printf("Digite o estado usando apenas uma letra \n (ex: Alagoas = A, Brasilia = B) :");
  scanf("%c", &estado1);

  printf("Digite o codigo da carta ate 4 caracteres \n (ex: Alagoas =A01, Brasilia =B02) :");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade \n (ex: SaoPaulo, Santos, SaoVicente) : ");
  scanf("%s", cidade1);

  printf("Digite o numero de habitantes (sem pontos e virgulas) :");
  scanf("%lu", &populacao1);

  printf("Digite a area da cidade em km2 (sem pontos e virgulas) :");
  scanf("%f", &area1);

  printf("Digite o PIB(produto interno bruto) \n da cidade (sem pontos e virgulas) :");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos \n na cidade :");
  scanf("%d", &pontosTuristicos1);

   //entrada de dados da carta 2
  printf("**Cadastro da carta 2**\n");
  printf("Digite o estado usando apenas uma letra \n (ex: Alagoas = A, Brasilia = B) :");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta ate 4 caracteres \n (ex: Alagoas =A01, Brasilia =B02) :");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade \n (ex: SaoPaulo, Santos, SaoVicente) : ");
  scanf("%s", cidade2);

  printf("Digite o numero de habitantes (sem pontos e virgulas) :");
  scanf("%lu", &populacao2);

  printf("Digite a area da cidade em km2 (sem pontos e virgulas) :");
  scanf("%f", &area2);

  printf("Digite o PIB(produto interno bruto) \n da cidade (sem pontos e virgulas) :");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos \n na cidade :");
  scanf("%d", &pontosTuristicos2);

  //calculos da densidade populacional e pib per capita
  densidadep1 = (float) populacao1 / area1;
  densidadep2 = (float) populacao2 / area2;

  pibpc1 = pib1 / populacao1;
  pibpc2 = pib2 / populacao2;

  // super poder das cartas = soma da populacao, area, pib, pontos turisticos, pib per capita, inverso da densidade

  SPcarta1 = (float) populacao1 + area1 + pib1 +
             (float) pontosTuristicos1 + pibpc1 +
             densidadep1 > 0.0 ? 1.0 / densidadep1 : 0.0;

  SPcarta2 = (float) populacao2 + area2 + pib2 +
             (float) pontosTuristicos2 + pibpc2 +
             densidadep2 > 0.0 ? 1.0 / densidadep2 : 0.0;

  // Área para exibição dos dados das cidades

  // exibicao de dados inseridos pelo usuario(jogador)
  printf("\n*** As cartas foram cadastradas com sucesso!!***\n");

  //informacoes da carta 1
  printf("\n---**Carta 1**---\n");
  printf("Estado: %c \n", estado1);
  printf("Codigo: %s \n", codigo1);
  printf("Nome da cidade: %s \n", cidade1);
  printf("Populacao: %lu \n", populacao1);
  printf("Area: %.2f km2 \n", area1);
  printf("PIB: %.2f bilhoes de reais \n", pib1);
  printf("pontos turisticos: %d \n", pontosTuristicos1);
  printf("Densidade populacional: %.2f hab/km2\n", densidadep1);
  printf("PIB per capita: %.2f bilhoes por habitante\n", pibpc1);
  printf("Super Poder: %.2f \n", SPcarta1);
  //informacoes da carta 2
    printf("\n---**Carta 2**---\n");
  printf("Estado: %c \n", estado2);
  printf("Codigo: %s \n", codigo2);
  printf("Nome da cidade: %s \n", cidade2);
  printf("Populacao: %lu \n", populacao2);
  printf("Area: %.2f km2 \n", area2);
  printf("PIB: %.2f bilhoes de reais \n", pib2);
  printf("pontos turisticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidadep2);
  printf("PIB per capita: %.2f bilhoes por habitante\n", pibpc2);
  printf("Super Poder: %.2f \n", SPcarta2);

  printf("**** Comparacao das cartas ****");

  // area de exibicao dos valores comparados, utilizando operadores de comparacao
  int maior_pop = SPcarta1 > SPcarta2 ? 1:0;
   printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (int)(populacao1 > populacao2));
   printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (int)(area1 > area2)); 
   printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (int)(pib1 > pib2)); 
   printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (int)(pontosTuristicos1 > pontosTuristicos2)); 
   printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadep1 < densidadep2) ? 1 : 2, (int)(densidadep1 < densidadep2));  
   printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpc1 > pibpc2) ? 1 : 2, (int)(pibpc1 > pibpc2)); 
   printf("Super Poder: Carta %d venceu (%d)\n", (SPcarta1 > SPcarta2) ? 1 : 2, (int)(SPcarta1 > SPcarta2));

  return 0;
} 
