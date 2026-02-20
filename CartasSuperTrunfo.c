#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1;
  char carta2;
  char estado1;
  char estado2;
  char codigo1[3];
  char codigo2[3];
  char nomedacidade1[15];
  char nomedacidade2[15];
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
  scanf("%d",&carta1);
  printf("Digite o estado da primeira carta, com uma letra de 'A' a 'H' (representando um dos oito estados).\n");
  scanf("%c",&estado1);
  printf("Digite o código da primeira carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
  scanf("%s",&codigo1);
  printf("Digite o nome da cidade da primeira carta. Qualquer nome.\n");
  scanf("%s", &nomedacidade1); 
  printf("Digite a área da cidade da primeira carta\n");
  scanf("%.2f", &area1); 
  printf("Digite o número do PIB da cidade da primeira carta\n");
  scanf("%.2f", &pib1); 
  printf("Digite o número de pontos turísticos da cidade da primeira carta\n");
  scanf("%d", &pontosturisticos1);
  printf("Carta 2. Digite o número 2.\n");
  scanf("%d", &carta2);
  printf("Digite o estado da segunda carta, com uma letra de 'A' a 'H' (representando um dos oito estados).\n");
  scanf("%c", &estado2);
  printf("Digite o código da segunda carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade da segunda carta\n");
  scanf("%s", &nomedacidade2); 
  printf("Digite a área da cidade da segunda carta\n");
  scanf("%.2f", &area2); 
  printf("Digite o número do PIB da cidade da segunda carta\n");
  scanf("%.2f", &pib2); 
  printf("Digite o número de pontos turísticos da cidade da segunda carta\n");
  scanf("%d", &pontosturisticos2); 

  // Área para exibição dos dados da cidade
  printf("Carta 1.\n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", nomedacidade1);
  printf("Área: %.2f \n", area1);
  printf("PIB: %.2F \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
  printf("Carta 2.\n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nomedacidade2);
  printf("Área: %.2f \n", area2);
  printf("PIB: %.2F \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
return 0;
} 
