#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta_1_estado;
  char carta_1_codigo[4];
  char carta_1_cidade[60];
  unsigned long int carta_1_populacao;
  float carta_1_area;
  float carta_1_pib;
  int carta_1_pontos_turisticos;
  float carta_1_densidade_populacional;
  float carta_1_pib_per_capita;
  long double carta_1_super_poder;

  char carta_2_estado;
  char carta_2_codigo[4];
  char carta_2_cidade[60];
  unsigned long int carta_2_populacao;
  float carta_2_area;
  float carta_2_pib;
  int carta_2_pontos_turisticos;
  float carta_2_densidade_populacional;
  float carta_2_pib_per_capita;
  long double carta_2_super_poder;

  double PIB_BILHOES_TO_REAIS = 1000000000.0;

  // Área para entrada de dados
  printf("Carta 1: Digite a Letra do Estado A-H: ");
  scanf("%c", &carta_1_estado);

  printf("Carta 1: Digite o Código da Carta (Letra do estado + 2 digitos): ");
  scanf("%s", carta_1_codigo);

  // recupera o caractere \n deixado no buffer pelo scanf
  getchar();

  printf("Carta 1: Digite o Nome da Cidade: ");
  fgets(carta_1_cidade, 60, stdin);

  carta_1_cidade[strcspn(carta_1_cidade, "\n")] = 0;

  printf("Carta 1: Digite o Numero de habitantes: ");
  scanf("%lu", &carta_1_populacao);

  printf("Carta 1: Digite a Area da cidade em km quadrados: ");
  scanf("%f", &carta_1_area);

  printf("Carta 1: Digite o PIB da cidade: ");
  scanf("%f", &carta_1_pib);

  printf("Carta 1: Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &carta_1_pontos_turisticos);

  carta_1_densidade_populacional = ((float)carta_1_populacao) / carta_1_area;

  // converte o PIB em bilhoes de reais para reais depois divide pela população
  carta_1_pib_per_capita = carta_1_pib * PIB_BILHOES_TO_REAIS / (float)carta_1_populacao;

  carta_1_super_poder = carta_1_populacao + carta_1_area + carta_1_pib + carta_1_pontos_turisticos +
                        ((long double) 1.0 / (long double) carta_1_densidade_populacional) + carta_1_pib_per_capita;

  getchar(); // recupera o caractere \n deixado no buffer

  printf("\n\n");
  printf("Carta 2: Digite a Letra do Estado A-H: ");
  scanf("%c", &carta_2_estado);

  printf("Carta 2: Digite o Código da Carta (Letra do estado + 2 digitos): ");
  scanf("%s", carta_2_codigo);

  // recupera o caractere \n deixado no buffer pelo scanf
  getchar();

  printf("Carta 2: Digite o Nome da Cidade: ");
  fgets(carta_2_cidade, 60, stdin);

  carta_2_cidade[strcspn(carta_2_cidade, "\n")] = 0;

  printf("Carta 2: Digite o Numero de habitantes: ");
  scanf("%lu", &carta_2_populacao);

  printf("Carta 2: Digite a Area da cidade em km quadrados: ");
  scanf("%f", &carta_2_area);

  printf("Carta 2: Digite o PIB da cidade: ");
  scanf("%f", &carta_2_pib);

  printf("Carta 2: Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &carta_2_pontos_turisticos);

  carta_2_densidade_populacional = ((float)carta_2_populacao) / carta_2_area;

  // converte o PIB em bilhoes de reais para reais depois divide pela população
  carta_2_pib_per_capita = carta_2_pib * PIB_BILHOES_TO_REAIS / (float)carta_2_populacao;

  carta_2_super_poder = carta_2_populacao + carta_2_area + carta_2_pib + carta_2_pontos_turisticos +
                        ((long double) 1.0 / (long double) carta_2_densidade_populacional) + carta_2_pib_per_capita;

  // Área para exibição dos dados da cidade
  printf("\n\n");
  printf("Carta 1:\n");

  printf("Estado: %c\n", carta_1_estado);
  printf("Código: %s\n", carta_1_codigo);
  printf("Nome da Cidade: %s\n", carta_1_cidade);
  printf("População: %d\n", carta_1_populacao);
  printf("Área: %.2f km²\n", carta_1_area);
  printf("PIB: %.2f bilhões de reais\n", carta_1_pib);
  printf("Número de Pontos Turísticos: %d\n", carta_1_pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta_1_densidade_populacional);
  printf("PIB per Capita: %.2f reais\n", carta_1_pib_per_capita);
  printf("Super Poder: %.2Lf\n", carta_1_super_poder);

  printf("\n");
  printf("Carta 2:\n");

  printf("Estado: %c\n", carta_2_estado);
  printf("Código: %s\n", carta_2_codigo);
  printf("Nome da Cidade: %s\n", carta_2_cidade);
  printf("População: %d\n", carta_2_populacao);
  printf("Área: %.2f km²\n", carta_2_area);
  printf("PIB: %.2f bilhões de reais\n", carta_2_pib);
  printf("Número de Pontos Turísticos: %d\n", carta_2_pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta_2_densidade_populacional);
  printf("PIB per Capita: %.2f reais\n", carta_2_pib_per_capita);
  printf("Super Poder: %.2Lf\n", carta_2_super_poder);

  printf("\n\n");
  printf("Comparação de Cartas: \n\n");

  printf("População: %s\n", (carta_1_populacao > carta_2_populacao) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Área: %s\n", (carta_1_area > carta_2_area) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("PIB: %s\n", (carta_1_pib > carta_2_pib) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Número de Pontos Turísticos: %s\n", (carta_1_pontos_turisticos > carta_2_pontos_turisticos) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Densidade Populacional: %s\n", (carta_1_densidade_populacional > carta_2_densidade_populacional) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("PIB per Capita: %s\n", (carta_1_pib_per_capita > carta_2_pib_per_capita) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
  printf("Super Poder: %s\n", (carta_1_super_poder > carta_2_super_poder) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

  return 0;
}
