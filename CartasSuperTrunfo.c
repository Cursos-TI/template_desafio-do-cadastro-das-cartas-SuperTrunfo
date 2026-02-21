#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char buffer[100];
  int carta1;
  int carta2;
  char estado1[3];
  char estado2[3];
  char codigo1[5];
  char codigo2[5];
  char nomedacidade1[17];
  char nomedacidade2[17];
  int populacao1;
  int populacao2;
  float area1; 
  float area2;
  float pib1;
  float pib2;
  int pontosturisticos1;
  int pontosturisticos2;

  // Área para entrada de dados
  printf("Primeira carta. Digite o número 1.\n");
  fgets(buffer, sizeof(buffer), stdin);
  carta1 = atoi(buffer);
  printf("Digite o estado da primeira carta, com uma letra de 'A' a 'H' (representando um dos oito estados).\n");
  fgets(estado1, sizeof(estado1), stdin);
  estado1[strcspn(estado1, "\n")] = 0;
  printf("Digite o código da primeira carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
  fgets(codigo1, sizeof(codigo1), stdin);
  codigo1[strcspn(codigo1, "\n")] = 0;
  printf("Digite o nome da cidade da primeira carta. Qualquer nome.\n");
  fgets(nomedacidade1, sizeof(nomedacidade1), stdin);
  nomedacidade1[strcspn(nomedacidade1, "\n")] = 0;
  printf("Digite o tamanho da população da cidade da primeira carta.\n");
  fgets(buffer, sizeof(buffer), stdin);
  populacao1 = atoi(buffer);
  printf("Digite a área da cidade da primeira carta\n");
  fgets(buffer, sizeof(buffer), stdin);
  area1 = atof(buffer);
  printf("Digite o número do PIB da cidade da primeira carta\n");
  fgets(buffer, sizeof(buffer), stdin);
  pib1 = atof(buffer);
  printf("Digite o número de pontos turísticos da cidade da primeira carta\n");
  fgets(buffer, sizeof(buffer), stdin);
  pontosturisticos1 = atoi(buffer);
  printf("Carta 2. Digite o número 2.\n");
  fgets(buffer, sizeof(buffer), stdin);
  carta2 = atoi(buffer);
  printf("Digite o estado da segunda carta, com uma letra de 'A' a 'H' (representando um dos oito estados).\n");
  fgets(estado2, sizeof(estado2), stdin);
  estado2[strcspn(estado2, "\n")] = 0;
  printf("Digite o código da segunda carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
  fgets(codigo2, sizeof(codigo2), stdin);
  codigo2[strcspn(codigo2, "\n")] = 0;
  printf("Digite o nome da cidade da segunda carta\n");
  fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
  nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;
  printf("Digite o tamanho da população da cidade da segunda carta.\n");
  fgets(buffer, sizeof(buffer), stdin);
  populacao2 = atoi(buffer);
  printf("Digite a área da cidade da segunda carta\n");
  fgets(buffer, sizeof(buffer), stdin);
  area2 = atof(buffer);
  printf("Digite o número do PIB da cidade da segunda carta\n");
  fgets(buffer, sizeof(buffer), stdin);
  pib2 = atoi(buffer);
  printf("Digite o número de pontos turísticos da cidade da segunda carta\n");
  fgets(buffer, sizeof(buffer), stdin);
  pontosturisticos2 = atoi(buffer);
  printf("\n\n");

  // Área para exibição dos dados da cidade
  printf("Carta 1.\n");
  printf("Estado: %s \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", nomedacidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Número de Pontos Turísticos: %d \n\n", pontosturisticos1);
  printf("Carta 2.\n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nomedacidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
return 0;
} 
