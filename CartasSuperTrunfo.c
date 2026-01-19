#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    //carta 1

    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Carta 2

    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Área para entrada de dados
  
    //Entrada de dados Carta 1 

    printf("=== Cadastro da Carta 1 ===\n");

    printf("\n");

    printf("Estado (A a H): ");
    scanf("%s", &estado1);

    printf("Codigo da Carta (Ex:A01): ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);
 
    printf("Area(Km²): ");
    scanf("%2f", &area1);

    printf("PIB(Bilhoes de Reais): ");
    scanf("%2f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");
    
    //Entrada de dados Carta 2 

    printf("=== Cadastro da Carta 2 ===\n");

    printf("\n");

    printf("Estado (A a H): ");
    scanf("%s", &estado2);

    printf("Codigo da Carta (Ex:A01): ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);
 
    printf("Area(Km²): ");
    scanf("%2f", &area2);

    printf("PIB(Bilhoes de Reais): ");
    scanf("%2f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");
  
    // Área para exibição dos dados da cidade

    printf("\n========== Carta 1 ==========\n");

    printf("\n");

    printf("Estado: %s\n", &estado1);
    printf("Codigo: %s\n", &codigo1);
    printf("Nome da Cidade: %s\n", &cidade1);
    printf("Populacao: %d\n", &populacao1);
    printf("Area: %f KM²\n", &area1);
    printf("PIB: %f bilhoes de reais\n", &pib1);
    printf("Pontos Turisticos: %d\n", &pontosTuristicos1);

    printf("\n");


    printf("\n========== Carta 2 ==========\n");

    printf("\n");

    printf("Estado: %s\n", &estado2);
    printf("Codigo: %s\n", &codigo2);
    printf("Nome da Cidade: %s\n", &cidade2);
    printf("Populacao: %d\n", &populacao2);
    printf("Area: %f km²\n", &area2);
    printf("PIB: %f bilhoes de reais\n", &pib2);
    printf("Pontos Turisticos: %d\n", &pontosTuristicos2);


return 0;
} 
