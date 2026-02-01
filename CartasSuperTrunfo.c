#include <stdio.h>

// Desafio Super Trunfo - Cidades

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
  unsigned long int populacao1, populacao2;
  int pontosT1, pontosT2;
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  // Primeira carta
  printf("Cadastro da carta (1)\n");
  printf("Digite uma letra para representar um dos oito estados (A-H): ");
  scanf(" %c", &estado1);
  printf("Digite o código da carta (O código deve receber o prefixo do estado escolhido + sequencia numérica): ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a população: ");
  scanf("%ld", &populacao1);
  printf("Digite a área (em km²): ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &pontosT1);
  printf("--------------------------------\n");

  // Segunda carta
  printf("Cadastro da carta (2)\n");
  printf("Digite uma letra para representar um dos oito estados (A-H): ");
  scanf(" %c", &estado2);
  printf("Digite o código da carta (O código deve receber o prefixo do estado escolhido + sequencia numérica): ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população: ");
  scanf("%ld", &populacao2);
  printf("Digite a área (em km²): ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &pontosT2);
  printf("---------------------------------\n");

  // Área para o cálculo de Densidade Populacional e PIB per Capita (conversão explicita)
  float densidade1 = (float) populacao1 / area1; 
  float densidade2 = (float) populacao2 / area2;

  float densidadeInverso1 = area1 / (float) populacao1; 
  float densidadeInverso2 = area2 / (float) populacao2;

  float pcapita1 = (float) pib1 / populacao1;
  float pcapita2 = (float) pib2 / populacao2;

  // Cálculo para o SUPERPOWERRRR
  // somando todos os atributos numéricos 
  // (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
  float superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosT1 + pcapita1 + densidadeInverso1;
  float superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosT2 + pcapita2 + densidadeInverso2;

  // Área para exibição dos dados da cidade (Cartas)
  printf("------------ Carta 1 ------------\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %ld\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: R$ %.2f\n", pib1);
  printf("Nº de pontos turisticos: %d\n", pontosT1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: R$ %.2f reais\n", pcapita1);
  printf("SuperPODER: # %.2f\n", superPoder1);
  printf("---------------------------------\n");

  printf("------------ Carta 2 ------------\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %ld\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Nº de pontos turisticos: %d\n", pontosT2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: R$ %.2f reais\n", pcapita2);
  printf("SuperPODER: # %.2f\n", superPoder2);
  printf("---------------------------------\n");

  // Combate das cartas - Comparação
  // Para apresentar qual carta é a que ganhou (A carta '%d'), cálculo 2 - se for 1 (2-1=1 - logo a carta 1), se for 0 (2-0=2 - logo carta 2).
  printf("------------ Combate ------------\n");
  printf("SuperPODER: A Carta %d venceu (%d)\n", (2 - (superPoder1 > superPoder2)), (superPoder1 > superPoder2));
  printf("População: A Carta %d venceu (%d)\n", (2 - (populacao1 > populacao2)), (populacao1 > populacao2));
  printf("Área: A Carta %d venceu (%d)\n", (2 - (area1 > area2)), (area1 > area2));
  printf("PIB: A Carta %d venceu (%d)\n", (2 - (pib1 > pib2)), (pib1 > pib2));
  printf("Nº de pontos turisticos: A Carta %d venceu (%d)\n", (2 - (pontosT1 > pontosT2)), (pontosT1 > pontosT2));
  printf("Densidade Populacional: A Carta %d venceu (%d)\n", (2 - (densidade1 < densidade2)), (densidade1 < densidade2));
  printf("PIB per Capita: A Carta %d venceu (%d)\n", (2 - (pcapita1 > pcapita2)), (pcapita1 > pcapita2));
  printf("---------------------------------\n");

return 0;
}
