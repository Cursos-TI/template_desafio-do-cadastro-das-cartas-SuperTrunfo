#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //Uma letra de A a H
    char estado1, estado2;
   
    // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char codigo1[4], codigo2[4];
    
    //O nome da cidade. Tipo: char[] (string)
    char cidade1[10], cidade2[10];
   
    //O número de habitantes da cidade. Tipo: int
    int populacao1, populacao2;
        
    //A área da cidade em quilômetros quadrados. Tipo: float (km²)
    float area1, area2;
    
    //O Produto Interno Bruto da cidade. Tipo: float 
    float pib1, pib2;
    
    //A quantidade de pontos turísticos na cidade. Tipo: int
    int pontoturistico1, pontoturistico2;
  
    // Área para entrada de dados
   
    printf("Carta 01 \n");
    printf("Digite o estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (01 a 04): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);
    printf("Digite a area em Km²: "); //TEM ERRO NA ENTRADA
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico1);

    printf("Carta 02 \n");
    printf("Digite o estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (01 a 04): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a area em Km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico2);
  
    // Área para exibição dos dados da cidade
    printf("Carta 01 \n");
    printf("Estado: %c\n ", estado1);
    printf("Código: %c , %s\n ", estado1, codigo1);
    printf("Nome da Cidade: %s\n ", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n ", pontoturistico1);

    printf("Carta 02 \n");
    printf("Estado: %c\n ", estado2);
    printf("Cógido: %c , %s \n ", estado2, codigo2);
    printf("Nome da Cidade: %s\n ", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n ", pontoturistico2);

return 0;
  } 