#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 
  int população;
  int pontosturisticos;
  float pib;
  float area;
  // Área para entrada de dados
  printf("digite a quantidade de pessoas na sua população: \n");
  scanf("%d", &população);
  printf("Sua população é: %d\n", população);

  printf("digite os seus pontosturisticos: \n");
  scanf("%i", &pontosturisticos);
  printf("seus pontos turisticos são: %i\n", pontosturisticos);

  printf("digite seu pib: \n");
  scanf("%f", &pib);
  printf("seu pib é: %.f\n", pib);

  printf("digite a sua area: \n");
  scanf("%f", &area);
  printf("sua area é: %.f\n", area);
  // Área para exibição dos dados da cidade

return 0;
} 
