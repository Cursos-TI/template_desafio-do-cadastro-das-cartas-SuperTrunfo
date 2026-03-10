#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 3 - comparação com dois atributos e menu dinâmico implementados
// Objetivo: implementa comparação avançada com dois atributos no Super Trunfo

int main (){

    // Área para definição das variáveis para armazenar as propriedades das cidades

    int turismo1, turismo2, atributo1, atributo2, opcao;
    float area1, pib1, area2, pib2, pibcapita1, pibcapita2, densidade1, densidade2, superpoder1, superpoder2, valor1_c1, valor1_c2, valor2_c1, valor2_c2, soma1, soma2;
    char cidade1[20], codigo1[20], estado1[20], cidade2[20], codigo2[20], estado2[20], nomeAtributo1[30], nomeAtributo2[30];
    unsigned long int populacao1, populacao2;

    //Área para entrada de dados

    printf("Digite os dados da CARTA 1\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turismo1);

    
    printf("Digite os dados da CARTA 2\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);

    //Calcular a Densidade Populacional

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //Calcular o PIB per Capita
    pibcapita1 = (pib1 * 1000000000) / populacao1;
    pibcapita2 = (pib2 * 1000000000) / populacao2;

    //calcular o super poder das cartas
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + pibcapita1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pibcapita2 + (1.0 / densidade2);

    //Área para exibição dos dados da cidades

    printf("==== CARTA 1 ====\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("==== CARTA 2 ====\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Área de comparação das cartas
    
    printf("==== Comparação das CARTAS ====\n");
    printf("Escolha o primeiro atributo para Comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Poder\n");
    scanf("%d", &opcao);
    scanf("%d", &atributo1);

    printf("==== Comparação das CARTAS ====\n");
    printf("Escolha o segundo atributo para Comparar:\n");
    if (atributo1 != 1) {
    printf("1 - População\n");
    }
    if (atributo1 != 2) {
        printf("2 - Área\n");
    }
    if (atributo1 != 3) {
        printf("3 - PIB\n");
    }
    if (atributo1 != 4) {
        printf("4 - Pontos Turísticos\n");
    }
    if (atributo1 != 5) {
        printf("5 - Densidade\n");
    }
    if (atributo1 != 6) {
        printf("6 - PIB per Capita\n");
    }
    if (atributo1 != 7) {
        printf("7 - Super Poder\n");
    }
    scanf("%d", &atributo2);

  if (atributo1 == atributo2){
    printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    return 0;
  }
    
    switch (atributo1)
    {
    case 1:
      valor1_c1 = populacao1;
      valor1_c2 = populacao2;
      strcpy(nomeAtributo1, "População");
      break;
    case 2:
      valor1_c1 = area1;
      valor1_c2 = area2;
      strcpy(nomeAtributo1, "Área");
      break;
    case 3:
      valor1_c1 = pib1;
      valor1_c2 = pib2;
      strcpy(nomeAtributo1, "PIB");
      break;
    case 4:
      valor1_c1 = turismo1;
      valor1_c2 = turismo2;
      strcpy(nomeAtributo1, "Pontos Turísticos");
      break;
    case 5:
      valor1_c1 = densidade1;
      valor1_c2 = densidade2;
      strcpy(nomeAtributo1, "Densidade Populacional");
      break;
    case 6:
      valor1_c1 = pibcapita1;
      valor1_c2 = pibcapita2;
      strcpy(nomeAtributo1, "PIB per Capita");
      break;
    case 7:
      valor1_c1 = superpoder1;
      valor1_c2 = superpoder2;
      strcpy(nomeAtributo1, "Poder");
      break;
    default:
      printf("Opção invalida\n");
      return 0;
    }

    switch (atributo2)
    {
    case 1:
      valor2_c1 = populacao1;
      valor2_c2 = populacao2;
      strcpy(nomeAtributo2, "População");
      break;
    case 2:
      valor2_c1 = area1;
      valor2_c2 = area2;
      strcpy(nomeAtributo2, "Área");
      break;
    case 3:
      valor2_c1 = pib1;
      valor2_c2 = pib2;
      strcpy(nomeAtributo2, "PIB");
      break;
    case 4:
      valor2_c1 = turismo1;
      valor2_c2 = turismo2;
      strcpy(nomeAtributo2, "Pontos Turísticos");
      break;
    case 5:
      valor2_c1 = densidade1;
      valor2_c2 = densidade2;
      strcpy(nomeAtributo2, "Densidade Populacional");
      break;
    case 6:
      valor2_c1 = pibcapita1;
      valor2_c2 = pibcapita2;
      strcpy(nomeAtributo2, "PIB per Capita");
      break;
    case 7:
      valor2_c1 = superpoder1;
      valor2_c2 = superpoder2;
      strcpy(nomeAtributo2, "Poder");
      break;
    default:
      printf("Opção invalida!\n");
      return 0;
    }

  if (atributo1 == 5) {
    valor1_c1 = 1 / valor1_c1;
    valor1_c2 = 1 / valor1_c2;
  }

  if (atributo2 == 5) {
    valor2_c1 = 1 / valor2_c1;
    valor2_c2 = 1 / valor2_c2;
  }

  soma1 = valor1_c1 + valor2_c1;
  soma2 = valor1_c2 + valor2_c2;

  printf("Comparação entre: %s x %s\n", estado1, estado2);
  printf("Atributos escolhidos: %s e %s\n", nomeAtributo1, nomeAtributo2);
  printf("Valores da carta 1: %.2f e %.2f\n", valor1_c1, valor2_c1);
  printf("Valores da carta 2: %.2f e %.2f\n", valor1_c2, valor2_c2);

  printf("Soma da carta 1: %.2f\n", soma1);
  printf("Soma da carta 2: %.2f\n", soma2);

  if (soma1 > soma2) {
    printf("%s venceu!\n", estado1);
  } else if (soma2 > soma1) {
    printf("%s venceu!\n", estado2);
  } else {
    printf("Empate!\n");
  }

  return 0;
}
