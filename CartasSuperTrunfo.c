#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  char Estado[100];
  char Codigo[100];
  char Cidade[100];
  int Populacao;
  float Area;
  float pib;
  int pontos;

  // Área para entrada de dados
  printf("Carta1:\n");

  printf("Digite o estado: ");
  scanf("%s", Estado);
  
  printf("Digite o código: ");
  scanf("%s", Codigo);
  
  printf("Digite a cidade: ");
  scanf("%s", Cidade);
  
  printf("Digite a população: ");
  scanf("%d", &Populacao);
  
  printf("Digite a área: ");
  scanf("%f", &Area);
  
  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos);

  printf("\n\nCarta2:\n");

  printf("Digite o estado: ");
  scanf("%s", Estado);
  
  printf("Digite o código: ");
  scanf("%s", Codigo);
  
  printf("Digite a cidade: ");
  scanf("%s", Cidade);
  
  printf("Digite a população: ");
  scanf("%d", &Populacao);
  
  printf("Digite a área: ");
  scanf("%f", &Area);
  
  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos);


  

  // Área para exibição dos dados da cidade
  printf("\n\nCarta 1:\n");
  printf("Estado: %s\n", Estado);
  printf("Código: %s\n", Codigo);
  printf("Cidade: %s\n", Cidade);
  printf("População: %d\n", Populacao);
  printf("Área: %.2f\n", Area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turísticos: %d\n\n", pontos);

  printf("Carta 2:\n");
  printf("Estado: %s\n", Estado);
  printf("Código: %s\n", Codigo);
  printf("Cidade: %s\n", Cidade);
  printf("População: %d\n", Populacao);
  printf("Área: %.2f\n", Area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turísticos: %d\n", pontos);

return 0;
} 
