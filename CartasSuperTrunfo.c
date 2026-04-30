#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  int população;
  int pontosturisticos;
  float pib;
  float area;
  char cidade[10];
  char codigo[4];
  char estado[2];

  printf("digite o codigo da sua carta: \n");
  scanf("%s", &codigo);
  printf("codigo da sua carta é: %s\n", codigo);

  printf("digite o nome do seu estado: \n");
  scanf("%s", &estado);
  printf("o seu estado é: %s\n", estado);

  printf("digite o nome da sua cidade: \n");
  scanf("%s", &cidade);
  printf("o nome da sua cidade é: %s\n", cidade);

  printf("digite a quantidade de pessoas na sua população: \n");
  scanf("%d", &população);
  printf("Sua população é: %d\n", população);

  printf("digite os seus pontosturisticos: \n");
  scanf("%i", &pontosturisticos);
  printf("seus pontos turisticos são: %i\n", pontosturisticos);

  printf("digite seu pib: \n");
  scanf("%f", &pib);
  printf("seu pib é: %.f\n", pib);

  printf("digite a sua area em KM²: \n");
  scanf("%f", &area);
  printf("sua area é: %.f\n", area);

  printf("Estado: %s\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", população);
  printf("Pontosturisticos: %i\n", pontosturisticos);
  printf("Pib: %.f\n", pib);
  printf("Area KM²: %.f\n", area);
  

return 0;
} 
