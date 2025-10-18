#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_1, estado_2;
  char codigo_c_1[4], codigo_c_2[4];
  char nome_c_1[50], nome_c_2[50];
  int populacao_1, populacao_2;
  float pib_1, pib_2;
  float area_1, area_2;
  int numero_pt_1, numero_pt_2;

  // Área para entrada de dados
  printf("Cadastro da Carta 1\n");
  printf("Digite o estado (uma letra de 'A' a 'H'): ");
  scanf(" %c", &estado_1);
    

  printf("Digite o código da carta (ex: A01): ");
  scanf(" %3s", codigo_c_1);
    
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nome_c_1);

  printf("Digite a população: ");
  scanf(" %d", &populacao_1);

  printf("Digite a área em ㎢: ");
  scanf(" %f", &area_1);

  printf("Digite o PIB em bilhões de reais: ");
  scanf(" %f", &pib_1);

  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &numero_pt_1);
  printf("\n");

//Mostra o nome da segunda carta (Carta 2)
  printf("Cadastro da Carta 2\n");
  printf("Digite o estado (uma letra de 'A' a 'H'): ");
  scanf(" %c", &estado_2);

  printf("Digite o código da carta (letra do estado + um número de 01 a 04, ex: B02): ");
  scanf(" %3s", codigo_c_2);
    
  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nome_c_2);

  printf("Digite a população: ");
  scanf(" %d", &populacao_2);

  printf("Digite a área em ㎢: ");
  scanf(" %f", &area_2);

  printf("Digite o PIB em bilhões de reais: ");
  scanf(" %f", &pib_2);

  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &numero_pt_2);

// Área para exibição dos dados da cidade
  printf("\n\"CARTA 1\"\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", codigo_c_1);
  printf("Nome da Cidade: %s\n", nome_c_1);
  printf("População: %d\n", populacao_1);
  printf("Área: %.2f ㎢\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", numero_pt_1);

  printf("\n\" CARTA 2\"\n");
  printf("Estado: %c\n", estado_2);
  printf("Codigo: %s\n", codigo_c_2);
  printf("Nome da Cidade: %s\n", nome_c_2);
  printf("Populacao: %d\n", populacao_2);
  printf("Area: %.2f ㎢\n", area_2);
  printf("PIB: %.2f bilhoes de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d\n\n\n", numero_pt_2);

  printf("Desafio Super Trunfo - Países\n");
  print("commit 1 - Cadastro das cartas\n");

return 0;
} 
