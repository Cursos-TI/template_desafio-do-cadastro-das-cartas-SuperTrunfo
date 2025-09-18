/*
Modelo:
Carta 01
Estado:
Código da Carta:
Nome da Cidade:
População:
Área em km²:
PIB:
Números de Pontos Turisticos:
 */

#include <stdio.h>

int main(){
  // Declarando as variáveis Cartas
  char estado1, estado2;
  char codigoCarta1[4], codigoCarta2[4];
  char nomeCidade1[20], nomeCidade2[20];
  int pontosTuristicos1, pontosTuristicos2;
  unsigned long int populacao1, populacao2;
  float pib1, area1, pib2, area2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;

  // Dados Carta 01:
    //Estado
    printf("Inserindo dados da Carta 01 \nDigite o Estado: \n");
    scanf(" %c", &estado1);

    //Código Carta
    printf("Insira o código do estado: \n");
    scanf("%s", codigoCarta1);
  
    //Nome Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    //População
    printf("Insira a população: \n");
    scanf("%lu", &populacao1);

    // Area em km²
    printf("Insira a area(km²): \n");
    scanf("%f", &area1);

    //PIB
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);

    // Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Carta 02
      // Estado
      printf("\nInserindo dados da Carta 02 \nDigite o Estado: \n");
      scanf(" %c", &estado2);

      // Código Carta
      printf("Insira o código do estado: \n");
      scanf("%s", codigoCarta2);

      // Nome Cidade
      printf("Insira o nome da cidade: \n");
      scanf("%s", nomeCidade2);

      // População
      printf("Insira a população: \n");
      scanf("%lu", &populacao2);

      // Area em km²
      printf("Insira a area(km²): \n");
      scanf("%f", &area2);

      // PIB
      printf("Insira o PIB: \n");
      scanf("%f", &pib2);

      // Pontos Turísticos
      printf("Quantidade de Pontos Turísticos: \n");
      scanf("%d", &pontosTuristicos2);
      
      // Calculando densidade populacional
      densidade1 = populacao1 / area1;
      densidade2 = populacao2 / area2;
      
      //Calculando PIB Per Capita
      // Adicionando a multiplicação para tornar bilhões
      pibPerCapita1 = (pib1*1000000000) / populacao1;
      pibPerCapita2 = (pib2*1000000000) / populacao2;

      //Calculando super poder
      float superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
      float superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

     
      // Mostrando dados cadastrados
      //Carta01
      printf("\n********Carta 01********\n");
      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", codigoCarta1);
      printf("Cidade: %s\n", nomeCidade1);
      printf("População: %lu habitantes\n", populacao1);
      printf("Área: %.2f Km² \n", area1);
      printf("PIB: R$ %.2f bilhões\n", pib1);
      printf("Quantidade de pontos turísticos: %d\n", pontosTuristicos1);
      printf("Densidade populacional: %.2f hab/km²\n", densidade1);
      printf("PIB Percapita: R$ %.2f\n", pibPerCapita1);
      printf("SUPER PODER: %.2f \n", superpoder1);

      //Carta 02
      printf("\n********Carta 02********\n");
      printf("Estado: %c\n", estado2);
      printf("Código: %s\n", codigoCarta2);
      printf("Cidade: %s\n", nomeCidade2);
      printf("População: %lu habitantes\n", populacao2);
      printf("Área: %.2f Km² \n", area2);
      printf("PIB: R$ %.2f bilhões\n", pib2);
      printf("Quantidade de pontos turísticos: %d\n", pontosTuristicos2);
      printf("Densidade populacional: %.2f hab/km²\n", densidade2);
      printf("PIB Percapita: R$ %.2f\n", pibPerCapita2);
      printf("SUPER PODER: %.2f \n", superpoder2);
      printf("\n********FIM********\n");

      //Imprimindo o resultado
      int populacao = populacao1 > populacao2;
      int area = area1 > area2;
      int PIB = pib1 > pib2;
      int pontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
      // Em densidade ganha quem tem menor numero
      int densidade = densidade1 < densidade2;
      int pibPerCapita = pib1 > pib2;
      int superPoder = superpoder1 > superpoder2;


      //Comparando as cartas!
      //Resultado interpretado pelo usuário.
      printf("\n*******Comparação das cartas*******\n");
      printf("Carta 1 vence quando a resposta é 1!! Carta 2 vence quando a resposta é 0 \n");
      printf("População: %d \n", populacao);
      printf("Area: %d \n", area);
      printf("PIB: %d \n", PIB);
      printf("Pontos Turísticos: %d \n", pontosTuristicos);
      printf("Densidade Populacional: %d \n", densidade);
      printf("PIB Per Capita: %d \n", pibPerCapita);
      printf("Super Poder: %d \n", superPoder);

      return 0;
};