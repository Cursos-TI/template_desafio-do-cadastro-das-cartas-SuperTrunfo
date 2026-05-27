#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  char Estado1[100];
  char Codigo1[100];
  char Cidade1[100];
  int Populacao1;
  float Area1;
  float pib1;
  int pontos1;

  char Estado2[100];
  char Codigo2[100];
  char Cidade2[100];
  int Populacao2;
  float Area2;
  float pib2;
  int pontos2;

  // Área para entrada de dados
  printf("Carta 1:\n");
  printf("Digite o state: ");
  scanf("%s", Estado1);
  printf("Digite o código: ");
  scanf("%s", Codigo1);
  printf("Digite a cidade: ");
  scanf("%s", Cidade1);
  printf("Digite a população: ");
  scanf("%d", &Populacao1);
  printf("Digite a área: ");
  scanf("%f", &Area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos1);


  printf("\n\nCarta 2:\n");
  printf("Digite o state: ");
  scanf("%s", Estado2);
  printf("Digite o código: ");
  scanf("%s", Codigo2);
  printf("Digite a cidade: ");
  scanf("%s", Cidade2);
  printf("Digite a população: ");
  scanf("%d", &Populacao2);
  printf("Digite a área: ");
  scanf("%f", &Area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("\n\nCarta 1:\n");
  printf("Estado: %s\n", Estado1);
  printf("Código: %s\n", Codigo1);
  printf("Cidade: %s\n", Cidade1);
  printf("População: %d\n", Populacao1);
  printf("Área: %.2f Km²\n", Area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n\n", pontos1);
  printf("Densidade Populacional: %.2f habitantes por Km²\n", Populacao1 / Area1);
  printf("PIB per Capita: %.2f reais\n", pib1 / Populacao1);

  printf("\n\nCarta 2:\n");
  printf("Estado: %s\n", Estado2);
  printf("Código: %s\n", Codigo2);
  printf("Cidade: %s\n", Cidade2);
  printf("População: %d\n", Populacao2);
  printf("Área: %.2f Km²\n", Area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f habitantes por Km²\n", Populacao2 / Area2);
  printf("PIB per Capita: %.2f reais\n", pib2 / Populacao2);

  //COMPARAÇÃO DAS CARTAS SIMPLES
  printf("\n\nComparação Simples das Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
  printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
  printf("Densidade Populacional: Carta 2 venceu (%d)\n", (Populacao1 / Area1) < (Populacao2 / Area2));
  printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib1 / Populacao1) > (pib2 / Populacao2));
  printf("Super Trunfo: Carta 1 é o Super Trunfo! (%d)\n", (Populacao1+Area1+pib1+pontos1+(pib1/Populacao1)-(Populacao1/Area1)) > (Populacao2+Area2+pib2+pontos2+(pib2/Populacao2)-(Populacao2/Area2)));


  // COMPARAÇÃO DAS CARTAS IF ELSE
  printf("\n\nComparação das Cartas If Else:\n");

  printf("População: ");
  if (Populacao1 > Populacao2) {
    printf("Carta 1 vence\n");
  } else if (Populacao1 < Populacao2) {
    printf("Carta 2 vence\n");
  } else {
    printf("Empate\n");
  }

  printf("Área: ");
  if (Area1 > Area2) {
    printf("Carta 1 vence\n");
  } else if (Area1 < Area2) {
    printf("Carta 2 vence\n");
  } else {
    printf("Empate\n");
  }

  printf("PIB: ");
  if (pib1 > pib2) {
    printf("Carta 1 vence\n");
  } else if (pib1 < pib2) {
    printf("Carta 2 vence\n");
  } else {
    printf("Empate\n");
  }

  printf("Pontos turísticos: ");
  if (pontos1 > pontos2) {
    printf("Carta 1 vence\n");
  } else if (pontos1 < pontos2) {
    printf("Carta 2 vence\n");
  } else {
    printf("Empate\n");
  }

  printf("Densidade Populacional: ");
  if ((Populacao1 / Area1) > (Populacao2 / Area2)) {
    printf("Carta 2 vence\n");
  } else if ((Populacao1 / Area1) < (Populacao2 / Area2)) {
    printf("Carta 1 vence\n");
  } else {
    printf("Empate\n");
  }

  printf("PIB per Capita: ");
  if ((pib1 / Populacao1) > (pib2 / Populacao2)) {
    printf("Carta 1 vence\n");
  } else if ((pib1 / Populacao1) < (pib2 / Populacao2)) {
    printf("Carta 2 vence\n");
  } else {
    printf("Empate\n");
  }

  printf("Super Trunfo: ");
  if((Populacao1+Area1+pib1+pontos1+(pib1/Populacao1)-(Populacao1/Area1)) > (Populacao2+Area2+pib2+pontos2+(pib2/Populacao2)-(Populacao2/Area2))) {
    printf("Carta 1 é o Super Trunfo!\n");
  } else if((Populacao1+Area1+pib1+pontos1+(pib1/Populacao1)-(Populacao1/Area1)) < (Populacao2+Area2+pib2+pontos2+(pib2/Populacao2)-(Populacao2/Area2))) {
    printf("Carta 2 é o Super Trunfo!\n");
  } else {
    printf("Empate\n");
  }
return 0;
} 
