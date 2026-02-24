#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 int main() {
  // Definindo as variáveis
    char estado1, estado2;
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;
    char carta1[10];
    char carta2[10];
    char cidade1[50];
    char cidade2[51];

// Primeira carta

//Estado 1
printf("Digite o primeiro estado: \n");
scanf(" %c", &estado1);

// Código da carta 1
printf("Digite o código da primeira carta: \n");
scanf(" %s", carta1);

// Cidade 1
printf("Digite o nome da primeira cidade: \n");
scanf(" %s", cidade1);

// População 1
printf("Digite a população da primeira cidade: \n");
scanf("%d", &populacao1);

// Área 1
printf("Digite a área da primeira cidade(km²): \n");
scanf("%f", &area1);

// PIB 1
printf("Digite o PIB da primeira cidade: \n");
scanf("%f", &pib1);

// Pontos Turísticos 1
printf("Digite o número de pontos turísticos da primeira cidade: \n");
scanf("%d", &pontos1);


//Segunda carta

//Estado 2
printf("Digite o segundo estado: \n");
scanf(" %c", &estado2);

// Código da carta 2
printf("Digite o código da segunda carta: \n");
scanf(" %s", carta2);

// Cidade 2
printf("Digite o nome da segunda cidade: \n");
scanf(" %s", cidade2);

// Área 2
printf("Digite a área da segunda cidade(km²): \n");
scanf("%f", &area2);

// PIB 2
printf("Digite o PIB da segunda cidade: \n");
scanf("%f", &pib2);

// População 2
printf("Digite a população da segunda cidade: \n");
scanf("%d", &populacao2);

// Pontos Turísticos 2
printf("Digite o número de pontos turísticos da segunda cidade: \n");
scanf("%d", &pontos2);

// Exibição de dados Carta 1
printf("Carta 1\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", carta1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %f km²\n", area1);
printf("PIB: %f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);

// Exibição de dados Carta 2
printf("Carta 2\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", carta2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %f km²\n", area2);
printf("PIB: %f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);

return 0;
 }