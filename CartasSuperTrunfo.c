#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  int população1;
  int pontosturisticos1;
  float pibcapital1;
  float populacaodensidade1;
  float pib1;
  float area1;
  char cidade1[30];
  char codigo1[6];
  char estado1[2];

  int população2;
  int pontosturisticos2;
  float pibcapital2;
  float populacaodensidade2;
  float pib2;
  float area2;
  char cidade2[30];
  char codigo2[6];
  char estado2[2];

  printf("**Digite os dados da primeira carta**\n");
  
  printf("digite o codigo da sua carta: \n");
  scanf("%s", &codigo1);
  printf("codigo da sua carta é: %s\n", codigo1);

  printf("digite o nome do seu estado: \n");
  scanf("%s", &estado1);
  printf("o seu estado é: %s\n", estado1);

  printf("digite o nome da sua cidade: \n");
  scanf("%s", &cidade1);
  printf("o nome da sua cidade é: %s\n", cidade1);

  printf("digite a quantidade de pessoas na sua população: \n");
  scanf("%d", &população1);
  printf("Sua população é: %d\n", população1);

  printf("digite os seus pontosturisticos: \n");
  scanf("%i", &pontosturisticos1);
  printf("seus pontos turisticos são: %i\n", pontosturisticos1);

  printf("digite seu pib: \n");
  scanf("%f", &pib1);
  printf("seu pib é: %.f\n", pib1);

  printf("digite a sua area em KM²: \n");
  scanf("%f", &area1);
  printf("sua area é: %.f\n", area1);

  populacaodensidade1 = ( população1 + area1) / 2;
  pibcapital1 = ( população1 + pib1) / 2;

  printf("**Digite os dados da segunda carta**\n");

  printf("digite o codigo da sua carta: \n");
  scanf("%s", &codigo2);
  printf("codigo da sua carta é: %s\n", codigo2);

  printf("digite o nome do seu estado: \n");
  scanf("%s", &estado2);
  printf("o seu estado é: %s\n", estado2);

  printf("digite o nome da sua cidade: \n");
  scanf("%s", &cidade2);
  printf("o nome da sua cidade é: %s\n", cidade2);

  printf("digite a quantidade de pessoas na sua população: \n");
  scanf("%d", &população2);
  printf("Sua população é: %d\n", população2);

  printf("digite os seus pontosturisticos: \n");
  scanf("%i", &pontosturisticos2);
  printf("seus pontos turisticos são: %i\n", pontosturisticos2);

  printf("digite seu pib: \n");
  scanf("%f", &pib2);
  printf("seu pib é: %.f\n", pib2);

  printf("digite a sua area em KM²: \n");
  scanf("%f", &area2);
  printf("sua area é: %.f\n", area2);

  populacaodensidade2 = ( população2 + area2) / 2;
  pibcapital2 = ( população2 + pib2) / 2;
  
  printf("***Cartas Super Trunfo***\n");

  printf("**Carta 1**\n");

  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", população1);
  printf("Pontosturisticos: %i\n", pontosturisticos1);
  printf("Pib: %.2f\n", pib1);
  printf("Capital: %.2f\n", pibcapital1);
  printf("Area KM²: %.2f\n", area1);
  printf("Densidade Hab/KM²: %.2f\n", populacaodensidade1);

  printf("**Carta 2**\n");

  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", população2);
  printf("Pontosturisticos: %i\n", pontosturisticos2);
  printf("Pib: %.2f\n", pib2);
  printf("Capital: %.2f\n", pibcapital2);
  printf("Area KM²: %.2f\n", area2);
  printf("Densidade Hab/KM²: %.2f\n", populacaodensidade2);
  
return 0;
} 