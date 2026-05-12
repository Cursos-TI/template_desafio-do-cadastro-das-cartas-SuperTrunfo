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

  int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

  printf("\n**Digite os dados da primeira carta**\n");
  
  printf("\ndigite o codigo da sua carta: ");
  scanf("%s", &codigo1);

  printf("\ndigite o nome do seu estado: ");
  scanf("%s", &estado1);

  printf("\ndigite o nome da sua cidade: ");
  scanf("%s", &cidade1);

  printf("\ndigite a quantidade de pessoas na sua população: ");
  scanf("%d", &população1);

  printf("\ndigite os seus pontosturisticos: ");
  scanf("%i", &pontosturisticos1);

  printf("\ndigite seu pib: ");
  scanf("%f", &pib1);

  printf("\ndigite a sua area em KM²: ");
  scanf("%f", &area1);

  populacaodensidade1 = ( população1 + area1) / 2;
  pibcapital1 = ( população1 + pib1) / 2;

  printf("\n**Digite os dados da segunda carta**\n");

  printf("\ndigite o codigo da sua carta: ");
  scanf("%s", &codigo2);

  printf("\ndigite o nome do seu estado: ");
  scanf("%s", &estado2);

  printf("\ndigite o nome da sua cidade: ");
  scanf("%s", &cidade2);

  printf("\ndigite a quantidade de pessoas na sua população: ");
  scanf("%d", &população2);

  printf("\ndigite os seus pontosturisticos: ");
  scanf("%i", &pontosturisticos2);

  printf("\ndigite seu pib: ");
  scanf("%f", &pib2);

  printf("\ndigite a sua area em KM²: ");
  scanf("%f", &area2);

  populacaodensidade2 = ( população2 + area2) / 2;
  pibcapital2 = ( população2 + pib2) / 2;
  
  printf("\n***Cartas Super Trunfo***\n");

  printf("\n**Carta 1**\n");

  printf("\nEstado: %s\n", estado1);
  printf("\nCodigo: %s\n", codigo1);
  printf("\nCidade: %s\n", cidade1);
  printf("\nPopulação: %d\n", população1);
  printf("\nPontosturisticos: %i\n", pontosturisticos1);
  printf("\nPib: %.2f Bilhões\n", pib1);
  printf("\nCapital: %.2f Bilhões\n", pibcapital1);
  printf("\nArea: %.2f KM²\n", area1);
  printf("\nDensidade: %.2f Hab/KM²\n", populacaodensidade1);

  printf("\n**Carta 2**\n");

  printf("\nEstado: %s\n", estado2);
  printf("\nCodigo: %s\n", codigo2);
  printf("\nCidade: %s\n", cidade2);
  printf("\nPopulação: %d\n", população2);
  printf("\nPontosturisticos: %i\n", pontosturisticos2);
  printf("\nPib: %.2f Bilhões\n", pib2);
  printf("\nCapital: %.2f Bilhões\n", pibcapital2);
  printf("\nArea: %.2f KM²\n", area2);
  printf("\nDensidade: %.2f Hab/KM²\n", populacaodensidade2);

  resultado1 = população1 > população2;
  resultado2 = pontosturisticos1 > pontosturisticos2;
  resultado3 = pib1 > pib2;
  resultado4 = pibcapital1 > pibcapital2;
  resultado5 = area1 > area2;
  resultado6 = populacaodensidade1 < populacaodensidade2;
  resultado7 = area1 * população1 > area2 * população2;

  printf("\n**Regra**\n");
  printf("\n****O numero 1 representa a carta 1, ja o numero 0 representa a carta 2****\n");

  printf("\n****Pontos ganhos****\n");

  printf("\nResultado População: %i\n", população1 > população2);
  printf("\nResultado Pontosturisticos: %i\n", pontosturisticos1 > pontosturisticos2);
  printf("\nResultado Pib: %i\n", pib1 > pib2);
  printf("\nResultado Capital: %i\n", pibcapital1 > pibcapital2);
  printf("\nResultado Area: %i\n", area1 > area2);
  printf("\nResultado Densidade: %i\n", populacaodensidade1 < populacaodensidade2);
  printf("\nResultado Super Poder: %i\n", area1 * população1 > area2 * população2);

  printf("\n***VENCEDOR***\n");

  printf("\nResultado final: %i", resultado1 + resultado2 + resultado3 + resultado4 + resultado5 + resultado6 + resultado7 >= 4);
  
return 0;
} 