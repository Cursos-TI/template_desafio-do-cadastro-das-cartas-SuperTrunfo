#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Densisade e PIB
// Objetivo: No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Variáveis carta 01:
  char Estado1;
  char CodigoCarta1[3];
  char Cidade1[20];
  int poupulacao1;
  float Km1;
  float PIB1;
  int PontoTuristico1;
  float DensidadePopul1;
  float PIBperCapita1;

  //Variáveis carta 02:
   char Estado2;
   char CodigoCarta2[3];
   char Cidade2[20];
   int poupulacao2;
   float Km2;
   float PIB2;
   int PontoTuristico2;
   float  DensidadePopul2;
   float PIBperCapita2;

  // Área para entrada de dados

  //Carta 01
  printf("Carta 01: \n\n");

  printf("Digite uma letra de 'A' a 'H'(representando um dos oito estados): \n");
  scanf(" %c", &Estado1);

  printf("Digite o código da carta, a letra do estado seguido de 01 a 04(ex: A01, B03): \n");
  scanf("%s", CodigoCarta1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", Cidade1);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &poupulacao1);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &Km1);

  printf("Digite o O Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &PontoTuristico1);
 
  //Densidade populacioanl 1 
  DensidadePopul1 = (float)poupulacao1 / Km1;
  PIBperCapita1 = PIB1 / (float)poupulacao1;


  //Carta 02
  printf("\nCarta 02: \n\n");

  printf("Digite uma letra de 'A' a 'H'(representando um dos oito estados): \n");
  scanf(" %c", &Estado2);

  printf("Digite o código da carta, a letra do estado seguido de 01 a 04(ex: A01, B03): \n");
  scanf("%s", CodigoCarta2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", Cidade2);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &poupulacao2);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &Km2);

  printf("Digite o O Produto Interno Bruto da cidade: \n");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &PontoTuristico2);
  
  //Densidade populacional carta 2
  DensidadePopul2 = (float)poupulacao2 / Km2;
  PIBperCapita2 = PIB2 / (float)poupulacao2;
  

  // Área para exibição dos dados da cidade

  //Carta 01
  printf("\nCarta 01: \n");

  printf("Estado: %c \n", Estado1);
  printf("Código: %s \n", CodigoCarta1);
  printf("Nome da Cidade: %s \n", Cidade1);
  printf("População: %d \n", poupulacao1 );
  printf("Área: %f \n", Km1);
  printf("PIB; %f \n", PIB1);
  printf("Número de Pontos Turísticos: %d \n", PontoTuristico1);
  printf("Densidade populacional: %.2f \n", &DensidadePopul1);
  printf("PIB per Capita: %.2f \n", PIBperCapita1);

 //Carta 02
  printf("\nCarta 02: \n");

  printf("Estado: %c \n", Estado2);
  printf("Código: %s \n", CodigoCarta2);
  printf("Nome da Cidade: %s \n", Cidade2);
  printf("População: %d \n", poupulacao2);
  printf("Área: %f \n", Km2);
  printf("PIB; %f \n", PIB2);
  printf("Número de Pontos Turísticos: %d \n", PontoTuristico2);
  printf("Densidade populacional: %.2f \n", DensidadePopul2);
  printf("PIB per Capita: %.2f \n", PIBperCapita2);
  

return 0;
} 
