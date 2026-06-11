#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Váriaveis carta 1
  char estado1;
  char codigo1[4];
  char cidade1[20];
  int população1;
  float area1;
  float PIB1;
  int pontos_turisticos1;
  float densidade1;
  float PIBpercapta1;
  double SuperPoder1;

  // Váriaveis carta 2
  char estado2;
  char codigo2[4];
  char cidade2[20];
  int população2;
  float area2;
  float PIB2;
  int pontos_turisticos2;
  float densidade2;
  float PIBpercapta2;
  float SuperPoder2;

  // Área para entrada de dados
  printf("-- Cadastro carta 1 --\n");
  printf("Digite a letra do Estado (A-H): ");
  scanf("%c", &estado1);

  printf("Digite po codigo da carta: ");
  scanf("%s", codigo1);

  printf("digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("digite a população: ");
  scanf("%d", &população1);

  printf("digite a area da cidade: ");
  scanf("%f", &area1);

  printf("digite o PIB em bilhoes da cidade: ");
  scanf("%f", &PIB1);

  printf("digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);
//cálculos relacionados a carta 1
    PIBpercapta1 = (PIB1 * 1000000000.0) / população1; //Como o PIB está em bilhoes de reais, ele deve ser multiplicado por 10^10
    densidade1 = população1 / area1;
    SuperPoder1 =(double)população1 + area1 + PIB1 + pontos_turisticos1 + PIBpercapta1 - densidade1;

  // Área para exibição dos dados da cidade
    printf("\nCarta 1:\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("população: %d\n", população1);
    printf("area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("pontos turisticos: %d\n", pontos_turisticos1);
    printf("densidade populacional: %.2f\n", densidade1);
    printf("PIB per capta: %.2f\n", PIBpercapta1);
    printf("Super Poder: %.2f\n", SuperPoder1);


    // ================= CARTA 2 =================
  // Área para entrada de dados
  printf("-- Cadastro carta 2 --\n");
  printf("Digite a letra do Estado (A-H): ");
  scanf(" %c", &estado2); 

  printf("Digite o codigo da carta: ");
  scanf("%s", codigo2); // 
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população: ");
  scanf("%d", &população2);

  printf("Digite a area da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhoes da cidade: ");
  scanf("%f", &PIB2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  //cálculos relacionados a carta 2
    PIBpercapta2 = (PIB2 * 1000000000.0) / população2; //Como o PIB está em bilhoes de reais, ele deve ser multiplicado por 10^10
    densidade2 = população2 / area2;
    SuperPoder2 = (double)população2 + area2 + PIB2 + pontos_turisticos2 + PIBpercapta2 - densidade2;
  // Área para exibição dos dados da cidade
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", população2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", PIB2);
  printf("Pontos turisticos: %d\n", pontos_turisticos2);
  printf("densidade populacional: %.2f\n", densidade2);
  printf("PIB per capta: %.2f\n", PIBpercapta2);
  printf("Super Poder: %.2f\n", SuperPoder2);

  //comparação das cartas
printf("Comparação de Cartas:\n");
    
    printf("População: Carta 1 venceu (%d)\n", população1 > população2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapta1 > PIBpercapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);


return 0;
} 