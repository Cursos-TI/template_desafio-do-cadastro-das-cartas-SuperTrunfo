//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  int carta1;
  char estado1;
  char codigo1[10];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  double densidade1;
  double perCapita1;
  float superPoder1;

  // Carta 2
  int carta2;
  char estado2;
  char codigo2[10];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  double densidade2;
  double perCapita2;
  float superPoder2;

  // Área para entrada de dados Carta 1
printf("Digite as informações da carta 1");
printf("\nEstado (A-H): ");
scanf("%c", &estado1);

printf("Código: ");
scanf("%s", &codigo1);

printf("Nome da Cidade: ");
scanf("%s", &cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);


 // Área para entrada de dados Carta 2
 // Necessário corrigir a exibição do scanf para o estado2, pois o buffer do teclado ainda contém o caractere de nova linha (\n) da entrada anterior. Para resolver isso, podemos adicionar um espaço antes do %c no scanf para consumir qualquer espaço em branco restante no buffer.
 // O erro para o erro foi corrigido ms gerou outro bug, pois tem uma linha em branco entre Estado da carta 2 e código da carta 2
printf("\nDigite as informações da carta 2");
printf("\nEstado (A-H): ");
scanf(" %c", &estado2);

printf("\nCódigo: ");
scanf("%s", &codigo2);

printf("Nome da Cidade: ");
scanf("%s", &cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

  // Densidade e pib per capta carta 1
  densidade1 = populacao1 / area1;
  perCapita1 = pib1 / populacao1;
  superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)perCapita1 + 1 / (float)densidade1;


  // Área para exibição dos dados da cidade Carta 1
  printf("\nCarta 1: \n");
  printf("\nEstado: %c", estado1);
  printf("\nCódigo: %s", codigo1);
  printf("\nNome da cidade: %s", cidade1);
  printf("\nPopulação: %d", populacao1);
  printf("\nÁrea: %.2fkm²", area1);
  printf("\nPIB %.2f bilhões de reais", pib1);
  printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1);
  printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
  printf("\nPIB per Capita: %.2f reais", perCapita1);


  // Densidade e pib per capta carta 2
  densidade2 = populacao2 / area2;
  perCapita2 = pib2 / populacao2;
  superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)perCapita2 + 1 / (float)densidade2;

  // Área para exibição dos dados da cidade Carta 2
  printf("\nCarta 2:");
  printf("\nEstado: %c", estado2);
  printf("\nCódigo: %s", codigo2);
  printf("\nNome da cidade: %s", cidade2);
  printf("\nPopulação: %d", populacao2);
  printf("\nÁrea: %.2fkm²", area2);
  printf("\nPIB %.2f bilhões de reais", pib2);
  printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
  printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
  printf("\nPIB per Capita: %.2f reais\n", perCapita2);



  //Comparação entre as cartas
  printf("\n\nComparação de cartas:");
  printf("\nPopulação: ");
  if (populacao1 > populacao2) {
    printf("Carta 1 é a vencedora com população: %d", populacao1);
  } else if (populacao2 > populacao1) {
    printf("Carta 2 é a vencedora com população: %d", populacao2);
  } else {
    printf("Empate! Ambas as cartas têm a mesma população: %d", populacao1);
  }

  printf("\nÁrea: ");
  if (area1 > area2) {  
    printf("Carta 1 é a vencedora com área: %.2fkm²", area1);
  } else if (area2 > area1) {
    printf("Carta 2 é a vencedora com área: %.2fkm²", area2);
  } else {
    printf("Empate! Ambas as cartas têm a mesma área: %.2fkm²", area1);
  }

  printf("\nPIB: ");
  if (pib1 > pib2) {
    printf("Carta 1 é a vencedora com PIB: %.2f bilhões de reais", pib1);
  } else if (pib2 > pib1) {
    printf("Carta 2 é a vencedora com PIB: %.2f bilhões de reais  ", pib2);
  } else {
    printf("Empate! Ambas as cartas têm o mesmo PIB: %.2f bilhões de reais", pib1);
  }

  printf("\nNúmero de Pontos Turísticos: ");
  if (pontosTuristicos1 > pontosTuristicos2) {
    printf("Carta 1 é a vencedora com número de pontos turísticos: %d", pontosTuristicos1);
  } else if (pontosTuristicos2 > pontosTuristicos1) {
    printf("Carta 2 é a vencedora com número de pontos turísticos: %d", pontosTuristicos2);
  } else {    printf("Empate! Ambas as cartas têm o mesmo número de pontos turísticos: %d", pontosTuristicos1);
  }

  printf("\nDensidade Populacional: ");
  if (densidade1 <  densidade2) {
    printf("Carta 1 é a vencedora com densidade populacional: %.2f hab/km²", densidade1);
  } else if (densidade2 < densidade1) {
    printf("Carta 2 é a vencedora com densidade populacional: %.2f hab/km²", densidade2);
  } else {
    printf("Empate! Ambas as cartas têm a mesma densidade populacional: %.2f hab/km²", densidade1);
  }

  printf("\nPIB per Capita: ");
  if (perCapita1 > perCapita2) {
    printf("Carta 1 é a vencedora com PIB per Capita: %.2f reais", perCapita1);
  } else if (perCapita2 > perCapita1) {
    printf("Carta 2 é a vencedora com PIB per Capita: %.2f reais", perCapita2);
  } else {
    printf("Empate! Ambas as cartas têm o mesmo PIB per Capita: %.2f reais", perCapita1);
  }

  printf("\nSuper Poder: ");
  if (superPoder1 > superPoder2) {
    printf("Carta 1 é a vencedora com Super Poder: %.2f", superPoder1);
  } else if (superPoder2 > superPoder1) { 
    printf("Carta 2 é a vencedora com Super Poder: %.2f", superPoder2);
  } else {
    printf("Empate! Ambas as cartas têm o mesmo Super Poder: %.2f", superPoder1);
  }

return 0;
}