#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

void cadastrarCarta(int numeroCarta) {
   // Área para definição das variáveis para armazenar as propriedades das cidades

  char codigoEstado;
  int codigoCidade;
  char codigoCarta[4];
  char nomeCidade[100];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;
  
  // Área para entrada de dados

  printf("Para iniciar informe o código do Estado (Digite uma letra de A - H ): ");
  scanf(" %c", &codigoEstado);
  printf("Informe o código da cidade (1 a 4) : ");
  scanf("%i", &codigoCidade);
  snprintf(codigoCarta, sizeof(codigoCarta), "%c%02d", codigoEstado, codigoCidade);
  printf("Informe o nome da cidade: ");
  scanf(" %[^\n]", nomeCidade);
  printf("Digite a população da cidade: ");
  scanf("%d", &populacao);
  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area);
  printf("Digite o PIB da cidade (em bilhões): ");
  scanf("%f", &pib);
  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &pontosTuristicos);
  // Área para exibição dos dados da cidade
  printf("\n--- Dados da Carta Cadastrada ---\n");
  printf("Carta %d: \n", numeroCarta);
  printf("Estado: %c\n", codigoEstado);
  printf("Código: %s\n", codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos turísticos: %d\n", pontosTuristicos);
}

int main() {
  printf("Bem-vindo ao jogo Super Trunfo com tema PAÍSES \n");
  cadastrarCarta(1);
  printf("\n");
  cadastrarCarta(2);
  printf("\n");



  // Área para exibição dos dados da cidade

return 0;
} 
