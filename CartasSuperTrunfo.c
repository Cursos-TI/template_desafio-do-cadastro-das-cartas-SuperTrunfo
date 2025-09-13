#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
    char e1, e2, cod1[4], cod2[4], cidade1[10], cidade2[10];
    int pop1, pop2, pt1, pt2;
    float a1, a2, pib1, pib2, dp1, dp2, ppc1, ppc2;
    
    //Inserindo dados da Carta 1:
    printf("Digite a letra que representa o estado da primeira carta(de A ate H): ");
    scanf(" %c", &e1);  
    printf("Digite a letra junto do codigo da primeira carta: ");
    scanf(" %s", cod1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %s", cidade1);
    printf("Digite a populacao da primeira carta: ");
    scanf(" %d", &pop1);
    printf("Digite a area da primeira carta: ");
    scanf(" %f", &a1);
    printf("Digite o PIB da primeira carta: ");
    scanf(" %f", &pib1);
    printf("Digite o Numero de Pontos Turisticos da primeira carta: ");
    scanf(" %d", &pt1);
    
        
    //Inserindo dados da Carta 2:
    printf("Digite a letra que representa o estado da segunda carta(de A ate H): ");
    scanf(" %c", &e2);  
    printf("Digite a letra junto do codigo da segunda carta: ");
    scanf(" %s", cod2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %s", cidade2);
    printf("Digite a populacao da segunda carta: ");
    scanf(" %d", &pop2);
    printf("Digite a area da segunda carta: ");
    scanf(" %f", &a2);
    printf("Digite o PIB da segunda carta: ");
    scanf(" %f", &pib2);
    printf("Digite o Número de Pontos Turisticos da segunda carta: ");
    scanf(" %d", &pt2);
  
    //Calculo de densidade populacional
    
    dp1 = (float)pop1/a1;
    dp2 = (float)pop2/a2;
  
   //Calculo PIB per Capita
   
   ppc1 = (float)pib1/pop1;
   ppc2 = (float)pib2/pop2;   
    
  //Carta 1:
  printf("\nCarta 1\n");
  printf("Estado: %c\n", e1);
  printf("Codigo: %s\n", cod1); 
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", pop1);
  printf("Area: %.2f km2\n", a1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pt1);
  printf("Densidade Populacional: %.2f hab/km2\n", dp1);
  printf("PIB per Capita: %.2f reais\n", ppc1);
  
  //Carta 2:
  printf("\nCarta 2\n");
  printf("Estado: %c\n", e2);
  printf("Codigo: %s\n", cod2); 
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", pop2);
  printf("Area: %.2f km2\n", a2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pt2);
  printf("Densidade Populacional: %.2f hab/km2\n", dp2);
  printf("PIB per Capita: %.2f reais\n", ppc2);
  
  printf("\nPressione Enter para sair...");
  getchar();  // consome o '\n' que sobrou
  getchar();  // aguarda o Enter do usuario
  return 0;     
}    
