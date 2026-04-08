#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int carta1;
char estado1;
char codigo1[4];
char cidade1[50];
float populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float densidade_populacional1;
float pib_per_capita1;

int carta2;
char estado2;
char codigo2[4];
char cidade2[50];
float populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade_populacional2;
float pib_per_capita2;

  // Área para entrada de dados
printf("Carta 1: \n");
printf("Digite o estado da carta (ex: A,B,C,até H): \n");
scanf("%c", &estado1);
printf("Digite o codigo da carta (ex: A1,B1..etc..): \n");
scanf("%s", codigo1);
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]s", cidade1);
printf("Digite o número de habitantes da cidade: \n");
scanf("%f", &populacao1);
printf("Digite a área da cidade em km²: \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);
printf("Digite o número de pontos turisticos da cidade: \n");
scanf("%d", &pontos_turisticos1);

densidade_populacional1 = populacao1 / area1;
pib_per_capita1 = (pib1 * 1000000000)/ populacao1;

printf("\nCarta 2:\n");
printf("Digite o estado da carta (ex: A,B,C,até H): \n");
scanf(" %c", &estado2);
printf("Digite o codigo da carta (ex:A1,B2..etc..): \n");
scanf("%s", codigo2);
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]s", cidade2);
printf("Digite o número de habitantes da cidade: \n");
scanf("%f", &populacao2);
printf("Digite a área da cidade em km²: \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);
printf("Digite o número de pontos turisticos da cidade: \n");
scanf("%d", &pontos_turisticos2);

densidade_populacional2 = populacao2 / area2;
pib_per_capita2 = (pib2 * 1000000000)/ populacao2;

  // Área para exibição dos dados da cidade
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %.0f \n", populacao1);
printf("Área: %.2f \n", area1);
printf("PIB: %.2f \n", pib1);
printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
printf("Densidade Populacional:%.2f hab/km²\n", densidade_populacional1);
printf("PIB per Capita:%.2f reais\n", pib_per_capita1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %.0f \n", populacao2);
printf("Área: %.2f \n", area2);
printf("PIB: %.2f \n", pib2);
printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
printf("Densidade Populacional:%.2f hab/km²\n", densidade_populacional2);
printf("PIB per Capita:%.2f reais\n", pib_per_capita2);

return 0;
} 
